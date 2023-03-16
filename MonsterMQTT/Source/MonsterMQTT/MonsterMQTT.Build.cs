// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

#if UE_5_0_OR_LATER
using EpicGames.Core;
#else
using Tools.DotNETCommon;
#endif

public class MonsterMQTT : ModuleRules
{
	public MonsterMQTT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				//添加个公开路径
				Path.Combine (ModuleDirectory, "Public")
				
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				//添加私有路径
				Path.Combine (ModuleDirectory, "Private")
				
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"JsonUtilities", 
				"Json"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Projects",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		// 如果平台是win64框架下
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/Windows"));

			LoadThirdPartyLibrary("mosquitto", Target);
			LoadThirdPartyLibrary("mosquittopp", Target);
		}
	}
	
	// 动态载入库的函数
	public void LoadThirdPartyLibrary(string libname, ReadOnlyTargetRules Target)
	{
		// 静态库拓展
		string StaticLibExtension = ".lib";
		// 动态库拓展
		string DynamicLibExtension = ".dll";
			
		// 第三库的位置
		string ThirdPartyPath = Path.Combine(ModuleDirectory, "../ThirdParty/mosquitto");
		//静态库位置
		string LibrariesPath = Path.Combine(ThirdPartyPath, "lib");
		// 头文件位置
		string IncludesPath = Path.Combine(ThirdPartyPath, "include");
		// 二进制文件库位置
		string BinariesPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries", Target.Platform.ToString()));
		
		// 链接到静态库
		if(Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, libname + StaticLibExtension));
		}
		
		// 拷贝二进制文件
		if (!Directory.Exists(BinariesPath))
		{
			Directory.CreateDirectory(BinariesPath);
		}
		// 动态链接库拷贝工作
		if (!File.Exists(Path.Combine(BinariesPath, libname + DynamicLibExtension)))
		{
			File.Copy(Path.Combine(LibrariesPath, libname + DynamicLibExtension), Path.Combine(BinariesPath, libname + DynamicLibExtension), true);
		}
		
		// 设置动态链接库
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicDelayLoadDLLs.Add(libname + DynamicLibExtension);
		}
		//运行时态依赖
		RuntimeDependencies.Add(Path.Combine(BinariesPath, libname + DynamicLibExtension));
		//设置头文件位置
		PublicIncludePaths.Add(IncludesPath);
		// Add definitions
		PublicDefinitions.Add(string.Format("WITH_" + libname.ToUpper() + "_BINDING={0}", 1));
	}	
}



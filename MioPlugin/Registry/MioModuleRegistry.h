//
//  MioModuleRegistry.h
//  MioPlugin
//
//  统一模块注册中心。
//  替代 Tweak.m 的手动 Config 注册 + FeatureModuleRegistry。
//  所有模块信息集中在一个数组中，registerAll 自动分流到：
//    - ConfigManager（注册 Config）
//    - HookRegistry（安装 Hook）
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MioModuleDescriptor;

@interface MioModuleRegistry : NSObject

/// 获取所有模块描述符
+ (NSArray<MioModuleDescriptor *> *)allDescriptors;

/// 执行全量注册：
/// 1. 遍历所有模块，将 configClass 注册到 ConfigManager
/// 2. 调用 [ConfigManager loadAll]
/// 3. 安装所有模块的 hookClasses
+ (void)registerAll;

// ─────────── 以下方法与 FeatureModuleRegistry 兼容 ───────────

/// 获取所有分组标题（有序，用于设置页 UI）
+ (NSArray<NSString *> *)orderedSectionTitles;

/// 获取指定分组下的模块（用于设置页 UI）
+ (NSArray<MioModuleDescriptor *> *)descriptorsForSection:(NSString *)sectionTitle;

@end

NS_ASSUME_NONNULL_END
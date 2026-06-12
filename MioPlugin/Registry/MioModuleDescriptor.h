//
//  MioModuleDescriptor.h
//  MioPlugin
//
//  统一模块描述符。
//  同时承载 Config 类、Hook 类、设置页 Controller 类，
//  实现"一处注册，自动分流"。
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 统一模块描述符
/// 一个描述符 = 一个功能模块的全部信息
@interface MioModuleDescriptor : NSObject

/// 模块唯一标识符（如 @"revoke"）
@property (nonatomic, copy, readonly) NSString *identifier;

/// 模块标题（如 @"防撤回"）
@property (nonatomic, copy, readonly) NSString *title;

/// Config 类（符合 ConfigModule 协议，可选）
/// 若提供，registerAll 时会自动调用 [ConfigManager registerModule:]
@property (nonatomic, assign, readonly, nullable) Class configClass;

/// Hook 安装类列表（每个类需实现 + (void)install）
/// registerAll 时会自动逐个调用 +[install]
@property (nonatomic, copy, readonly) NSArray<Class> *hookClasses;

/// 设置页 Controller 类（可选，用于导航）
@property (nonatomic, assign, readonly, nullable) Class controllerClass;

/// 设置页副标题（可选，用于 UI 展示）
@property (nonatomic, copy, readonly, nullable) NSString *subtitle;

/// 所属分组标题（可选，用于 UI 分组）
@property (nonatomic, copy, readonly, nullable) NSString *sectionTitle;

/// 构造器
/// @param identifier   模块唯一标识符
/// @param title        模块标题
/// @param configClass  ConfigModule 类（传 nil 表示无 Config）
/// @param hookClasses  Hook 类数组（传 @[] 或 nil 表示无 Hook）
/// @param controllerClass 设置页 Controller（传 nil 表示无）
/// @param subtitle     副标题
/// @param sectionTitle 分组标题
+ (instancetype)descriptorWithIdentifier:(NSString *)identifier
                                   title:(NSString *)title
                              configClass:(nullable Class)configClass
                              hookClasses:(nullable NSArray<Class> *)hookClasses
                          controllerClass:(nullable Class)controllerClass
                                 subtitle:(nullable NSString *)subtitle
                              sectionTitle:(nullable NSString *)sectionTitle;
@end

NS_ASSUME_NONNULL_END
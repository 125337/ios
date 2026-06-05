//
//  CornerResponsibility.h
//  MioPlugin
//
//  功能：管理各 VC 的圆角模块归属，集中查询，避免判断分散。
//

#import <UIKit/UIKit.h>

/// 圆角模块枚举
typedef NS_ENUM(NSInteger, CornerModule) {
    /// 列表圆角模块（由 ListCornerRadiusHook 管理）
    kCornerModuleList = 0,
    /// 资料卡片美化模块（由 ProfileCardBgHook 管理）
    kCornerModuleProfileCard,
    /// 无圆角模块（当前不支持圆角的页面）
    kCornerModuleNone,
};

@interface CornerResponsibility : NSObject

/// 查询指定 VC 的圆角模块归属
/// @param vc 当前正在展示的 UIViewController 实例
/// @return CornerModule 枚举值
+ (CornerModule)moduleForViewController:(UIViewController *)vc;

/// 判断指定 VC 是否应由列表圆角模块处理
/// 等效于 moduleForViewController: == kCornerModuleList
+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc;

/// 判断指定 VC 是否应由资料卡片美化模块处理
/// 等效于 moduleForViewController: == kCornerModuleProfileCard
+ (BOOL)isProfileCardResponsibleFor:(UIViewController *)vc;

/// 判断指定 VC 是否不支持任何圆角
/// 等效于 moduleForViewController: == kCornerModuleNone
+ (BOOL)isNoCornerResponsibleFor:(UIViewController *)vc;

@end
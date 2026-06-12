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
};

@interface CornerResponsibility : NSObject

/// 判断指定 VC 是否应由列表圆角模块处理
/// 遍历黑名单 → 匹配则返回 NO，否则返回 YES（默认归列表圆角）
+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc;

@end
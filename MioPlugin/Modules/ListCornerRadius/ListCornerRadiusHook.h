#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ListCornerRadiusHook : NSObject

+ (void)initListCornerRadiusHook;
+ (void)install;

/// 某页面列表 cell 的最终内缩边距（0 = 不内缩）。
/// ★ 单一事实源：cell hook 的内缩决策与 HomeCard header 的构建宽基准共用——
/// header 宿主也是 MMTableViewCell，同样会被内缩，header 必须按最终 cell 宽构建
+ (CGFloat)listCellMarginForViewController:(UIViewController *)vc;

@end
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 首页电报分组 Hook
/// 移植自 WCR 2.1.8（WCRefineHomeSessionGroupingHook），全部结论有反编译行号实证：
/// - 对 NewMainFrameViewController 仅 MSHookMessageEx（项目铁律）
/// - 过滤模型 = per-section 隐藏行集合 + 原行号重映射
///   （WCRGroupingSnapshot.hiddenOriginalRowsBySection / entries，见 WCRGroupingSnapshot.h 与 wcrGrouping_.c:4616-4726）
/// - 分组条 = 目标 section 的 section header 接管（Misc_part19.c:4618-4655 + wcrGrouping_.c:5133-5224）
/// - 分类规则 = session:matchesTab: 的内置 kind0/kind1 路径（Misc_part6.c:8722-8780）
@interface SessionGroupsHook : NSObject

+ (void)install;

@end

NS_ASSUME_NONNULL_END

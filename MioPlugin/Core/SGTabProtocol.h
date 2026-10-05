#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 电报分组（SessionGroupsTab）与侧边分组（SideGroupsTab）共享的 tab 字段协议。
/// 两个模型的数据与存储完全独立（sgTabs / sdTabs），仅字段结构同构；
/// 快照/匹配引擎（SessionGroupsHook）以协议类型统一消费两种 tab。
@protocol SGTabProtocol <NSObject>
@property (nonatomic, readonly, copy) NSString *tabId;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSInteger kind;        // 0=全部 1=scope 组 3=最近 N 天
@property (nonatomic, readonly) NSUInteger scopeMask;
@property (nonatomic, readonly) NSInteger recentDays;
@property (nonatomic, readonly) BOOL removable;
@property (nonatomic, readonly) BOOL disabled;
@property (nonatomic, readonly) BOOL hidePinned;
@property (nonatomic, readonly) NSInteger longPressAction;
@end

NS_ASSUME_NONNULL_END

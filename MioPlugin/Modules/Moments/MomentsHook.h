#import <Foundation/Foundation.h>

// 朋友圈 hook（WCR 同款机制，实证还原）：
// 便捷朋友圈：hook MMGrowTextView textViewDidChange:（153 包实测唯一有效挂载点），
// 输入框输入 pyq（精确匹配，trim 空白）→ 清空输入 → 半屏弹出朋友圈：
// 取现成 NewMainFrameViewController（MicroMessengerAppDelegate GlobalInstance →
// m_appViewControllerMgr → getNewMainFrameViewController，绝不裸 init），
// 包 UINavigationController，PageSheet + iOS15+ largeDetent 半屏 present。
@interface MomentsHook : NSObject
@end

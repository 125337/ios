#import <Foundation/Foundation.h>

// 朋友圈 hook（WCR 同款机制，实证还原）：
// 便捷朋友圈：hook MMGrowTextView textViewDidChange:（153 包实测唯一有效挂载点），
// 输入框输入 pyq（精确匹配，trim 空白）→ 清空输入 → 半屏弹出朋友圈：
// WCTimeLineViewController 裸建 → 包 UINavigationController → 微信自家
// MMPageSheetAdapter 半屏弹出（0.7 屏高，边缘滑/拖拽/点背景关闭，WCR FUN_017a65f0 同款）。
// 注意：绝不取现成 NewMainFrameViewController——那是微信首页聊天列表 VC，
// 从主界面结构拽出来会弹出首页且整屏失灵。
@interface MomentsHook : NSObject
@end

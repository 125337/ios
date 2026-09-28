#import <Foundation/Foundation.h>

// 朋友圈 hook（WCR 同款机制还原）：
// 1. 伪集赞：hook WCDataItem likeUsers getter（feed 渲染必查点），首查时改写
//    likeUsers/commentUsers/likeCount/commentCount（限幅 0-10000 / 0-300），
//    NSMapTable weakKeys 签名缓存防重算，防重入标志防 set 重入
// 2. 便捷朋友圈：hook BaseMsgContentViewController textViewDidChange:，
//    输入框输入 pyq 快速打开朋友圈（NewMainFrameViewController push）
// 3. 高清朋友圈：hook WCMediaItem setM_bUploadHDImage:/setM_isNeedOriginImage:，
//    开关开启时强制 YES（朋友圈图片走原图上传，聊天发图同样强制原图）
@interface MomentsHook : NSObject
@end

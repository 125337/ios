@interface MJShootToastHelper : NSObject
+ (id)showMusicCaptionEmptyToast;
+ (id)showMusicCaptionRequestFailedToast;
+ (id)showMusicCaptionSendRequestToast;
+ (id)showFeedBackgroundMusicHasUsedToast;
+ (id)showToastWithText:(id)arg1;
+ (void)showAcknowledgeAlertWithMessage:(id)arg1 inView:(id)arg2 completion:(id /* block */)arg3;
@end

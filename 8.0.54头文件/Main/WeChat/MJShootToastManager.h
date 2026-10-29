@interface MJShootToastManager : NSObject
{
    WeToast * _toastVC; // +0x8
}
- (void)showMusicCaptionEmptyToast;
- (void)showMusicCaptionRequestFailedToast;
- (void)showMusicCaptionSendRequestToast;
- (void)hideToastIfNeeded;
- (void)showToastWithText:(id)arg1;
- (id)toastVC;
- (void)setToastVC:(id)arg1;
- (void).cxx_destruct;
@end


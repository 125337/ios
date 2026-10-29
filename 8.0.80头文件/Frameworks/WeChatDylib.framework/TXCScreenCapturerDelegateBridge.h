@interface TXCScreenCapturerDelegateBridge : NSObject <TXIScreenCaptureDelegate, TXIVideoBindable>
{
    Lock _lock; // +0x8
    weak_ptr<liteav::video::ScreenPlatformInterface::Client> _client; // +0x48
    weak_ptr<liteav::video::ScreenSharingApple> _observer; // +0x58
    long long _windowId; // +0x68
}
- (void)setClient:(shared_ptr<liteav::video::ScreenPlatformInterface::Client>)arg1;
- (shared_ptr<liteav::video::ScreenPlatformInterface::Client>)client;
- (void)setObserver:(shared_ptr<liteav::video::ScreenSharingApple>)arg1;
- (void)processVideoFrameResult:(id)arg1;
- (void)onCapturerDidStop;
- (void)onCapturerDidPause;
- (void)onCapturerDidResume;
- (void)onCapturerDidStart;
- (void)onScreenSizeChange:(CGSize)arg1;
- (long long)windowId;
- (void)setWindowId:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

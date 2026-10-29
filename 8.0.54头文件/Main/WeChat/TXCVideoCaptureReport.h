@interface TXCVideoCaptureReport : TXCVideoReportBase <TXICameraCapturerInterfaceDelegate, TXIScreenCaptureDelegate>
{
    id <TXCVideoCaptureReportDelegate> _delegate; // +0x8
}
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(BOOL)arg2;
- (void)onCameraStateChanged:(id)arg1 isConnected:(BOOL)arg2;
- (void)onCameraInterrupted:(long long)arg1;
- (void)onCameraInterruptionEnd;
- (void)onCapturerDidStart;
- (void)onCapturerDidStop;
- (void)onCapturerDidPause;
- (void)onCapturerDidResume;
- (void)onScreenSizeChange:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


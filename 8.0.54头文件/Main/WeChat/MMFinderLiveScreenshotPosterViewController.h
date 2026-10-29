@interface MMFinderLiveScreenshotPosterViewController : MMFinderLiveQrCodeViewController <MMFinderLiveQrCodeReporter>
{
    MMFinderLiveScreenshotPosterImages * _images; // +0x68
}
- (id)initWithTaskId:(id)arg1 images:(id)arg2;
- (id)backdropColor;
- (void)fetchScreenshotPosterInfoWithCompletionBlock:(id /* block */)arg1;
- (id)createQrCodeView;
- (void)willAppear;
- (id)reporter;
- (BOOL)supportsLandscape;
- (void)onCancelButtonInvoked;
- (void)onSaveImageButtonInvoked;
- (void)onShareButtonInvoked;
- (void)onSharedSuccessfullyToChatWithUsernames:(id)arg1;
- (void)onSharedSuccessfullyToMoments;
- (void)onSharedSuccessfullyToMiscellaneousTargets;
- (id)liveTask;
- (id)audienceLogReporter;
- (id)images;
- (void)setImages:(id)arg1;
- (void).cxx_destruct;
@end


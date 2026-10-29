@interface MMScreenShotReporter : NSObject
{
    BOOL _isKeyboardShowing; // +0x8
    unsigned int _pageSource; // +0xc
    unsigned int _imagePreviewScene; // +0x10
    unsigned int _imageSource; // +0x14
    MMScreenShotInfo * _screenShotInfo; // +0x18
    NSDictionary * _bizCustomReportParams; // +0x20
    unsigned long long _takeScreenShotTime; // +0x28
    unsigned long long _fetchAssetStartTime; // +0x30
    unsigned long long _fetchAssetFinishTime; // +0x38
    unsigned long long _processImageStartTime; // +0x40
    unsigned long long _processImageFinishTime; // +0x48
}
- (void)onScreenShot;
- (void)onScreenShotButtonAppear;
- (void)onScreenShotButtonClick;
- (void)onScreenShotAIButtonAppear;
- (void)onScreenShotAIButtonClick;
- (void)onScreenShotVoIPRecordingButtonAppear;
- (void)onScreenShotVoIPRecordingButtonClick;
- (void)reportScreenShotEntryEvent:(id)arg1 viewID:(id)arg2;
- (id /* block */)forwardScreenShotSuccessReportBlock;
- (void)onShowImagePreview:(unsigned int)arg1;
- (void)onImageProcessButtonAppear;
- (void)onImageProcessButtonClick;
- (void)onImageProcessFinish;
- (void)onImageRestoreButtonClick;
- (void)onMenuItemClick:(id)arg1;
- (void)onSendSuccess;
- (void)setScreenShotInfo:(id)arg1;
- (void)setImagePreviewScene:(unsigned int)arg1;
- (unsigned int)getPageSource;
- (unsigned int)getImageSource;
- (BOOL)bScreenShot;
- (id)screenShotInfo;
- (id)bizCustomReportParams;
- (void)setBizCustomReportParams:(id)arg1;
- (unsigned int)pageSource;
- (void)setPageSource:(unsigned int)arg1;
- (BOOL)isKeyboardShowing;
- (void)setIsKeyboardShowing:(BOOL)arg1;
- (unsigned long long)takeScreenShotTime;
- (void)setTakeScreenShotTime:(unsigned long long)arg1;
- (unsigned long long)fetchAssetStartTime;
- (void)setFetchAssetStartTime:(unsigned long long)arg1;
- (unsigned long long)fetchAssetFinishTime;
- (void)setFetchAssetFinishTime:(unsigned long long)arg1;
- (unsigned long long)processImageStartTime;
- (void)setProcessImageStartTime:(unsigned long long)arg1;
- (unsigned long long)processImageFinishTime;
- (void)setProcessImageFinishTime:(unsigned long long)arg1;
- (unsigned int)imagePreviewScene;
- (unsigned int)imageSource;
- (void)setImageSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end

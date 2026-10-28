@interface MPScreenshotMgr : MMUserService <PHPhotoLibraryChangeObserver, MMServiceProtocol>
{
    BOOL _isPhotoObserverRegistered; // +0x8
    NSMutableDictionary * _infoMap; // +0x10
    MPScreenshotContextInfo * _pendingContextInfo; // +0x18
    PHFetchResult * _screenshotFetchResult; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)createWebviewControllerWithArticleInfo:(id)arg1 visibleViewController:(id)arg2;
- (id)contextInfoMapFilePath;
- (void)loadScreenshotInfoMap;
- (void)saveScreenshotInfMap;
- (BOOL)recordScreenshotContextEnable;
- (BOOL)enableForwardScreenshotWithContext;
- (void)updatePhotoLibraryObserverRegisterStatus:(BOOL)arg1;
- (void)didTakeScreenshot;
- (BOOL)isMPArticleURL:(id)arg1;
- (id)getContextInfoFromController:(id)arg1;
- (void)onSaveLongScreenShotOnController:(id)arg1 localIdentifiers:(id)arg2;
- (void)didTakeScreenshotOnController:(id)arg1;
- (void)handleScreenshotAsset:(id)arg1 contextInfo:(id)arg2;
- (id)getScreenshotContextInfoWithAssetId:(id)arg1;
- (void)onTakeLongScreenShotOnController:(id)arg1;
- (id)getReportArticleInfoFromController:(id)arg1;
- (void)setupFetchResult;
- (void)photoLibraryDidChange:(id)arg1;
- (void)getScreenshot:(BOOL)arg1 change:(id)arg2 contextInfo:(id)arg3;
- (void)OnMsgSendSuccess:(id)arg1;
- (id)infoMap;
- (void)setInfoMap:(id)arg1;
- (id)pendingContextInfo;
- (void)setPendingContextInfo:(id)arg1;
- (BOOL)isPhotoObserverRegistered;
- (void)setIsPhotoObserverRegistered:(BOOL)arg1;
- (id)screenshotFetchResult;
- (void)setScreenshotFetchResult:(id)arg1;
- (void).cxx_destruct;
@end

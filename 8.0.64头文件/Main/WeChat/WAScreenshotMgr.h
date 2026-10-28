@interface WAScreenshotMgr : MMUserService <PHPhotoLibraryChangeObserver, MMServiceProtocol, WAAppTaskMgrExt>
{
    NSMutableDictionary * _infoDic; // +0x8
    NSMutableArray * _pendingInfoList; // +0x10
    NSMutableArray * _hasShownGuideBubbleMsgSvrIdList; // +0x18
    BOOL _isScreenshotTakenBeforeWeAppDidAppear; // +0x20
    BOOL _hasRegisterPhotoLibraryChangeObserver; // +0x21
    PHFetchResult * _screenshotAssetsFetchResult; // +0x28
    WAAppTask * _cachedForegroundTaskOnScreenshotNotify; // +0x30
    unsigned long long _cachedScreenshotNotifyTimestamp; // +0x38
}
- (void)onServiceInit;
- (void)handleScreenshot:(id)arg1;
- (BOOL)canRegisterPhotoLibraryChangeObserver;
- (void)updatePhotoLibraryChangeObserverRegisterStatus:(BOOL)arg1;
- (void)initScreenshotFetchResult;
- (void)onServiceTerminate;
- (void)photoLibraryDidChange:(id)arg1;
- (void)onNewScreenshotTaken:(id)arg1 foregroundTask:(id)arg2;
- (void)printAssetImageInfo:(id)arg1;
- (id)getCurrentVisibleTaskWithCache;
- (id)getCurrentVisibleTaskWithCacheInMiliSec:(unsigned long long)arg1;
- (id)getCurrentVisibleTaskByTaskMgr;
- (id)getScreenshotContextInfoWithAssetId:(id)arg1;
- (id)getLastScreenshotContextInfoWithWebVC:(id)arg1;
- (BOOL)hasPendingInfo;
- (void)recordMsgHasShownEnterWeAppGuideBubble:(long long)arg1;
- (BOOL)hasMsgShownEnterWeAppGuideBubble:(long long)arg1;
- (void)onFinishGetPathFromDeveloper:(id)arg1 webVC:(id)arg2;
- (void)loadScreenshotContextInfoDic;
- (void)saveScreenshotContextInfoDic;
- (id)screenshotContextInfoDicSavePath;
- (void)loadMsgHasShownGuideBubbleRecordList;
- (void)saveMsgHasShownGuideBubbleRecordList;
- (id)msgHasShownGuideBubbleRecordListSavePath;
- (BOOL)imageDataIsScreenshot:(id)arg1;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)arg1;
- (id)screenshotAssetsFetchResult;
- (void)setScreenshotAssetsFetchResult:(id)arg1;
- (id)cachedForegroundTaskOnScreenshotNotify;
- (void)setCachedForegroundTaskOnScreenshotNotify:(id)arg1;
- (unsigned long long)cachedScreenshotNotifyTimestamp;
- (void)setCachedScreenshotNotifyTimestamp:(unsigned long long)arg1;
- (BOOL)isScreenshotTakenBeforeWeAppDidAppear;
- (void)setIsScreenshotTakenBeforeWeAppDidAppear:(BOOL)arg1;
- (BOOL)hasRegisterPhotoLibraryChangeObserver;
- (void)setHasRegisterPhotoLibraryChangeObserver:(BOOL)arg1;
- (void).cxx_destruct;
@end

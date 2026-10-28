@interface MPPageFastLoadMgr : MMUserService <MMLimitedModeExt, PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableArray * _downloadingInfoList; // +0x8
    MPPageTemplateInfoContainer * _templateInfoContainer; // +0x10
    unsigned int _lastCheckTemplateVersionTime; // +0x18
    MPPageResourceDownloader * _templateDownloader; // +0x20
    BOOL _needCachePageFrameContent; // +0x28
    NSMutableDictionary * _pageFrameKey2PageFrameContent; // +0x30
    BOOL _isBatchReporting; // +0x38
    BOOL _videoPreloadSwitch; // +0x39
    BOOL _isInDispatchDelay; // +0x3a
    BOOL _enableFastLoadOnLimitedMode; // +0x3b
    MPPageFastLoadCacheCleaner * _cacheCleaner; // +0x40
    NSMutableDictionary * _preloadWebViewDic; // +0x48
    NSOperationQueue * _preloadImageCacheWorkQueue; // +0x50
    NSURLSession * _preloadImageSession; // +0x58
    NSMutableArray * _pendingPreloadImageTasks; // +0x60
    NSMutableDictionary * _runningPreloadImageTasks; // +0x68
    NSCache * _imageMemoryCache; // +0x70
    NSURLSession * _imageDownloadUrlSession; // +0x78
    NSMutableArray * _imageWaitingQueue; // +0x80
    NSMutableDictionary * _imageDownloadingTask; // +0x88
    NSOperationQueue * _offlineCacheWorkQueue; // +0x90
    unsigned long long _videoPreloadSwitchWithScene; // +0x98
    MMWebOptimVideoCacheTask * _videoPrefetchTask; // +0xa0
    JSVirtualMachine * _jsVirtualMachine; // +0xa8
    NSMutableDictionary * _pageDataCacheItemDic; // +0xb0
    NSMutableArray * _unfilteredPageDataWaitQueue; // +0xb8
    NSMutableArray * _pageDataWaitQueue; // +0xc0
    NSMutableDictionary * _pageDataRequestDic; // +0xc8
    MemoryMappedKV * _mmkv; // +0xd0
    NSObject<OS_dispatch_queue> * _workQueue; // +0xd8
    MPPageFastLoadEventMgr * _eventMgr; // +0xe0
}
+ (id)preloadIdentifierForImageUrl:(id)arg1;
+ (BOOL)isMatchDeveloperTemplateWithFileName:(id)arg1;
+ (BOOL)applyToDeveloperTemplateWithFilePath:(id)arg1 fileName:(id)arg2;
+ (unsigned int)expiredDays;
+ (void)clearDeveloperTemplate;
+ (BOOL)hasValidDevTemplateWithType:(unsigned int)arg1;
+ (id)pathForValidDevTemplateWithType:(unsigned int)arg1;
+ (BOOL)hasExistDevTemplateWithType:(unsigned int)arg1;
+ (id)readableApplyTime;
+ (id)appliedDevTemplateFileName;
+ (unsigned long long)useFlagForIsPreCreateWebView:(BOOL)arg1 isSyncGetPageData:(BOOL)arg2;
+ (BOOL)isSupportedFastload:(BOOL)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3;
+ (BOOL)isSupportedFastload:(BOOL)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3 andGetTemplateType:(unsigned int *)arg4;
+ (BOOL)isKnownItemShowType:(unsigned int)arg1;
+ (unsigned int)templateTypeFromShowType:(unsigned int)arg1;
+ (id)webViewChildModePresetUI;
+ (BOOL)isUseWebviewChildModePresetUIWithTemplateType:(unsigned int)arg1 enterType:(unsigned int)arg2 isPreload:(BOOL)arg3;
+ (BOOL)canUseMPFastLoadWithUrl:(id)arg1 fastLoadParam:(id)arg2;
+ (id)overrideSceneIfNeedForURL:(id)arg1 scene:(unsigned int)arg2;
- (void)onServiceInitWithCategoryTemplateDownload;
- (unsigned int)templateReportIdWithType:(unsigned int)arg1;
- (id)localFullVersionListWithType:(unsigned int)arg1;
- (id)localLatestDownloadedFullVersionWithType:(unsigned int)arg1;
- (id)fullVersion2FilePathMapWithTemplateType:(unsigned int)arg1;
- (void)updateTemplateFromServerWityTypeList:(id)arg1 enterType:(unsigned int)arg2 scene:(unsigned int)arg3;
- (void)forceUpdateTemplateFromServerWityType:(unsigned int)arg1;
- (id)pageFrameContentWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (void)setupTemplateInfo;
- (id)keyForCachePageFrameWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (id)pathOfTemplateInfo;
- (void)loadTemplateInfo;
- (void)saveTemplateInfo;
- (void)clearInvalidTemplateDownloadedRecord;
- (unsigned int)minValidTemplateVersionWithType:(unsigned int)arg1;
- (id)latestTemplateFullVersionWithType:(unsigned int)arg1;
- (unsigned int)tempalteVersionForInitWebViewWithType:(unsigned int)arg1 andGetFullVersion:(id *)arg2 andGetVersionGroup:(id *)arg3;
- (id)templateTypeToVersionDictionary;
- (id)templateTypeToVersionGroupDictionary;
- (id)templateTypeToFullVersionDictionary;
- (id)templateInfoWithTemplateType:(unsigned int)arg1;
- (id)typeInfoListForWityTypeList:(id)arg1;
- (unsigned long long)isUseZipForTemplageType:(int)arg1;
- (void)requestCheckTemplateVersionWityTypeList:(id)arg1 scene:(unsigned int)arg2;
- (void)onResponseCheckTemplateVersion:(id)arg1 request:(id)arg2;
- (BOOL)isCheckTemplateVersionResponseOK:(id)arg1;
- (void)saveTemplateInfoIfNeed:(id)arg1;
- (id)getAndRemoveInvalidFullVersions:(id)arg1 templateInfo:(id)arg2;
- (id)httpHeaderWithType:(unsigned int)arg1 templateVersion:(unsigned int)arg2;
- (unsigned int)templateCheckInterval;
- (BOOL)isResponseTemplateInfoValid:(id)arg1;
- (id)pathOfTemplateStoreDir;
- (id)p_pathOfTemplateDevDir;
- (id)pathOfTemplateDirWithType:(unsigned int)arg1;
- (id)pathOfTemplateFileWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (BOOL)isTemplateFileValidWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (void)clearInvalidTemplateDonwloadedFile;
- (id)dirPathOfTemplateDownload;
- (void)setupTemplateDownloader;
- (void)requestTemplateFileWithTemplateInfo:(id)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3 url:(id)arg4 md5:(id)arg5 header:(id)arg6 versionGroup:(id)arg7 scene:(unsigned int)arg8 fullVersion2FilePathMap:(id)arg9;
- (void)onResponseTemplateFileWithParam:(id)arg1 downloadingInfo:(id)arg2;
- (unsigned long long)convertDownloaderErrorCode2ReportKey:(unsigned long long)arg1;
- (void)reportTemplateDownloadWithParam:(id)arg1 downloadingInfo:(id)arg2 isSuccess:(BOOL)arg3;
- (id)downloadingInfoWithType:(unsigned int)arg1 fullVersion:(id)arg2;
- (id)downloadingInfoList;
- (id)p_fullVersion2FilePathMapWithTemplateType:(unsigned int)arg1;
- (void)p_requestTemplateFileWithTemplateInfo:(id)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3 url:(id)arg4 md5:(id)arg5 header:(id)arg6 versionGroup:(id)arg7 scene:(unsigned int)arg8 fullVersion2FilePathMap:(id)arg9;
- (void)markNeedCachePageFrameContent:(BOOL)arg1;
- (void)clearCachedPageFrames;
- (void)onServiceInitWithCategoryTask;
- (void)lauchVideoPrefetchTaskWithUrl:(id)arg1 itemShowType:(unsigned int)arg2 scene:(unsigned int)arg3;
- (id)getMediaWrapIdentiferWithUrl:(id)arg1;
- (BOOL)getVideoUrlFromMpUrl:(id)arg1 handler:(id /* block */)arg2;
- (id)getVideoPrefetchTask;
- (BOOL)checkVideoPreloadSwitch;
- (BOOL)checkVideoPreloadSwitchWithScene:(unsigned int)arg1;
- (BOOL)checkVideoPreloadSwitchWithMPEnterType:(unsigned int)arg1;
- (unsigned int)transMPEnterTypeToVideoPreloadScene:(unsigned int)arg1;
- (unsigned int)transVideoPreloadSceneToMPDefaultScene:(unsigned int)arg1;
- (void)reportPreCreateWebViewWithEnterType:(unsigned int)arg1 reportId:(unsigned int)arg2;
- (void)reportUpdateTemplateWithEnterType:(unsigned int)arg1;
- (void)reportLoadPageWithUrl:(id)arg1 a8keyScene:(unsigned int)arg2;
- (void)tryBatchReportItemsWithEnterType:(unsigned int)arg1;
- (BOOL)batchReportItemList:(id)arg1;
- (BOOL)requestReportItemWithContext:(id)arg1;
- (void)onResponseAppMsgReport:(id)arg1 context:(id)arg2;
- (void)reportOfflineCacheWithKey:(unsigned int)arg1 value:(unsigned int)arg2;
- (void)onServiceInitWithCategoryPreloadImage;
- (void)preloadImageUrls:(id)arg1 forPageIdentifity:(id)arg2;
- (id)getPreloadImageDataForPageUrl:(id)arg1 andImageUrl:(id)arg2;
- (id)getPreloadImageDataFromMemoryForPageUrl:(id)arg1 andImageUrl:(id)arg2;
- (void)savePreloadImageData:(id)arg1 forPageUrl:(id)arg2 andImageUrl:(id)arg3;
- (void)updateMemoryCacheForImageData:(id)arg1 forPageUrl:(id)arg2 andImageUrl:(id)arg3;
- (void)saveExternalCoverImageData:(id)arg1 forPageUrl:(id)arg2;
- (void)updateExternalCoverImageData:(id)arg1 forPageUrl:(id)arg2;
- (void)updateMemoryCacheForExternalCoverImageData:(id)arg1 forPageUrl:(id)arg2;
- (id)getExternalCoverImageDataForPageUrl:(id)arg1;
- (id)getExternalCoverImageDataFromMemoryForPageUrl:(id)arg1;
- (void)addTaskIfNeed:(id)arg1;
- (void)runPendingTasksIfNeed;
- (void)runTask:(id)arg1;
- (void)handleResultForTask:(id)arg1 location:(id)arg2 error:(id)arg3 serverContentType:(id)arg4 startTime:(double)arg5;
- (void)onTaskEnd:(id)arg1 succeed:(BOOL)arg2;
- (id)preloadImageCacheFileDir;
- (id)preloadImageCacheFileDirWithIdentity:(id)arg1;
- (id)imagePathForPreloadTask:(id)arg1;
- (id)imagePathForPageIdentity:(id)arg1 fileName:(id)arg2;
- (unsigned long long)preloadImagesSize;
- (unsigned long long)cleanPreloadImages;
- (void)deletePreloadImagesForPageIdentifity:(id)arg1;
- (void)reportPreloadImageEventForScene:(unsigned int)arg1 canLoad:(BOOL)arg2;
- (void)reportPreloadImageEventStartDownload;
- (void)reportPreloadImageEventDownloadFinishWithTime:(long long)arg1 size:(long long)arg2;
- (void)onServiceInitWithCategoryPageData;
- (void)preloadPageDataWithUrl:(id)arg1 scene:(unsigned int)arg2 enterType:(unsigned int)arg3;
- (void)preloadPageDataWithUrlList:(id)arg1 scene:(unsigned int)arg2 enterType:(unsigned int)arg3;
- (void)priorityUpdatePageData:(id)arg1 enterType:(unsigned int)arg2;
- (void)advanceDirectUpdatePageDataWithUrl:(id)arg1 templateType:(unsigned int)arg2 scene:(unsigned int)arg3 enterType:(unsigned int)arg4 useOfflineCache:(BOOL)arg5 sourceUserName:(id)arg6;
- (void)directUpdatePageData:(id)arg1 withTemplateVersion:(unsigned int)arg2 withTemplateVersionGroup:(id)arg3;
- (id)getPageForceUrlWithUrl:(id)arg1;
- (BOOL)getPageForceUrlFullScreenValidState:(id)arg1;
- (BOOL)hasItemShowTypeWithUrl:(id)arg1;
- (BOOL)hasItemShowTypeWithUrl:(id)arg1 useOfflineCacheData:(BOOL)arg2;
- (unsigned int)getItemShowTypeWithUrl:(id)arg1;
- (unsigned int)getItemShowTypeWithUrl:(id)arg1 useOfflineCacheData:(BOOL)arg2;
- (unsigned int)getPageDataRequiredTemplateVersionWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersionGroup:(id)arg3;
- (BOOL)hasValidPageDataWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersion:(unsigned int)arg3 templateVersionGroup:(id)arg4 isOfflineCache:(BOOL)arg5;
- (id)getPageDataWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersion:(unsigned int)arg3 templateVersionGroup:(id)arg4 isOfflineCache:(BOOL)arg5;
- (void)expirePageDataWithUrl:(id)arg1;
- (void)removeAllPageDataWithScene:(unsigned long long)arg1 sceneNote:(id)arg2;
- (id)workQueue_filterAndFillPageDataRequestUrlInfoList:(id)arg1 withTemplateTypeToVersionDictionary:(id)arg2 withTemplateTypeToVersionGroupDictionary:(id)arg3;
- (void)mainThread_updatePageDataWaitUrlInfoList:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)filterInvalidOrRepeatedUrlInfoList:(id)arg1;
- (id)filterPageDataRequestUrlInfoList:(id)arg1;
- (id)identityListFromPageDataUrlInfoList:(id)arg1;
- (void)removeFromPageDataWaitQueueWithIdentityList:(id)arg1 inQueue:(id)arg2;
- (void)addHeadOfPageDataWaitQueue:(id)arg1;
- (void)checkPageDataWaitQueue;
- (void)requestPageData:(id)arg1 scene:(unsigned long long)arg2 templateTypeList:(id)arg3;
- (void)onResponsePageData:(id)arg1 userData:(id)arg2;
- (void)workQueue_onResponsePageData:(id)arg1 userData:(id)arg2;
- (void)workQueue_processPageDataResponse:(id)arg1 withUrlToContentInfoDic:(id)arg2 context:(id)arg3;
- (void)updateUrlInfoCountInEnterType:(unsigned int)arg1 bizTimelineCount:(unsigned int *)arg2 bizSessionCount:(unsigned int *)arg3 commSessionCount:(unsigned int *)arg4 snsCount:(unsigned int *)arg5 bizProfileCount:(unsigned int *)arg6 webJSAPICount:(unsigned int *)arg7 kanJSAPICount:(unsigned int *)arg8;
- (BOOL)saveResponsePageDataContentToDisk:(id)arg1 identity:(id)arg2;
- (void)reportRequestPageDataWithContext:(id)arg1;
- (void)addHeadOfUnfilteredPageDataWaitQueue:(id)arg1;
- (void)checkUnfilteredPageDataWaitQueueAfterDelay;
- (void)checkAndFilterPageDataWaitQueue;
- (id)getPageDataCacheItem:(id)arg1;
- (id)getPageDataCacheItemWithIdentity:(id)arg1;
- (void)addMPPageCacheItemList:(id)arg1;
- (void)removeAllMPPageCacheItemsWithScene:(unsigned long long)arg1 sceneNote:(id)arg2;
- (id)pageDataFileDir;
- (id)pageDataFilePathWithIdentity:(id)arg1;
- (BOOL)isPageDataFileExistWithIdentity:(id)arg1;
- (id)getPageDataCacheItem:(id)arg1 isOfflineCache:(BOOL)arg2;
- (BOOL)isPageDataFileExistWithIdentity:(id)arg1 isOfflineCache:(BOOL)arg2;
- (id)pageDataFilePathWithIdentity:(id)arg1 isOfflineCache:(BOOL)arg2;
- (BOOL)getPageForceUrlFullScreenValidState:(id)arg1 isOfflineCache:(BOOL)arg2;
- (id)getPageForceUrlWithUrl:(id)arg1 isOfflineCache:(BOOL)arg2;
- (unsigned int)getPageDataRequiredTemplateVersionWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersionGroup:(id)arg3 isOfflineCache:(BOOL)arg4;
- (unsigned int)calcOfflineCacheRequestCount:(id)arg1;
- (id)sceneControlStorageKeyWithScene:(unsigned int)arg1;
- (void)saveSceneControl:(id)arg1;
- (id)getSceneControlWithScene:(unsigned int)arg1;
- (void)savePreloadLimitDispatchDelay:(unsigned long long)arg1;
- (unsigned long long)getPreloadLimitDispatchDelay;
- (BOOL)shouldPreloadImageForRequestInfo:(id)arg1;
- (void)onServiceInitWithCategoryOfflineCache;
- (BOOL)supportWxPic;
- (BOOL)isSupportOfflineCache;
- (id)offlineCacheFileDir;
- (id)offlineCacheFileDirWithIdentity:(id)arg1;
- (id)offlineCache_pageDataPathWithIdentity:(id)arg1;
- (id)offlineCacheImagePathWithImageDownloadTask:(id)arg1;
- (id)offlineCacheImagePathWithPageIdentity:(id)arg1 andFileName:(id)arg2;
- (void)addDownloadImageUrlList:(id)arg1 forIdentity:(id)arg2;
- (void)checkTaskExistAndReplaceOrAdd:(id)arg1;
- (void)startOneImageDownloadTask:(id)arg1;
- (void)handleDownloadWithDownloadTask:(id)arg1 Location:(id)arg2 andError:(id)arg3;
- (void)onDownloadEndWithTask:(id)arg1 isSuccess:(BOOL)arg2;
- (void)checkImageWaitingQueue;
- (id)imageDataWithPageUrl:(id)arg1 andImageUrl:(id)arg2;
- (void)saveImageData:(id)arg1 forPageUrl:(id)arg2 andImageUrl:(id)arg3;
- (BOOL)offlineCache_savePageDataContentToDisk:(id)arg1 identity:(id)arg2;
- (BOOL)offlineCache_isPageDataFileExistWithIdentity:(id)arg1;
- (void)offlineCache_addMPPageItemList:(id)arg1;
- (id)offlineCache_getPageDataOfflineCacheItem:(id)arg1;
- (id)offlineCache_getPageDataCacheItemWithIdentity:(id)arg1;
- (id)offlineCache_getPageForceUrlWithUrl:(id)arg1;
- (unsigned long long)clearAllOfflineCaches;
- (unsigned long long)offlineCachesSize;
- (void)deleteOfflineCacheWithIdentity:(id)arg1;
- (void)checkAndUpdateExpireCacheItems;
- (BOOL)offlineCache_getPageForceUrlFullScreenValidState:(id)arg1;
- (unsigned int)offlineCache_getPageDataRequiredTemplateVersionWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersionGroup:(id)arg3;
- (void)onServiceInitWithCategoryCheckSwitch;
- (unsigned long long)allOpenUseFlag;
- (unsigned long long)useFlagWithEnterType:(unsigned int)arg1;
- (BOOL)isUsePreCreateWebViewWithEnterType:(unsigned int)arg1;
- (BOOL)isUsePreDownloadPageDataWithEnterType:(unsigned int)arg1;
- (BOOL)isUseFastLoadWithEnterType:(unsigned int)arg1;
- (BOOL)canUseFastLoadWithEnterType:(unsigned int)arg1 templateType:(unsigned int)arg2 itemShowType:(unsigned int)arg3;
- (BOOL)isPrepareWebviewWithTemplateTypeIfNeeded:(unsigned int)arg1;
- (unsigned long long)commonSharsUseFlag;
- (BOOL)isUseFastLoadCommonShare;
- (BOOL)isUseFastLoadCommonShareTemplateWithTextAppMsg;
- (BOOL)isUseFastLoadCommonShareTemplateWithImageAppMsg;
- (BOOL)disableFastLoadOnLimitedMode;
- (BOOL)isDisableFastloadTimeout;
- (void)setDisableFastloadTimeout:(BOOL)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)appDidTerminateWKWebviewNetworkProcess;
- (BOOL)isLowQualityNetworkCondition;
- (void)reportWithId:(unsigned int)arg1 key:(unsigned long long)arg2;
- (void)reportWithId:(unsigned int)arg1 key:(unsigned long long)arg2 value:(unsigned int)arg3;
- (unsigned int)templateTypeArticle;
- (unsigned int)templateTypeCommonShare;
- (id)commonCheckTemplateTypeList;
- (id)pageFastLoadEventMgr;
- (void)asyncPreparePreloadWebViewWithType:(unsigned int)arg1 enterType:(unsigned int)arg2 scene:(unsigned int)arg3 afterDelay:(double)arg4;
- (void)asyncPreparePreloadWebViewWithTypeList:(id)arg1 enterType:(unsigned int)arg2 scene:(unsigned int)arg3 afterDelay:(double)arg4;
- (id)createWebViewCtrlMaybeUseFastLoad:(BOOL)arg1 itemShowType:(unsigned int)arg2 enterType:(unsigned int)arg3 scene:(unsigned int)arg4 urlForReport:(id)arg5 url:(id)arg6 visibleViewController:(id)arg7 addExtraInfo:(id)arg8 presetUI:(id)arg9 isUsedFastLoad:(BOOL *)arg10 forceUrl:(id *)arg11 useOfflineCache:(BOOL)arg12;
- (id)createWebViewCtrlMaybeUseFastLoad:(BOOL)arg1 itemShowType:(unsigned int)arg2 enterType:(unsigned int)arg3 scene:(unsigned int)arg4 urlForReport:(id)arg5 url:(id)arg6 visibleViewController:(id)arg7 addExtraInfo:(id)arg8 presetUI:(id)arg9 isUsedFastLoad:(BOOL *)arg10 forceUrl:(id *)arg11 useOfflineCache:(BOOL)arg12 config:(id)arg13;
- (id)webViewControllerWithType:(unsigned int)arg1 itemShowType:(unsigned int)arg2 enterType:(unsigned int)arg3 scene:(unsigned int)arg4 url:(id)arg5 pageDataKeyUrl:(id)arg6 visibleViewController:(id)arg7 addExtraInfo:(id)arg8 isUsedFastLoad:(BOOL *)arg9 useOfflineCache:(BOOL)arg10 config:(id)arg11;
- (void)destoryPreloadWebViewWithType:(unsigned int)arg1 fullVersion:(id)arg2;
- (void)destoryAllPreloadWebView;
- (void)removePageDataTriggerWithLimitedMode:(unsigned long long)arg1 sceneNote:(id)arg2;
- (id)changeUrlSchemeToHttps:(id)arg1;
- (id)userDefaultKeyWithName:(id)arg1;
- (void)preparePreloadWebViewWithType:(unsigned int)arg1 enterType:(unsigned int)arg2;
- (id)popPreloadWebViewWithType:(unsigned int)arg1 enterType:(unsigned int)arg2 scene:(unsigned int)arg3;
- (id)generateWebViewWithType:(unsigned int)arg1 enterType:(unsigned int)arg2 isPreload:(BOOL)arg3;
- (void)clearPreloadWebViewWithScene:(unsigned long long)arg1;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (id)pathOfCacheDir;
- (id)pathOfLibraryDir;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didBecomeActive;
- (id)cacheCleaner;
- (void)setCacheCleaner:(id)arg1;
- (id)preloadWebViewDic;
- (void)setPreloadWebViewDic:(id)arg1;
- (id)preloadImageCacheWorkQueue;
- (void)setPreloadImageCacheWorkQueue:(id)arg1;
- (id)preloadImageSession;
- (void)setPreloadImageSession:(id)arg1;
- (id)pendingPreloadImageTasks;
- (void)setPendingPreloadImageTasks:(id)arg1;
- (id)runningPreloadImageTasks;
- (void)setRunningPreloadImageTasks:(id)arg1;
- (id)imageMemoryCache;
- (void)setImageMemoryCache:(id)arg1;
- (id)imageDownloadUrlSession;
- (void)setImageDownloadUrlSession:(id)arg1;
- (id)imageWaitingQueue;
- (void)setImageWaitingQueue:(id)arg1;
- (id)imageDownloadingTask;
- (void)setImageDownloadingTask:(id)arg1;
- (id)offlineCacheWorkQueue;
- (void)setOfflineCacheWorkQueue:(id)arg1;
- (unsigned long long)videoPreloadSwitchWithScene;
- (void)setVideoPreloadSwitchWithScene:(unsigned long long)arg1;
- (BOOL)videoPreloadSwitch;
- (void)setVideoPreloadSwitch:(BOOL)arg1;
- (id)videoPrefetchTask;
- (void)setVideoPrefetchTask:(id)arg1;
- (id)jsVirtualMachine;
- (void)setJsVirtualMachine:(id)arg1;
- (id)pageDataCacheItemDic;
- (void)setPageDataCacheItemDic:(id)arg1;
- (id)unfilteredPageDataWaitQueue;
- (void)setUnfilteredPageDataWaitQueue:(id)arg1;
- (id)pageDataWaitQueue;
- (void)setPageDataWaitQueue:(id)arg1;
- (id)pageDataRequestDic;
- (void)setPageDataRequestDic:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (BOOL)isInDispatchDelay;
- (void)setIsInDispatchDelay:(BOOL)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (id)eventMgr;
- (void)setEventMgr:(id)arg1;
- (BOOL)enableFastLoadOnLimitedMode;
- (void)setEnableFastLoadOnLimitedMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

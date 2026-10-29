@interface WCFinderDramaPermeateStreamViewModel : WCFinderFullFeedCommonViewModel <WCFinderDramaPermeateStreamDataProviderDelegate, WCFinderDataItemExt>
{
    BOOL _hasProcessLocalData; // +0x8
    BOOL _hasCurrentProcessPrefetchCache; // +0x9
    BOOL _shouldRefreshAfterCacheClean; // +0xa
    BOOL _hasFetchEnterDataFlag; // +0xb
    BOOL _shouldRecordEnterIndexPath; // +0xc
    BOOL _isCurrentFirstScreenRefreshSilent; // +0xd
    WCFinderOpenTimelineParams * _openTimelineParams; // +0x10
    NSString * _enterDataReportID; // +0x18
    WCFinderDramaPermeateStreamDataProvider * _provider; // +0x20
    NSMutableArray * _preloadArray; // +0x28
    NSIndexPath * _enterIndexPath; // +0x30
    WCFinderFeedContentVM * _statusRefreshContentVM; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)fetchFirstScreenSilently:(BOOL)arg1;
- (void)fetchFirstScreen;
- (void)replaceAllContentVMs:(id)arg1;
- (long long)firstFeedNum;
- (int)tabType;
- (int)feedViewControllerScene;
- (BOOL)hasFetchEnterData;
- (BOOL)firstScreenPrefetchRequesting;
- (BOOL)hasFreshCurrentProcessPrefetchCache;
- (BOOL)hasFreshFirstScreenCache;
- (unsigned long long)sectionNums;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (id)vaildTopIndexPath;
- (void)startPreloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)stopAllPreloadVideoItems;
- (void)changeFirstItemToMuteBeforeRefresh;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)markShouldRecordEnterIndexPath;
- (void)recordEnterIndexPathIfNeeded;
- (void)deleteAllFeedAfterTid:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (void)clearUnreadCacheContentVMs;
- (void)clearCurrentProcessPrefetchCacheFlag;
- (BOOL)injectGuideFirstScreenResponse:(id)arg1 dramaTabEnterType:(unsigned long long)arg2;
- (void)clearGuideFirstScreen;
- (void)contentUnlikeFeedback:(id)arg1;
- (id)firstPrefetchDataItem;
- (id)streamLoadingInfoByExitVC;
- (void)updateTimelineCachePageWithTid:(id)arg1;
- (void)loadingLocalData;
- (void)loadingFirstPageData;
- (void)refreshLatestDataByEnter:(BOOL)arg1;
- (void)loadingNextPagePageData;
- (void)dataProvider:(id)arg1 didFetchContentVMs:(id)arg2 isFirst:(BOOL)arg3 hasMore:(BOOL)arg4;
- (void)dataProviderDidGetError:(id)arg1 isFirst:(BOOL)arg2;
- (void)onFinderDataCacheHasBeCleaned;
- (BOOL)hasProcessLocalData;
- (void)setHasProcessLocalData:(BOOL)arg1;
- (BOOL)hasCurrentProcessPrefetchCache;
- (void)setHasCurrentProcessPrefetchCache:(BOOL)arg1;
- (BOOL)shouldRefreshAfterCacheClean;
- (void)setShouldRefreshAfterCacheClean:(BOOL)arg1;
- (id)openTimelineParams;
- (void)setOpenTimelineParams:(id)arg1;
- (id)enterDataReportID;
- (void)setEnterDataReportID:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (BOOL)hasFetchEnterDataFlag;
- (void)setHasFetchEnterDataFlag:(BOOL)arg1;
- (id)preloadArray;
- (void)setPreloadArray:(id)arg1;
- (BOOL)shouldRecordEnterIndexPath;
- (void)setShouldRecordEnterIndexPath:(BOOL)arg1;
- (id)enterIndexPath;
- (void)setEnterIndexPath:(id)arg1;
- (BOOL)isCurrentFirstScreenRefreshSilent;
- (void)setIsCurrentFirstScreenRefreshSilent:(BOOL)arg1;
- (id)statusRefreshContentVM;
- (void)setStatusRefreshContentVM:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCPreloadLogicMgr : NSObject <WCPreloadProviderDelegate>
{
    NSMutableArray * m_downloadItemID; // +0x8
    unsigned int m_lastRefreshTime; // +0x10
    id <WCPreloadLogicDelegate> m_delegate; // +0x18
    WCPreloadProvider * m_dataProvider; // +0x20
    unsigned int m_preloadCount; // +0x28
    BOOL m_enablePreload; // +0x2c
    NSMutableArray * m_waitDownloadItem; // +0x30
    NSMutableSet * m_setPreDownloadItemIDForBigImage; // +0x38
    NSMutableSet * m_setPreDownloadItemIDForSmallImage; // +0x40
    NSMutableDictionary * m_dicPrelDownloadItemNetType; // +0x48
    NSMutableArray * m_videoDownloadItemID; // +0x50
    NSMutableArray * m_videoWaitDownloadItem; // +0x58
    unsigned int m_preloadSucFeedCountForSmallImage; // +0x60
    unsigned int m_viewNewFeedCount; // +0x64
    unsigned int m_preloadSucImageCountForBigImage; // +0x68
    unsigned int m_viewNewBigImageCount; // +0x6c
    unsigned int m_preloadBigImageCount; // +0x70
    unsigned long long m_latestID; // +0x78
    NSMutableSet * m_setFirstClickItemIdForLogBigImage; // +0x80
    NSMutableDictionary * m_dicPreDownloadItemIdToSucPreloadCnt; // +0x88
    NSMutableDictionary * m_dicPreDownloadItemIdToSucPreloadPicIndexArrayStr; // +0x90
    WCMicroMerchantFoldMgr * _microMerchantFoldMgr; // +0x98
}
- (id)init;
- (void)dealloc;
- (void)updateStatusForPreload:(BOOL)arg1;
- (void)handleLatestWCObjectChanged:(id)arg1;
- (void)tryPreloadData;
- (unsigned int)getNetworkType;
- (int)getCurHistoryClickRatioLimit;
- (void)downloadImages;
- (void)downloadVideos;
- (void)preloadDataList:(id)arg1;
- (BOOL)hasPreloadDataItemForSmallImage:(id)arg1;
- (BOOL)hasPreloadDataItemForBigImage:(id)arg1;
- (BOOL)hasFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)addFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)tryIncreaseSucPreloadCntForItemId:(id)arg1 mediaItem:(id)arg2;
- (int)getPreloadCntForItemId:(id)arg1;
- (id)getpreloadPicIndexArrayStrForItemId:(id)arg1;
- (void)removeSucPreloadInfoForItemId:(id)arg1;
- (void)removeFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)removePreloadDataItemForSmallImage:(id)arg1;
- (void)removePreloadDataItemForBigImage:(id)arg1;
- (id)getPreloadNetType:(id)arg1;
- (void)onPreloadPageRequestPrepared:(id)arg1;
- (void)onDataUpdatedForPreload:(id)arg1 andData:(id)arg2;
- (BOOL)couldPreloadSmallImage;
- (BOOL)couldPreloadBigImage;
- (BOOL)couldPreloadImage;
- (BOOL)couldPreloadVideo;
- (unsigned int)getCheckUpdateTimeSecs;
- (BOOL)isInPreloadLimitTime;
- (void)addFeedCountForPreloadSmallImageSuc;
- (void)addFeedCountForViewNewFeeds;
- (void)addBigImageCountForPreloadSuc;
- (void)addBigImageCountForViewNewBigImage;
- (void)tryLogPreloadImageResult;
- (BOOL)isInPreloadAroundImgLimitTime;
- (void)downloadMedia:(id)arg1 downloadType:(long long)arg2;
- (void)downloadMedia:(id)arg1 downloadType:(long long)arg2 dataItem:(id)arg3;
- (void)downloadBatchThumb:(id)arg1;
- (void)predictVideoSourceWithDataItems:(id)arg1;
- (void)setupMicroMerchantFoldInfoWithTimelineRequest:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)microMerchantFoldMgr;
- (void)setMicroMerchantFoldMgr:(id)arg1;
- (void).cxx_destruct;
@end


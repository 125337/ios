@interface WCHomepageMgr : MMObject <WCHomePageDataProviderDelegate, WCHomePageDataProviderStarDelegate>
{
    NSString * m_username; // +0x8
    id <WCHomepageDelegate> m_delegate; // +0x10
    NSMutableArray * m_cache; // +0x18
    MyWCDB * m_database; // +0x20
    WCHomepageDataProvider_Sns * m_dataProvider; // +0x28
    BOOL m_fristReturnAll; // +0x30
    long long m_firstRequestResult; // +0x38
    NSString * m_firstRequestTip; // +0x40
    BOOL _prePageDayEndFlag; // +0x48
    BOOL _standaloneGalleryPrePageEnabled; // +0x49
    BOOL _standaloneGalleryCanLoadPrePage; // +0x4a
    BOOL _standaloneGalleryTailReadPending; // +0x4b
    int _beginHomePageCount; // +0x4c
    WCHomepageMgr * _starHomepageMgr; // +0x50
    long long _homepageType; // +0x58
    NSString * _homepageKey; // +0x60
    NSObject<OS_dispatch_queue> * _homepageDBQueue; // +0x68
    NSMutableArray * _m_cacheBeforeFirstJump; // +0x70
    unsigned long long _standaloneGalleryTailReadToken; // +0x78
}
+ (id)homepageKeyWithUsername:(id)arg1 homepageType:(long long)arg2;
- (id)initWithUsername:(id)arg1 homepageType:(long long)arg2;
- (void)dealloc;
- (id)homepageDBQueue;
- (id)dataProvider;
- (BOOL)isMine;
- (void)setM_username:(id)arg1;
- (void)delectCacheIfStranger;
- (void)beginHomepage;
- (void)endHomepage;
- (BOOL)updateHead;
- (BOOL)updateHeadWithSource:(long long)arg1;
- (BOOL)updateTail;
- (id)getHomepageData;
- (void)beginMediaHomepage;
- (unsigned int)homepageDataType;
- (BOOL)updateMediaHead;
- (BOOL)updateMediaTail;
- (BOOL)updateMediaPrePage;
- (BOOL)updateTailForV3StandaloneGallery;
- (BOOL)canLoadMediaPrePage;
- (void)enableV3StandaloneGalleryPrePage:(BOOL)arg1;
- (void)replaceMediaCacheForStandaloneGallery:(id)arg1 canLoadPrePage:(BOOL)arg2;
- (void)clearStandaloneGalleryPrePageState;
- (void)onDataUpdated:(id)arg1 maxItemID:(unsigned long long)arg2 minItemID:(unsigned long long)arg3 reqFirstPageMd5:(id)arg4;
- (void)onReturnLimitFeedId:(unsigned long long)arg1;
- (void)onYearMonthInfosUpdated:(id)arg1;
- (void)onReturnIsAllData:(id)arg1 andAdData:(id)arg2;
- (void)onOnceReturnAllDataWithRet:(long long)arg1 andTip:(id)arg2;
- (void)onOnceReturnAllDataRenderNoMore;
- (void)onResetOnceReturnAllDataRenderNoMore;
- (void)onNoMoreDataWithRet:(long long)arg1 andTip:(id)arg2;
- (void)onReturnBGUserInfo:(id)arg1;
- (void)onHomepagePrePageUpdate:(id)arg1 withChangedTime:(unsigned int)arg2 prePageEnd:(BOOL)arg3 success:(BOOL)arg4;
- (void)onHomepagePrePageReachedEnd;
- (void)onFetchDataBeforeJumpToItemId:(id)arg1 dataList:(id)arg2 success:(BOOL)arg3;
- (void)onStarDataUpdated:(id)arg1 nextPageMaxID:(unsigned long long)arg2;
- (void)modifyDataItem:(id)arg1 notify:(BOOL)arg2;
- (void)insertOrUpdateDataItem:(id)arg1 notify:(BOOL)arg2;
- (void)deleteDataItem:(id)arg1 notify:(BOOL)arg2;
- (void)modifyCache:(id)arg1;
- (id)findDataItemInCacheByItemID:(id)arg1;
- (void)onServiceMemoryWarning;
- (unsigned long long)onServiceCleanCache;
- (id)firstItemIdInDB;
- (BOOL)fetchDataBeforeJumpToItemId:(unsigned long long)arg1;
- (BOOL)jumpState;
- (BOOL)updatePrePage;
- (void)clearJumpState;
- (BOOL)isPrePageDayEnd;
- (void)setM_cacheBeforeFirstJump:(id)arg1;
- (void)tryClearJumpState;
- (id)starHomepageMgr;
- (id)username;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_cache;
- (void)setM_cache:(id)arg1;
- (id)m_database;
- (void)setM_database:(id)arg1;
- (id)m_dataProvider;
- (void)setM_dataProvider:(id)arg1;
- (long long)homepageType;
- (id)homepageKey;
- (void)setHomepageDBQueue:(id)arg1;
- (int)beginHomePageCount;
- (void)setBeginHomePageCount:(int)arg1;
- (id)m_cacheBeforeFirstJump;
- (BOOL)prePageDayEndFlag;
- (void)setPrePageDayEndFlag:(BOOL)arg1;
- (BOOL)standaloneGalleryPrePageEnabled;
- (void)setStandaloneGalleryPrePageEnabled:(BOOL)arg1;
- (BOOL)standaloneGalleryCanLoadPrePage;
- (void)setStandaloneGalleryCanLoadPrePage:(BOOL)arg1;
- (unsigned long long)standaloneGalleryTailReadToken;
- (void)setStandaloneGalleryTailReadToken:(unsigned long long)arg1;
- (BOOL)standaloneGalleryTailReadPending;
- (void)setStandaloneGalleryTailReadPending:(BOOL)arg1;
- (void).cxx_destruct;
@end

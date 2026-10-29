@interface WCFinderNearbyFlowViewModel : NSObject <WCFinderDataItemExt, WCFinderNearbyStreamFetchMgrExt>
{
    BOOL _stopFetchNextPage; // +0x8
    BOOL _hasFetchEnterData; // +0x9
    int _commentScene; // +0xc
    id <WCFinderNearbyFlowViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _allDataItems; // +0x18
    unsigned long long _preFetchNextPageIndex; // +0x20
    unsigned long long _refreshTime; // +0x28
    unsigned long long _maxTid; // +0x30
    NSMutableSet * _tidContainSet; // +0x38
}
- (id)initWithData:(id)arg1 commentScene:(int)arg2 stopFetchNextPage:(BOOL)arg3 hasFetchEnterData:(BOOL)arg4 preFetchNextPageIndex:(unsigned long long)arg5;
- (void)fetchMoreNearbyList;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (void)clearAllContentVMLayoutCache;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (void)contentUnlikeFeedback:(id)arg1 subType:(long long)arg2;
- (BOOL)isValiadServerDataItem:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1;
- (id)transformHistoryFinderItemToContentVM:(id)arg1;
- (void)addFavRelateActionWithContentVM:(id)arg1 relateActionType:(unsigned long long)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(id)arg2 toastWording:(id)arg3;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onNearbyStreamFetchTriggerCleanAction:(unsigned long long)arg1;
- (void)onNearbyStreamFetchError:(unsigned long long)arg1;
- (void)onNearbyStreamFetchNoMoreData:(unsigned long long)arg1;
- (void)onNearbyStreamFetchWillSuccess:(unsigned long long)arg1;
- (void)onNearbyStreamFetchSuccess:(unsigned long long)arg1 dataItems:(id)arg2 userLocation:(id)arg3 preFetchNextPageIndex:(unsigned long long)arg4;
- (void)onNearbyStreamFetchHistory:(unsigned long long)arg1 dataItems:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)allDataItems;
- (void)setAllDataItems:(id)arg1;
- (BOOL)stopFetchNextPage;
- (void)setStopFetchNextPage:(BOOL)arg1;
- (BOOL)hasFetchEnterData;
- (void)setHasFetchEnterData:(BOOL)arg1;
- (unsigned long long)preFetchNextPageIndex;
- (void)setPreFetchNextPageIndex:(unsigned long long)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)maxTid;
- (void)setMaxTid:(unsigned long long)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (void).cxx_destruct;
@end


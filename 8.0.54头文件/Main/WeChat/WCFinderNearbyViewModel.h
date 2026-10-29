@interface WCFinderNearbyViewModel : NSObject <WCFinderDataItemExt, WCFinderRedDotNotifyExt, WCFinderPostingCommentExt, WCFinderNearbyStreamFetchMgrExt, WCFinderLocationServiceExt, WCFinderLiveExt>
{
    BOOL _stopFetchNextPage; // +0x8
    BOOL _hasFetchEnterData; // +0x9
    BOOL _isLocationServiceAuthorized; // +0xa
    BOOL _isFetchLivingStream; // +0xb
    id <WCFinderNearbyViewModelDelegate> _delegate; // +0x10
    NSArray * _commentFailTidArray; // +0x18
    NSMutableArray * _allDataItems; // +0x20
    unsigned long long _preFetchNextPageIndex; // +0x28
    unsigned long long _unReadMSGCount; // +0x30
    unsigned long long _commentFailTidCount; // +0x38
    NSString * _userCity; // +0x40
    NSString * _enterDataReportID; // +0x48
    unsigned long long _refreshTime; // +0x50
    WCFinderFeedLayoutContentVM * _livingLayout; // +0x58
    unsigned long long _maxTid; // +0x60
    NSMutableSet * _tidContainSet; // +0x68
}
- (id)init;
- (void)setLivingLayout:(id)arg1;
- (BOOL)isDataEmpty;
- (unsigned long long)sectionNums;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (id)vaildTopIndexPath;
- (BOOL)isDataIndexPath:(id)arg1;
- (BOOL)isDataSection:(unsigned long long)arg1;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (void)fetchLastestData;
- (void)fetchFirstPageData;
- (id)getUnreadDataItems;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (BOOL)isValiadServerDataItem:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1;
- (id)transformHistoryFinderItemToContentVM:(id)arg1;
- (void)fetchMoreLivingList;
- (void)onNearbyStreamFetchTriggerCleanAction:(unsigned long long)arg1;
- (void)onNearbyStreamFetchError:(unsigned long long)arg1;
- (void)onNearbyStreamFetchNoMoreData:(unsigned long long)arg1;
- (void)onNearbyStreamFetchSuccess:(unsigned long long)arg1 dataItems:(id)arg2 userLocation:(id)arg3 preFetchNextPageIndex:(unsigned long long)arg4;
- (void)onNearbyStreamLayoutInfoChange:(id)arg1;
- (void)onNearbyStreamFetchHistory:(unsigned long long)arg1 dataItems:(id)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(id)arg2 toastWording:(id)arg3;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(BOOL)arg1;
- (void)clearAllCachedDataItem;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)commentFailTidArray;
- (void)setCommentFailTidArray:(id)arg1;
- (id)allDataItems;
- (void)setAllDataItems:(id)arg1;
- (BOOL)stopFetchNextPage;
- (void)setStopFetchNextPage:(BOOL)arg1;
- (BOOL)hasFetchEnterData;
- (void)setHasFetchEnterData:(BOOL)arg1;
- (unsigned long long)preFetchNextPageIndex;
- (void)setPreFetchNextPageIndex:(unsigned long long)arg1;
- (unsigned long long)unReadMSGCount;
- (unsigned long long)commentFailTidCount;
- (id)userCity;
- (void)setUserCity:(id)arg1;
- (BOOL)isLocationServiceAuthorized;
- (void)setIsLocationServiceAuthorized:(BOOL)arg1;
- (id)enterDataReportID;
- (void)setEnterDataReportID:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)livingLayout;
- (unsigned long long)maxTid;
- (void)setMaxTid:(unsigned long long)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (BOOL)isFetchLivingStream;
- (void)setIsFetchLivingStream:(BOOL)arg1;
- (void).cxx_destruct;
@end


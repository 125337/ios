@interface WCFinderNearbyRelatedViewModel : NSObject <WCFinderPostDataItemExt, WCFinderDataItemExt>
{
    BOOL _isEnableContinueFetch; // +0x8
    BOOL _isFetchingData; // +0x9
    int _commentScene; // +0xc
    id <WCFinderNearbyRelatedViewModelDelegate> _delegate; // +0x10
    unsigned long long _refreshTime; // +0x18
    NSMutableArray * _allDataItems; // +0x20
    NSMutableSet * _tidContainSet; // +0x28
    NSData * _lastBuff; // +0x30
    WCFinderDataItem * _enterDataItem; // +0x38
    WCFinderLocationInfo * _locationInfo; // +0x40
}
- (id)initWithDataItem:(id)arg1 isFromSNSPoi:(BOOL)arg2 location:(id)arg3;
- (void)dealloc;
- (id)enterFeedTid;
- (void)addContentVM:(id)arg1;
- (BOOL)isEnableFetchNextPage;
- (void)fetchRelatedFirstPage;
- (void)fetchMoreNearbyRelated;
- (void)appendFinderContentVM:(id)arg1;
- (id)transformDataItems:(id)arg1;
- (unsigned long long)firstPageRefreshTime;
- (unsigned long long)dataSourceItemCount;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)contentVMAtIndex:(long long)arg1;
- (int)feedViewControllerScene;
- (BOOL)deleteDataItemWithIndex:(unsigned long long)arg1 tid:(id)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onPostDataItemFailed:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)allDataItems;
- (void)setAllDataItems:(id)arg1;
- (BOOL)isEnableContinueFetch;
- (void)setIsEnableContinueFetch:(BOOL)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)enterDataItem;
- (void)setEnterDataItem:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (void).cxx_destruct;
@end


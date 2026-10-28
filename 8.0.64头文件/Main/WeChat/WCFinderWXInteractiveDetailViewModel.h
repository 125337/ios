@interface WCFinderWXInteractiveDetailViewModel : NSObject <WCFinderWXInteractCenterDataProviderDelegate>
{
    id <WCFinderWXInteractiveDetailViewModelDelegate> _delegate; // +0x8
    id <WCFinderWXInteractiveDetailViewModelDataSource> _dataSource; // +0x10
    long long _selectType; // +0x18
    id <WCFinderInteractiveDetailListDataProvider> _dataProvider; // +0x20
    NSString * _anchorFeedId; // +0x28
    NSArray * _lastCacheFeedArray; // +0x30
    NSString * _localFocusFeedId; // +0x38
    NSArray * _localFeedArray; // +0x40
}
- (id)initWithSelectType:(long long)arg1 dataProvider:(id)arg2;
- (long long)anchorFeedIndex;
- (void)deleteItemAtIndex:(long long)arg1;
- (id)filterMapper:(id)arg1 filterBlock:(id /* block */)arg2;
- (id)lastCacheFeedArray;
- (id)filterPipline;
- (long long)numberOfSection;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMAtTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)triggerFetchAction;
- (BOOL)isNoMoreData;
- (void)onCollectionFeedArrayDataChange:(id)arg1 context:(id)arg2;
- (void)makeLocalFeedSort;
- (void)onWXInteractCenterDataFetchSuc:(BOOL)arg1;
- (void)onWXInteractCenterDataFetchWillHandle:(BOOL)arg1;
- (void)onWXInteractCenterDataFail;
- (void)onWXInteractCenterDataLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (long long)selectType;
- (void)setSelectType:(long long)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (id)anchorFeedId;
- (void)setAnchorFeedId:(id)arg1;
- (void)setLastCacheFeedArray:(id)arg1;
- (id)localFocusFeedId;
- (void)setLocalFocusFeedId:(id)arg1;
- (id)localFeedArray;
- (void)setLocalFeedArray:(id)arg1;
- (void).cxx_destruct;
@end

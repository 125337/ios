@interface WCFinderColumnCellVMDataSource : NSObject <MMLivePivotViewControllerItemsSource, WCFinderFeedArrayDelegate>
{
    BOOL _isFetchingData; // +0x8
    WCFinderFeedArray * _feedArray; // +0x10
    unsigned long long _currentFocusIndex; // +0x18
    WCFinderStreamLoadingState * _loadingState; // +0x20
    FinderColumnFlowWording * _wording; // +0x28
    id /* block */ _reportInfoGetter; // +0x30
    id /* block */ _internalFlowIndexChangedBlock; // +0x38
    FinderObjectPlaceHolderInfo * _placeHolderInfo; // +0x40
    id /* block */ _waitingFetchingComplete; // +0x48
}
- (id)initWithContentVM:(id)arg1;
- (unsigned long long)columnMediaType;
- (id)loadingState;
- (void)fetchMoreDataWithFinish:(id /* block */)arg1;
- (id)getReportInfo;
- (void)setCurrentFocusIndex:(unsigned long long)arg1;
- (void)onFeedArray:(id)arg1 insertContentVMS:(id)arg2 removeContentVMS:(id)arg3;
- (unsigned long long)indexWithDataItem:(id)arg1;
- (BOOL)hasMore;
- (BOOL)fallbackOnExhausted;
- (void)fetchMoreItemsWithLastItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)onLivePivotSwitchToDataItem:(id)arg1;
- (id)customLastFlowItemFooterTitle;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (unsigned long long)currentFocusIndex;
- (void)setLoadingState:(id)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id /* block */)reportInfoGetter;
- (void)setReportInfoGetter:(id /* block */)arg1;
- (id /* block */)internalFlowIndexChangedBlock;
- (void)setInternalFlowIndexChangedBlock:(id /* block */)arg1;
- (id)placeHolderInfo;
- (void)setPlaceHolderInfo:(id)arg1;
- (id /* block */)waitingFetchingComplete;
- (void)setWaitingFetchingComplete:(id /* block */)arg1;
- (void).cxx_destruct;
@end

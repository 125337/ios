@interface WCFinderColumnCellVMDataSource : NSObject <MMLivePivotViewControllerItemsSource>
{
    BOOL _isFetchingData; // +0x8
    WCFinderFeedArray * _feedArray; // +0x10
    unsigned long long _currentFocusIndex; // +0x18
    WCFinderStreamLoadingState * _loadingState; // +0x20
    FinderObjectPlaceHolderInfo * _placeHolderInfo; // +0x28
    id /* block */ _reportInfoGetter; // +0x30
    id /* block */ _internalFlowIndexChangedBlock; // +0x38
    id /* block */ _waitingFetchingComplete; // +0x40
}
- (id)initWithContentVM:(id)arg1 reportInfoGetter:(id /* block */)arg2 internalFlowIndexChangedBlock:(id /* block */)arg3;
- (id)loadingState;
- (void)fetchMoreDataWithFinish:(id /* block */)arg1;
- (id)getReportInfo;
- (id)feedArray;
- (id)genContentVMWithDataItem:(id)arg1;
- (void)setCurrentFocusIndex:(unsigned long long)arg1;
- (unsigned long long)indexWithDataItem:(id)arg1;
- (BOOL)hasMore;
- (void)fetchMoreItemsWithLastItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)onLivePivotSwitchToDataItem:(id)arg1;
- (void)setFeedArray:(id)arg1;
- (unsigned long long)currentFocusIndex;
- (void)setLoadingState:(id)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (id)placeHolderInfo;
- (void)setPlaceHolderInfo:(id)arg1;
- (id /* block */)reportInfoGetter;
- (void)setReportInfoGetter:(id /* block */)arg1;
- (id /* block */)internalFlowIndexChangedBlock;
- (void)setInternalFlowIndexChangedBlock:(id /* block */)arg1;
- (id /* block */)waitingFetchingComplete;
- (void)setWaitingFetchingComplete:(id /* block */)arg1;
- (void).cxx_destruct;
@end

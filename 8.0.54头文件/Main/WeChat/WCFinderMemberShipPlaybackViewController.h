@interface WCFinderMemberShipPlaybackViewController : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderMemberShipPlaybackTabViewModelDelegate>
{
    WCFinderMemberShipPlaybackTabViewModel * _viewModel; // +0x68
}
- (id)feedFlowView;
- (void)loadView;
- (void)setViewModel:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderMemberShipZonePlaybackTabViewNoMoreData;
- (void)finderMemberShipZonePlaybackTabViewFetchListSuc;
- (void)finderMemberShipZonePlaybackTabViewFetchListFail;
- (void)finderMemberShipZonePlaybackTabViewDeleteDataItemVM;
- (id)viewModel;
- (void).cxx_destruct;
@end


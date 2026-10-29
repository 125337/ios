@interface WCFinderMemberShipFeedViewController : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderMemberShipFeedTabViewModelDelegate, WCFinderProfileFeedPageHeaderContainerViewDelegate>
{
    WCFinderMemberShipFeedTabViewModel * _viewModel; // +0x70
    WCFinderProfileCollectionListLayout * _collectionListLayout; // +0x78
}
- (id)feedFlowView;
- (void)loadView;
- (void)setViewModel:(id)arg1;
- (void)updateCollectionListLayout;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (void)finderMemberShipZoneFeedTabViewNoMoreData;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
- (void)finderMemberShipZoneFeedTabViewFetchListFail;
- (void)finderMemberShipZoneFeedTabViewDeleteDataItemVM;
- (void)finderMemberShipZoneFeedTabViewChangeStickyTopTo:(BOOL)arg1 contentVM:(id)arg2 success:(BOOL)arg3 errorInfo:(id)arg4;
- (void)headerContainer:(id)arg1 clickedCollectionItemWithInfo:(id)arg2;
- (void)headerContainerClickedCollectionMoreButton:(id)arg1;
- (id)viewModel;
- (id)collectionListLayout;
- (void)setCollectionListLayout:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderHistoryAllPage : WCFinderHistoryPageBase <WCFinderFeedFlowViewAdapterDeleagte, WCFinderFeedFlowAdapterFeedVisitor>
{
    WCFinderFeedFlowViewAdapter * _flowViewAdapter; // +0x8
    WCFinderFeedFlowView * _feedFlowView; // +0x10
}
- (id)viewModel;
- (void)didMoveToSuperview;
- (void)setupFlowView;
- (void)onNoMoreTipsChange;
- (WCFinderFeedFlowViewCellMenuComponent)_createMenuComp;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (BOOL)feedFlowViewAdapter:(id)arg1 isCustomCell:(id)arg2;
- (double)feedFlowViewAdapter:(id)arg1 heightForCustomCell:(id)arg2 itemWidth:(double)arg3;
- (id)feedFlowViewAdapter:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3 customCellForFeed:(id)arg4;
- (BOOL)onFeedFlowViewOpenFeed:(id)arg1 fromVC:(id)arg2 index:(id)arg3 listVCScene:(int)arg4;
- (id)flowViewAdapter;
- (void)setFlowViewAdapter:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (void).cxx_destruct;
@end

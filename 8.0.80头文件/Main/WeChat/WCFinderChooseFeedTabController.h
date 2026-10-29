@interface WCFinderChooseFeedTabController : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderChooseFeedTabViewModelDelegate, WCFinderFeedFlowViewDelegate, WCFinderFeedPickerCollectionViewCellDelegate>
{
    id <WCFinderChooseFeedTabControllerDelegate> _delegate; // +0x8
    WCFinderChooseFeedTabControllerConfig * _config; // +0x10
    WCFinderFeedFlowView * _feedFlowView; // +0x18
    WCFinderChooseFeedTabViewModel * _viewModel; // +0x20
    WCFinderFeedContentVM * _selectedVM; // +0x28
}
- (id)initWithTabModel:(id)arg1 config:(id)arg2;
- (void)onSwitchToThisPage:(BOOL)arg1;
- (void)setSelfViewWithFrame:(CGRect)arg1 toSuperView:(id)arg2;
- (CGRect)viewFrame;
- (void)setViewFrame:(CGRect)arg1;
- (int)tabType;
- (id)feedFlowView;
- (double)topInset;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (BOOL)_isLimitByLimiter:(id)arg1;
- (void)setSelectionCell:(id)arg1 contentVm:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (void)finderChooseFeedTabVMDataChange:(id)arg1 hasMore:(BOOL)arg2;
- (void)onFinderFeedPickerSelectedCell:(id)arg1 selected:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void)setFeedFlowView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)selectedVM;
- (void)setSelectedVM:(id)arg1;
- (void).cxx_destruct;
@end

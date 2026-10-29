@interface MMBGMCategoryView : MMUIView <MMBGMCategoryViewModelDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    id <MMBGMCategoryViewDelegate> _delegate; // +0x8
    MMBGMCategoryViewModel * _viewModel; // +0x10
    WCFinderAnimationLoadingView * _loadingView; // +0x18
    UICollectionViewDiffableDataSource * _diffDataSource; // +0x20
    MMBGMPanelPublishContext * _publishContext; // +0x28
    MMBGMSelectedConfig * _panelConfig; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupViews;
- (void)setupDataReport;
- (void)setupData;
- (id)genReportDict;
- (void)applyDiffSnapshot;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)onBgmCategoryVMDataChange;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)diffDataSource;
- (void)setDiffDataSource:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (id)panelConfig;
- (void)setPanelConfig:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCFinderNativeDramaHalfScreenViewController : MMUIViewController <UICollectionViewDelegate, WCFinderNativeDramaHalfScreenViewModelDelegate, WCFinderNativeDramaDetailHeaderSectionDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenContentProtocol, WCFinderNativeDramaDetailViewControllerProtocol>
{
    id <WCFinderNativeDramaEpisodeListProtocol> _parentList; // +0x70
    WCFinderHalfScreenContainerViewController * _containerViewController; // +0x78
    WCFinderNativeDramaHalfScreenViewModel * _viewModel; // +0x80
    UICollectionView * _collectionView; // +0x88
    UICollectionViewDiffableDataSource * _collectionViewDataSource; // +0x90
}
- (id)initWithParams:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_setupUI;
- (id)_collectionViewLayout;
- (void)_setupDataSource;
- (void)_didSelectRangeItem:(id)arg1;
- (void)_didSelectEpisodeItem:(id)arg1;
- (void)_showComplaintActionSheet;
- (void)_dismissHalfScreenAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)_sectionAtIndex:(long long)arg1;
- (id)_itemAtIndexPath:(id)arg1;
- (id)_findPreviewNavigationVC;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_updateDataSource;
- (id)halfScreenTrackingScrollView;
- (double)contentHeight;
- (void)viewModelDidRefreshData:(id)arg1;
- (void)nativeDramaDetailHeaderSectionOnTapMoreButton;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)_setupPageReport;
- (id)parentList;
- (void)setParentList:(id)arg1;
- (id)containerViewController;
- (void)setContainerViewController:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewDataSource;
- (void)setCollectionViewDataSource:(id)arg1;
- (void).cxx_destruct;
@end

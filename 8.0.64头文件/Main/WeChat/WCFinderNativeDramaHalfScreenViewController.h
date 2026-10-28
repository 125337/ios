@interface WCFinderNativeDramaHalfScreenViewController : MMPageSheetBaseViewController <UICollectionViewDelegate, WCFinderHalfScreenProtocol, WCFinderNativeDramaHalfScreenViewModelDelegate, WCFinderNativeDramaDetailHeaderSectionDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    id <WCFinderNativeDramaEpisodeListProtocol> _parentList; // +0x70
    WCFinderNativeDramaHalfScreenViewModel * _viewModel; // +0x78
    UIView * _contentView; // +0x80
    WCFinderSteramProfileBarView * _lineView; // +0x88
    UICollectionView * _collectionView; // +0x90
    double _currentTranslationY; // +0x98
    UICollectionViewDiffableDataSource * _collectionViewDataSource; // +0xa0
}
- (id)initWithParams:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_setupUI;
- (id)_collectionViewLayout;
- (void)_setupDataSource;
- (void)_setupPageSheetConfig;
- (void)_handleScrollViewPanGesture:(id)arg1;
- (void)_didSelectRangeItem:(id)arg1;
- (void)_didSelectEpisodeItem:(id)arg1;
- (void)_showComplaintActionSheet;
- (void)_updateMoveDistance:(double)arg1;
- (id)_sectionAtIndex:(long long)arg1;
- (id)_itemAtIndexPath:(id)arg1;
- (id)_findPreviewNavigationVC;
- (void)pageSheetWillDisappear;
- (double)pageSheetContentHeight;
- (double)_pageSheetContentHeight;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)getHalfContainerView;
- (void)viewModelDidRefreshData:(id)arg1;
- (void)nativeDramaDetailHeaderSectionOnTapMoreButton;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)_setupPageReport;
- (id)parentList;
- (void)setParentList:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (double)currentTranslationY;
- (void)setCurrentTranslationY:(double)arg1;
- (id)collectionViewDataSource;
- (void)setCollectionViewDataSource:(id)arg1;
- (void).cxx_destruct;
@end

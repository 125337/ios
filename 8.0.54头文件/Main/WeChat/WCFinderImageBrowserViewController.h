@interface WCFinderImageBrowserViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderImageBrowserCellDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    BOOL _isRotating; // +0x68
    id <WCFinderImageBrowserViewControllerDelegate> _delegate; // +0x70
    UIImage * _transitionImage; // +0x78
    long long _transitionImageContentMode; // +0x80
    NSArray * _mediaList; // +0x88
    UICollectionViewFlowLayout * _layout; // +0x90
    UICollectionView * _collectionView; // +0x98
    UIView * _backgroundView; // +0xa0
    WCFinderPageControl * _pageCtrl; // +0xa8
    unsigned long long _currentPage; // +0xb0
    unsigned long long _pageInitialIndex; // +0xb8
    CGRect _transitionImageStartRect; // +0xc0
}
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)useCustomNavibar;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractivePop;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (id)initWithMediaList:(id)arg1 pageIndex:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)setupSubviews;
- (CGRect)collectionViewFrame;
- (void)layoutViews;
- (void)layoutOnSizeChanged;
- (void)onPageCtrlValueChange;
- (id)centerCell;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)setCurrentPage:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)imageBrowserCell:(id)arg1 changeBackgrondColorAlpha:(double)arg2;
- (void)imageBrowserCell:(id)arg1 changePullingDownState:(BOOL)arg2;
- (BOOL)imageBrowserCellIsRotating:(id)arg1;
- (void)imageBrowserCellOnSingleTap:(id)arg1;
- (void)imageBrowserCellPullingToDismiss:(id)arg1;
- (BOOL)imageBrowserCellShouldStartPullingDown:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)transitionImage;
- (void)setTransitionImage:(id)arg1;
- (CGRect)transitionImageStartRect;
- (void)setTransitionImageStartRect:(CGRect)arg1;
- (long long)transitionImageContentMode;
- (void)setTransitionImageContentMode:(long long)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)pageCtrl;
- (void)setPageCtrl:(id)arg1;
- (BOOL)isRotating;
- (void)setIsRotating:(BOOL)arg1;
- (unsigned long long)currentPage;
- (unsigned long long)pageInitialIndex;
- (void)setPageInitialIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


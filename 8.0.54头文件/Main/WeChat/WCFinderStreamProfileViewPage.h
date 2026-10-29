@interface WCFinderStreamProfileViewPage : NSObject <WCFinderStreamProfileViewPage>
{
    BOOL _isLoadingView; // +0x8
    UIScrollView * _scrollView; // +0x10
    WCFinderStreamProfileViewController * _profileViewController; // +0x18
    id _viewModel; // +0x20
    double _minContentInsetBottom; // +0x28
    WCFinderProfileTopRefreshView * _topRefreshView; // +0x30
    UIView * _contentView; // +0x38
    WCFinderStreamProfileViewScrollProxy * _scrollDelegateProxy; // +0x40
    WCFinderAnimationLoadingView * _loadingView; // +0x48
    UIEdgeInsets _contentInset; // +0x50
}
+ (Class)pageScrollViewClass;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (id)view;
- (id)scrollView;
- (id)getContentView;
- (void)ensureView:(CGRect)arg1 contentInset:(UIEdgeInsets)arg2;
- (void *)frameKVOPath;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)adjustScrollViewContentSize;
- (void)setProfileViewController:(id)arg1;
- (BOOL)isViewLoaded;
- (BOOL)isViewAppeared;
- (id)loadView;
- (void)onPageSizeDidChanged;
- (void)pageSizeDidChanged;
- (void)viewDidLoad;
- (void)viewWillApear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (double)originY30percent;
- (double)topSafePadding;
- (double)tabHeaderHeight;
- (int)commentScene;
- (void)setTopRefreshView:(id)arg1;
- (void)pushVCAnimated:(id)arg1;
- (BOOL)isVCClosing;
- (void)onStateLoading;
- (void)onStateNormal;
- (void)configLoading:(BOOL)arg1;
- (BOOL)isStateLoading;
- (void)adjustContentViewMinSize;
- (CGSize)contentScrollViewMinSize;
- (long long)onJustWatchBannerClickFromVC:(id)arg1;
- (CGRect)liveMorphDismissRectWithCustomKey:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setScrollView:(id)arg1;
- (id)profileViewController;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (double)minContentInsetBottom;
- (void)setMinContentInsetBottom:(double)arg1;
- (UIEdgeInsets)contentInset;
- (id)topRefreshView;
- (BOOL)isLoadingView;
- (void)setIsLoadingView:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)scrollDelegateProxy;
- (void)setScrollDelegateProxy:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end


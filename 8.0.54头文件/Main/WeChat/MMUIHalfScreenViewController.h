@interface MMUIHalfScreenViewController : MMUIViewController <MMUIHalfScreenViewDismissInteractiveTransitionDelegate, MMUIHalfScreenViewPresentationAnimateTransitionDelegate>
{
    MMUIView * m_maskView; // +0x68
    double m_maxHalfScreenHeight; // +0x70
    double m_maxHalfScreenWidth; // +0x78
    BOOL m_isHadDragUpMoreTopScrollViewDistance; // +0x80
    double _dragUpToTopScrollViewDistance; // +0x88
    BOOL _isHideSetupGradientEffect; // +0x90
    BOOL _isNOBackgroundButton; // +0x91
    BOOL _isHideBackgroupMask; // +0x92
    BOOL _isHideBorderShadow; // +0x93
    BOOL _isHideCloseButton; // +0x94
    BOOL _isForbidPanGesture; // +0x95
    BOOL _isForbidPanUpGesture; // +0x96
    BOOL _isHiddenVerticalScrollIndicator; // +0x97
    BOOL _isAutoShowVerticalScrollIndicator; // +0x98
    BOOL _isLimitDetailViewHeightDuringScrolling; // +0x99
    BOOL _isFromFinder; // +0x9a
    BOOL _isNeedHandleTransitionToNewSize; // +0x9b
    BOOL _hasEdgePanGestureRecognizer; // +0x9c
    BOOL _isEnableCloseButtonPanGesture; // +0x9d
    BOOL _isResetPresentedViewFrame; // +0x9e
    double _halfScreenHeight; // +0xa0
    double _halfScreenWidth; // +0xa8
    long long _halfScreenViewControllerModel; // +0xb0
    id <MMUIHalfScreenViewControllerDelegate> _delegate; // +0xb8
    UIView * _detailView; // +0xc0
    UIView * _contentView; // +0xc8
    double _viewTopAtPanBegin; // +0xd0
    double _scrollViewPaddingTop; // +0xd8
    double _closeButtonTop; // +0xe0
    MMUIButton * _closeButton; // +0xe8
    MMUIView * _topView; // +0xf0
    MMUIButton * _backgroundButton; // +0xf8
    id /* block */ _customClickBackgroundAction; // +0x100
    double _topViewHeight; // +0x108
    MMUIHalfScreenViewDismissInteractiveTransition * _dimissInteractiveTransition; // +0x110
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0x118
    double _dragDownCloseFriendsScrollViewDistance; // +0x120
    id /* block */ _halfScreenViewAnimationForPresentedBlock; // +0x128
    id /* block */ _halfScreenViewAnimationForDismissedBlock; // +0x130
    UIPanGestureRecognizer * _panGesture; // +0x138
    UIScrollView * _detaiInSideScrollView; // +0x140
    MMUIHalfScreenViewPresentationAnimateTransition * _presentationAnimate; // +0x148
}
+ (double)detailViewTopOffset;
- (id)init;
- (void)setMaxHalfScreenHeight:(double)arg1;
- (double)getMaxHalfScreenHeight;
- (void)setMaxHalfScreenWidth:(double)arg1;
- (double)getMaxHalfScreenWidth;
- (void)configPresentationCustomWithViewController:(id)arg1 resetPresentedViewFrame:(BOOL)arg2;
- (void)configPresentationCustomWithViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupView;
- (CGPoint)getMaxTopPoint;
- (double)getHalfScreenDetailViewMarginTop;
- (void)viewDidTransitionToNewSize;
- (void)setUpScrollViewWithGradientEffect;
- (void)setUpScrollViewGradientLayer;
- (void)setDetailView:(id)arg1;
- (void)setScrollViewVerticalScrollable:(BOOL)arg1;
- (void)setDetailView:(id)arg1 andInsideScrollView:(id)arg2;
- (void)setHalfScreenViewControllerModel:(long long)arg1;
- (id)topView;
- (id)contentView;
- (id)backgroundButton;
- (id)closeButton;
- (void)setIsEnableCloseButtonPanGesture:(BOOL)arg1;
- (double)halfScreenHeight;
- (void)setHalfScreenHeight:(double)arg1;
- (double)halfScreenWidth;
- (void)setHalfScreenWidth:(double)arg1;
- (double)dragDownCloseFriendsScrollViewDistance;
- (double)dragUpToTopScrollViewDistance;
- (void)setDragUpToTopScrollViewDistance:(double)arg1;
- (void)setIsResetPresentedViewFrame:(BOOL)arg1;
- (void)setDownScrollViewGradientLayerWithMaskView:(id)arg1 maskHeight:(double)arg2;
- (void)addPopBackInteractivePopGesture;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (id)interactionControllerForDismissal;
- (id)getHalfScreenViewControlle;
- (BOOL)isPanUpGesture:(id)arg1;
- (void)handleTopViewPanGesture:(id)arg1;
- (void)handleScrollViewPanGesture:(id)arg1;
- (void)scollerEndResetContentViewHeight:(double)arg1;
- (BOOL)shouldChangeDetailScrollViewHeightWhileScrolling;
- (void)onClickClose:(id)arg1;
- (void)doClickCloseWithNeedAnimated:(BOOL)arg1 action:(long long)arg2;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (void)setContentViewToTopAnimatedWithDuration:(double)arg1;
- (void)setContentViewToHalfAnimatedWithDuration:(double)arg1;
- (void)setContentViewTopTo:(double)arg1 animatedWithDuration:(double)arg2;
- (double)getDetailViewTop;
- (CGSize)getMaskViewDisplaySize;
- (double)getContentViewTop;
- (id)getTopTitleView;
- (id)getMaskView;
- (BOOL)needCloseOnOrientationChanged;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)relayoutContentViewSubviewsUseFullScreenWidth;
- (void)adjustDetailViewFrameToFitMaskView;
- (BOOL)isHideSetupGradientEffect;
- (void)setIsHideSetupGradientEffect:(BOOL)arg1;
- (long long)halfScreenViewControllerModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detailView;
- (void)setContentView:(id)arg1;
- (BOOL)isNOBackgroundButton;
- (void)setIsNOBackgroundButton:(BOOL)arg1;
- (BOOL)isHideBackgroupMask;
- (void)setIsHideBackgroupMask:(BOOL)arg1;
- (BOOL)isHideBorderShadow;
- (void)setIsHideBorderShadow:(BOOL)arg1;
- (BOOL)isHideCloseButton;
- (void)setIsHideCloseButton:(BOOL)arg1;
- (BOOL)isForbidPanGesture;
- (void)setIsForbidPanGesture:(BOOL)arg1;
- (BOOL)isForbidPanUpGesture;
- (void)setIsForbidPanUpGesture:(BOOL)arg1;
- (BOOL)isHiddenVerticalScrollIndicator;
- (void)setIsHiddenVerticalScrollIndicator:(BOOL)arg1;
- (BOOL)isAutoShowVerticalScrollIndicator;
- (void)setIsAutoShowVerticalScrollIndicator:(BOOL)arg1;
- (BOOL)isLimitDetailViewHeightDuringScrolling;
- (void)setIsLimitDetailViewHeightDuringScrolling:(BOOL)arg1;
- (BOOL)isFromFinder;
- (void)setIsFromFinder:(BOOL)arg1;
- (BOOL)isNeedHandleTransitionToNewSize;
- (void)setIsNeedHandleTransitionToNewSize:(BOOL)arg1;
- (BOOL)hasEdgePanGestureRecognizer;
- (void)setHasEdgePanGestureRecognizer:(BOOL)arg1;
- (double)viewTopAtPanBegin;
- (void)setViewTopAtPanBegin:(double)arg1;
- (double)scrollViewPaddingTop;
- (void)setScrollViewPaddingTop:(double)arg1;
- (double)closeButtonTop;
- (void)setCloseButtonTop:(double)arg1;
- (void)setCloseButton:(id)arg1;
- (BOOL)isEnableCloseButtonPanGesture;
- (void)setTopView:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (BOOL)isResetPresentedViewFrame;
- (id /* block */)customClickBackgroundAction;
- (void)setCustomClickBackgroundAction:(id /* block */)arg1;
- (double)topViewHeight;
- (void)setTopViewHeight:(double)arg1;
- (id)dimissInteractiveTransition;
- (void)setDimissInteractiveTransition:(id)arg1;
- (id)popBackInteractivePopGesture;
- (void)setPopBackInteractivePopGesture:(id)arg1;
- (void)setDragDownCloseFriendsScrollViewDistance:(double)arg1;
- (id /* block */)halfScreenViewAnimationForPresentedBlock;
- (void)setHalfScreenViewAnimationForPresentedBlock:(id /* block */)arg1;
- (id /* block */)halfScreenViewAnimationForDismissedBlock;
- (void)setHalfScreenViewAnimationForDismissedBlock:(id /* block */)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)detaiInSideScrollView;
- (void)setDetaiInSideScrollView:(id)arg1;
- (id)presentationAnimate;
- (void)setPresentationAnimate:(id)arg1;
- (void).cxx_destruct;
@end


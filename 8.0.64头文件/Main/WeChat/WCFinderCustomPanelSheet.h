@interface WCFinderCustomPanelSheet : MMUIViewController <UIGestureRecognizerDelegate, WCFinderStreamProfileDragBarViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _enableLandscapeMode; // +0x70
    BOOL _hideMaskBackGroundView; // +0x71
    BOOL _enableEdgePan; // +0x72
    BOOL _disableCloseGesture; // +0x73
    BOOL _disableClosePanGesture; // +0x74
    BOOL _useAutoLayout; // +0x75
    BOOL _hasConfigClose; // +0x76
    BOOL _displayed; // +0x77
    UIScrollView * _mainScrollView; // +0x78
    UIColor * _backgroundColor; // +0x80
    double _minHeight; // +0x88
    double _maxHeight; // +0x90
    double _maxHeightPercent; // +0x98
    NSString * _naviTitle; // +0xa0
    id /* block */ _contentViewLayoutBlock; // +0xa8
    id /* block */ _dismissBlock; // +0xb0
    id /* block */ _cancelBlock; // +0xb8
    UIView * _contentView; // +0xc0
    UIView * _rightBarItemView; // +0xc8
    id <WCFinderFeedBaseViewControllerProtocol> _forwardSceneObj; // +0xd0
    NSValue * _insetValue; // +0xd8
    MMUIButton * _closeButton; // +0xe0
    WCFinderStreamProfileDragBarView * _dragDownButton; // +0xe8
    UIView * _bgView; // +0xf0
    UIButton * _topCloseBGButton; // +0xf8
    UIView * _containerView; // +0x100
    long long _layoutFlag; // +0x108
    WCFinderRichTextView * _naviTitleLabel; // +0x110
    UITapGestureRecognizer * _closeGesture; // +0x118
    UIPanGestureRecognizer * _panGes; // +0x120
    UIScreenEdgePanGestureRecognizer * _edgePanGes; // +0x128
    double _previousPanPosition; // +0x130
    long long _displayCloseButtonStyle; // +0x138
    CGVector _closeButtonPosition; // +0x140
    CGSize _closeButtonSize; // +0x150
}
+ (id)findPreViewController:(id)arg1;
- (id)init;
- (id)initWithContentView:(id)arg1;
- (BOOL)useTransparentNavibar;
- (id)loadContentView;
- (id)mainScrollView;
- (void)setMainScrollView:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (UIEdgeInsets)contentInset;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)setCloseButtonStyle:(long long)arg1;
- (long long)closeButtonStyle;
- (void)setCloseButtonPosition:(CGVector)arg1;
- (void)relayoutCloseButton;
- (void)ensureCloseView;
- (void)setNaviTitle:(id)arg1;
- (void)updateNavTitle;
- (void)reloadNavTitleLayout;
- (void)setContentView:(id)arg1;
- (BOOL)_hasOverrideMethod:(SEL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)viewDidLoad;
- (void)_afterViewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)setupGesture;
- (void)setupMainScrollViewGesture;
- (id)findMainScrollView;
- (id)ergodicMainScrollView;
- (void)viewDidLayoutSubviews;
- (void)panelSheetWillCloseWithAction:(unsigned long long)arg1;
- (BOOL)panelDragPanGesShouldBegin:(id)arg1;
- (void)reloadLayout;
- (void)_layoutBGCloseButton;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (void)dragBarView:(id)arg1 draggingCloseChangeProgress:(double)arg2;
- (void)dragBarViewDidEnd:(id)arg1 beginAnimatedClose:(BOOL)arg2;
- (BOOL)dragBarView:(id)arg1 outterPanGesShouldBegin:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTapClose:(id)arg1;
- (void)onCloseBtnClicked;
- (void)closePanelWithAnimated:(BOOL)arg1;
- (void)onScrollPan:(id)arg1;
- (void)onEdgePan:(id)arg1;
- (void)onPan:(id)arg1;
- (void)onDismissGestureEndWithClose:(unsigned char)arg1 closeAction:(unsigned long long)arg2;
- (void)showOnView:(id)arg1;
- (void)dismiss;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (CGVector)closeButtonPosition;
- (CGSize)closeButtonSize;
- (void)setCloseButtonSize:(CGSize)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (double)maxHeightPercent;
- (void)setMaxHeightPercent:(double)arg1;
- (id)naviTitle;
- (id /* block */)contentViewLayoutBlock;
- (void)setContentViewLayoutBlock:(id /* block */)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id)contentView;
- (BOOL)enableLandscapeMode;
- (void)setEnableLandscapeMode:(BOOL)arg1;
- (id)rightBarItemView;
- (void)setRightBarItemView:(id)arg1;
- (BOOL)hideMaskBackGroundView;
- (void)setHideMaskBackGroundView:(BOOL)arg1;
- (BOOL)enableEdgePan;
- (void)setEnableEdgePan:(BOOL)arg1;
- (BOOL)disableCloseGesture;
- (void)setDisableCloseGesture:(BOOL)arg1;
- (BOOL)disableClosePanGesture;
- (void)setDisableClosePanGesture:(BOOL)arg1;
- (BOOL)useAutoLayout;
- (void)setUseAutoLayout:(BOOL)arg1;
- (id)forwardSceneObj;
- (void)setForwardSceneObj:(id)arg1;
- (BOOL)hasConfigClose;
- (void)setHasConfigClose:(BOOL)arg1;
- (id)insetValue;
- (void)setInsetValue:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)dragDownButton;
- (void)setDragDownButton:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)topCloseBGButton;
- (void)setTopCloseBGButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (BOOL)displayed;
- (void)setDisplayed:(BOOL)arg1;
- (long long)layoutFlag;
- (void)setLayoutFlag:(long long)arg1;
- (id)naviTitleLabel;
- (void)setNaviTitleLabel:(id)arg1;
- (id)closeGesture;
- (void)setCloseGesture:(id)arg1;
- (id)panGes;
- (void)setPanGes:(id)arg1;
- (id)edgePanGes;
- (void)setEdgePanGes:(id)arg1;
- (double)previousPanPosition;
- (void)setPreviousPanPosition:(double)arg1;
- (long long)displayCloseButtonStyle;
- (void)setDisplayCloseButtonStyle:(long long)arg1;
- (void).cxx_destruct;
@end

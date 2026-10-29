@interface WCFinderCustomPanelSheet : MMUIViewController <UIGestureRecognizerDelegate, WCFinderStreamProfileDragBarViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _enableLandscapeMode; // +0x68
    BOOL _enableEdgePan; // +0x69
    BOOL _hideMaskBackGroundView; // +0x6a
    BOOL _hasConfigClose; // +0x6b
    BOOL _displayed; // +0x6c
    UIScrollView * _mainScrollView; // +0x70
    double _minHeight; // +0x78
    double _maxHeight; // +0x80
    NSString * _naviTitle; // +0x88
    UIColor * _backgroundColor; // +0x90
    id /* block */ _contentViewLayoutBlock; // +0x98
    id /* block */ _dismissBlock; // +0xa0
    id /* block */ _cancelBlock; // +0xa8
    UIView * _contentView; // +0xb0
    UIView * _rightBarItemView; // +0xb8
    id <WCFinderFeedBaseViewControllerProtocol> _forwardSceneObj; // +0xc0
    NSValue * _insetValue; // +0xc8
    MMUIButton * _closeButton; // +0xd0
    WCFinderStreamProfileDragBarView * _dragDownButton; // +0xd8
    UIView * _bgView; // +0xe0
    UIView * _containerView; // +0xe8
    long long _layoutFlag; // +0xf0
    WCFinderCustomImageRichTextView * _naviTitleLabel; // +0xf8
    UITapGestureRecognizer * _closeGesture; // +0x100
    UIPanGestureRecognizer * _panGes; // +0x108
    UIScreenEdgePanGestureRecognizer * _edgePanGes; // +0x110
    double _previousPanPosition; // +0x118
    CGVector _closeButtonPosition; // +0x120
    CGSize _closeButtonSize; // +0x130
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
- (long long)_closeButtonStyle;
- (void)setCloseButtonPosition:(CGVector)arg1;
- (void)relayoutCloseButton;
- (void)ensureCloseView:(long long)arg1;
- (void)setNaviTitle:(id)arg1;
- (void)updateNavTitle;
- (void)reloadNavTitleLayout;
- (void)setContentView:(id)arg1;
- (BOOL)_hasOverrideMethod:(SEL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)viewDidLoad;
- (void)_afterViewDidLoad;
- (void)setupGesture;
- (void)setupMainScrollViewGesture;
- (id)findMainScrollView;
- (id)ergodicMainScrollView;
- (void)viewDidLayoutSubviews;
- (void)panelSheetWillCloseWithAction:(unsigned long long)arg1;
- (BOOL)panelDragPanGesShouldBegin:(id)arg1;
- (void)reloadLayout;
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
- (id)naviTitle;
- (id)backgroundColor;
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
- (BOOL)enableEdgePan;
- (void)setEnableEdgePan:(BOOL)arg1;
- (BOOL)hideMaskBackGroundView;
- (void)setHideMaskBackGroundView:(BOOL)arg1;
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
- (void).cxx_destruct;
@end


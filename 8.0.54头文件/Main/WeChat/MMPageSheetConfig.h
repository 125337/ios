@interface MMPageSheetConfig : NSObject
{
    BOOL _enableDragToClose; // +0x8
    BOOL _isAllowTapBgMaskToClose; // +0x9
    BOOL _isNavAddDragDown; // +0xa
    BOOL _showNavigationBarSepLine; // +0xb
    BOOL _handleCustomBgTap; // +0xc
    BOOL _hideBgMask; // +0xd
    BOOL _transferTouchEventInBgMask; // +0xe
    BOOL _backgroundBlur; // +0xf
    BOOL _autoAdjustAtKeyboardChange; // +0x10
    BOOL _hideBottomWhenShowingKeyboard; // +0x11
    BOOL _showFromRightToLeftAtLandscape; // +0x12
    BOOL _showFromRightToLeftAtPortrait; // +0x13
    BOOL _autoRotatePortraitAtPresent; // +0x14
    BOOL _forbidCorner; // +0x15
    BOOL _useIphoneUIStyleInIpad; // +0x16
    BOOL _enableEdgeSlideToClose; // +0x17
    BOOL _recognizeHorizontalWhenDragToClose; // +0x18
    BOOL _ignoreDragVelocityThreshold; // +0x19
    BOOL _navHidden; // +0x1a
    BOOL _isNavTranslucent; // +0x1b
    BOOL _alignTitleAndIconToCenter; // +0x1c
    BOOL _preferredCenterTitleAlignment; // +0x1d
    BOOL _isConfirmButtonDisable; // +0x1e
    int _windowLevel; // +0x20
    unsigned int _dragDownButtonStyle; // +0x24
    unsigned int _navLeftStyle; // +0x28
    UIColor * _maskBackgroundColor; // +0x30
    UIColor * _contentBackgroundColor; // +0x38
    UIView * _customBackgroundView; // +0x40
    UIView * _customBackgroundMaskView; // +0x48
    unsigned long long _overrideSupportOrientation; // +0x50
    id <UIViewControllerTransitioningDelegate> _presentTransitionDelegate; // +0x58
    double _contentWidthInIphone; // +0x60
    double _edgeSlideThreshold; // +0x68
    UIScrollView * _dragToCloseInstallScrollView; // +0x70
    double _dragToCloseRatio; // +0x78
    NSNumber * _animateDuration; // +0x80
    NSString * _title; // +0x88
    NSString * _topTitle; // +0x90
    long long _titleLineBreakMode; // +0x98
    UIColor * _dragDownProgressBarColor; // +0xa0
    UIColor * _dragDownProgressArrowColor; // +0xa8
    UIColor * _titleColor; // +0xb0
    UIFont * _titleFont; // +0xb8
    NSString * _subTitle; // +0xc0
    UIColor * _subTitleColor; // +0xc8
    UIFont * _subTitleFont; // +0xd0
    UIImage * _headIconImage; // +0xd8
    UIView * _titleView; // +0xe0
    UIView * _titleRightIconView; // +0xe8
    UIView * _navLeftButton; // +0xf0
    double _leftMargin; // +0xf8
    PageSheetBarButtonContext * _leftBarButtonContext; // +0x100
    PageSheetBarButtonContext * _rightBarButtonContext; // +0x108
    NSArray * _leftBarButtonContexts; // +0x110
    NSArray * _rightBarButtonContexts; // +0x118
    UIView * _navRightButton; // +0x120
    UIView * _navBackButton; // +0x128
    UIColor * _navButtonTintColor; // +0x130
    UIColor * _navBarBackgroundColor; // +0x138
    long long _bottomType; // +0x140
    id <MMPageSheetBottomViewDelegate> _bottomViewDelegate; // +0x148
    UIView * _bottomCustomSubview; // +0x150
    id <MMPageSheetGestureRecognizerDelegate> _pageSheetGestureRecognizerDelegate; // +0x158
    id <MMPageSheetConfigDelegate> _delegate; // +0x160
}
- (BOOL)shouldShowHeader:(BOOL)arg1;
- (double)headerHeight:(BOOL)arg1;
- (BOOL)shouldShowFooter;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (BOOL)shouldShowFromRightToLeftAtLandscape;
- (BOOL)shouldShowFromRightToLeftAtPortrait;
- (BOOL)shouldUseIPadCenterMode;
- (BOOL)isUseIpadUIStyle;
- (double)defaultPageSheetContentWidth;
- (id)init;
- (void)setDragDownButtonStyle:(unsigned int)arg1;
- (void)setIsAllowTapBgMaskToClose:(BOOL)arg1;
- (void)setHandleCustomBgTap:(BOOL)arg1;
- (void)setContentBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setHeadIconImage:(id)arg1;
- (void)setTitleRightIconView:(id)arg1;
- (void)setNavLeftStyle:(unsigned int)arg1;
- (void)setBottomType:(long long)arg1;
- (void)setNavLeftButton:(id)arg1;
- (void)setLeftBarButtonContext:(id)arg1;
- (void)setLeftBarButtonContexts:(id)arg1;
- (void)setRightBarButtonContext:(id)arg1;
- (void)setRightBarButtonContexts:(id)arg1;
- (void)setIsNavAddDragDown:(BOOL)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setNavRightButton:(id)arg1;
- (void)setIsConfirmButtonDisable:(BOOL)arg1;
- (void)setNavBarBackgroundColor:(id)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setNavBackButton:(id)arg1;
- (void)setDragToCloseInstallScrollView:(id)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (void)setEnableEdgeSlideToClose:(BOOL)arg1;
- (double)footerHeight;
- (double)headerHeight;
- (BOOL)isPageSheetVisible;
- (BOOL)isPageSheetPushIn;
- (id)navigationBarView;
- (BOOL)isAllowTapBgMaskToClose;
- (BOOL)isNavAddDragDown;
- (BOOL)showNavigationBarSepLine;
- (void)setShowNavigationBarSepLine:(BOOL)arg1;
- (BOOL)handleCustomBgTap;
- (BOOL)hideBgMask;
- (void)setHideBgMask:(BOOL)arg1;
- (BOOL)transferTouchEventInBgMask;
- (void)setTransferTouchEventInBgMask:(BOOL)arg1;
- (id)maskBackgroundColor;
- (void)setMaskBackgroundColor:(id)arg1;
- (id)contentBackgroundColor;
- (BOOL)backgroundBlur;
- (void)setBackgroundBlur:(BOOL)arg1;
- (id)customBackgroundView;
- (id)customBackgroundMaskView;
- (void)setCustomBackgroundMaskView:(id)arg1;
- (BOOL)autoAdjustAtKeyboardChange;
- (void)setAutoAdjustAtKeyboardChange:(BOOL)arg1;
- (BOOL)hideBottomWhenShowingKeyboard;
- (void)setHideBottomWhenShowingKeyboard:(BOOL)arg1;
- (BOOL)showFromRightToLeftAtLandscape;
- (void)setShowFromRightToLeftAtLandscape:(BOOL)arg1;
- (BOOL)showFromRightToLeftAtPortrait;
- (void)setShowFromRightToLeftAtPortrait:(BOOL)arg1;
- (int)windowLevel;
- (void)setWindowLevel:(int)arg1;
- (BOOL)autoRotatePortraitAtPresent;
- (void)setAutoRotatePortraitAtPresent:(BOOL)arg1;
- (unsigned long long)overrideSupportOrientation;
- (void)setOverrideSupportOrientation:(unsigned long long)arg1;
- (id)presentTransitionDelegate;
- (void)setPresentTransitionDelegate:(id)arg1;
- (BOOL)forbidCorner;
- (void)setForbidCorner:(BOOL)arg1;
- (double)contentWidthInIphone;
- (void)setContentWidthInIphone:(double)arg1;
- (BOOL)useIphoneUIStyleInIpad;
- (void)setUseIphoneUIStyleInIpad:(BOOL)arg1;
- (BOOL)enableEdgeSlideToClose;
- (double)edgeSlideThreshold;
- (void)setEdgeSlideThreshold:(double)arg1;
- (BOOL)recognizeHorizontalWhenDragToClose;
- (void)setRecognizeHorizontalWhenDragToClose:(BOOL)arg1;
- (id)dragToCloseInstallScrollView;
- (BOOL)ignoreDragVelocityThreshold;
- (void)setIgnoreDragVelocityThreshold:(BOOL)arg1;
- (double)dragToCloseRatio;
- (void)setDragToCloseRatio:(double)arg1;
- (id)animateDuration;
- (void)setAnimateDuration:(id)arg1;
- (BOOL)navHidden;
- (void)setNavHidden:(BOOL)arg1;
- (BOOL)isNavTranslucent;
- (void)setIsNavTranslucent:(BOOL)arg1;
- (id)title;
- (id)topTitle;
- (void)setTopTitle:(id)arg1;
- (long long)titleLineBreakMode;
- (void)setTitleLineBreakMode:(long long)arg1;
- (unsigned int)dragDownButtonStyle;
- (id)dragDownProgressBarColor;
- (void)setDragDownProgressBarColor:(id)arg1;
- (id)dragDownProgressArrowColor;
- (void)setDragDownProgressArrowColor:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)subTitle;
- (id)subTitleColor;
- (void)setSubTitleColor:(id)arg1;
- (id)subTitleFont;
- (void)setSubTitleFont:(id)arg1;
- (id)headIconImage;
- (id)titleView;
- (id)titleRightIconView;
- (BOOL)alignTitleAndIconToCenter;
- (void)setAlignTitleAndIconToCenter:(BOOL)arg1;
- (unsigned int)navLeftStyle;
- (id)navLeftButton;
- (double)leftMargin;
- (id)leftBarButtonContext;
- (id)rightBarButtonContext;
- (id)leftBarButtonContexts;
- (id)rightBarButtonContexts;
- (id)navRightButton;
- (id)navBackButton;
- (id)navButtonTintColor;
- (void)setNavButtonTintColor:(id)arg1;
- (BOOL)preferredCenterTitleAlignment;
- (void)setPreferredCenterTitleAlignment:(BOOL)arg1;
- (id)navBarBackgroundColor;
- (long long)bottomType;
- (id)bottomViewDelegate;
- (void)setBottomViewDelegate:(id)arg1;
- (BOOL)isConfirmButtonDisable;
- (id)bottomCustomSubview;
- (void)setBottomCustomSubview:(id)arg1;
- (id)pageSheetGestureRecognizerDelegate;
- (void)setPageSheetGestureRecognizerDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


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
    BOOL _autoFittingSafeArea; // +0x10
    BOOL _autoAdjustAtKeyboardChange; // +0x11
    BOOL _hideBottomWhenShowingKeyboard; // +0x12
    BOOL _showFromRightToLeftAtLandscape; // +0x13
    BOOL _enableDragToCloseAtLandscapeR2L; // +0x14
    BOOL _hideWhenCoveredByPageSheet; // +0x15
    BOOL _showFromRightToLeftAtPortrait; // +0x16
    BOOL _autoRotatePortraitAtPresent; // +0x17
    BOOL _forbidCorner; // +0x18
    BOOL _useIphoneUIStyleInIpad; // +0x19
    BOOL _enableEdgeSlideToClose; // +0x1a
    BOOL _enableDragToResize; // +0x1b
    BOOL _recognizeHorizontalWhenDragToClose; // +0x1c
    BOOL _ignoreDragVelocityThreshold; // +0x1d
    BOOL _dragNotCloseHalfScreen; // +0x1e
    BOOL _disablePageSheetChangeAnimation; // +0x1f
    BOOL _disableAlphaTransitionAtPresent; // +0x20
    BOOL _navHidden; // +0x21
    BOOL _isNavTranslucent; // +0x22
    BOOL _isTruncateSubtitleHead; // +0x23
    BOOL _alignTitleAndIconToCenter; // +0x24
    BOOL _preferredCenterTitleAlignment; // +0x25
    BOOL _isConfirmButtonDisable; // +0x26
    int _windowLevel; // +0x28
    unsigned int _dragDownButtonStyle; // +0x2c
    unsigned int _navLeftStyle; // +0x30
    UIColor * _maskBackgroundColor; // +0x38
    UIColor * _contentBackgroundColor; // +0x40
    UIView * _customBackgroundView; // +0x48
    UIView * _customBackgroundMaskView; // +0x50
    double _maxKeyboardAdjustHeight; // +0x58
    unsigned long long _overrideSupportOrientation; // +0x60
    id <UIViewControllerTransitioningDelegate> _presentTransitionDelegate; // +0x68
    UINavigationController * _externalNavigationController; // +0x70
    double _contentWidthInIphone; // +0x78
    double _edgeSlideThreshold; // +0x80
    UIScrollView * _dragToCloseInstallScrollView; // +0x88
    double _dragToCloseRatio; // +0x90
    NSNumber * _animateDuration; // +0x98
    NSString * _title; // +0xa0
    NSString * _topTitle; // +0xa8
    long long _titleLineBreakMode; // +0xb0
    UIColor * _dragDownProgressBarColor; // +0xb8
    UIColor * _dragDownProgressArrowColor; // +0xc0
    UIColor * _titleColor; // +0xc8
    UIFont * _titleFont; // +0xd0
    NSString * _subTitle; // +0xd8
    UIColor * _subTitleColor; // +0xe0
    UIFont * _subTitleFont; // +0xe8
    double _subTitleSpacing; // +0xf0
    UIImage * _headIconImage; // +0xf8
    UIView * _titleView; // +0x100
    UIView * _titleRightIconView; // +0x108
    UIView * _navLeftButton; // +0x110
    double _leftMargin; // +0x118
    PageSheetBarButtonContext * _leftBarButtonContext; // +0x120
    PageSheetBarButtonContext * _rightBarButtonContext; // +0x128
    NSArray * _leftBarButtonContexts; // +0x130
    NSArray * _rightBarButtonContexts; // +0x138
    UIView * _navRightButton; // +0x140
    UIView * _navBackButton; // +0x148
    UIColor * _navButtonTintColor; // +0x150
    UIColor * _navBarBackgroundColor; // +0x158
    long long _bottomType; // +0x160
    id <MMPageSheetBottomViewDelegate> _bottomViewDelegate; // +0x168
    UIView * _bottomCustomSubview; // +0x170
    id <MMPageSheetGestureRecognizerDelegate> _pageSheetGestureRecognizerDelegate; // +0x178
    id <MMPageSheetConfigDelegate> _delegate; // +0x180
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
- (void)setForbidCorner:(BOOL)arg1;
- (void)setNavHidden:(BOOL)arg1;
- (void)setMaskBackgroundColor:(id)arg1;
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
- (id)contentBackgroundColor;
- (BOOL)backgroundBlur;
- (void)setBackgroundBlur:(BOOL)arg1;
- (id)customBackgroundView;
- (id)customBackgroundMaskView;
- (void)setCustomBackgroundMaskView:(id)arg1;
- (BOOL)autoFittingSafeArea;
- (void)setAutoFittingSafeArea:(BOOL)arg1;
- (BOOL)autoAdjustAtKeyboardChange;
- (void)setAutoAdjustAtKeyboardChange:(BOOL)arg1;
- (double)maxKeyboardAdjustHeight;
- (void)setMaxKeyboardAdjustHeight:(double)arg1;
- (BOOL)hideBottomWhenShowingKeyboard;
- (void)setHideBottomWhenShowingKeyboard:(BOOL)arg1;
- (BOOL)showFromRightToLeftAtLandscape;
- (void)setShowFromRightToLeftAtLandscape:(BOOL)arg1;
- (BOOL)enableDragToCloseAtLandscapeR2L;
- (void)setEnableDragToCloseAtLandscapeR2L:(BOOL)arg1;
- (BOOL)hideWhenCoveredByPageSheet;
- (void)setHideWhenCoveredByPageSheet:(BOOL)arg1;
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
- (id)externalNavigationController;
- (void)setExternalNavigationController:(id)arg1;
- (BOOL)forbidCorner;
- (double)contentWidthInIphone;
- (void)setContentWidthInIphone:(double)arg1;
- (BOOL)useIphoneUIStyleInIpad;
- (void)setUseIphoneUIStyleInIpad:(BOOL)arg1;
- (BOOL)enableEdgeSlideToClose;
- (double)edgeSlideThreshold;
- (void)setEdgeSlideThreshold:(double)arg1;
- (BOOL)enableDragToResize;
- (void)setEnableDragToResize:(BOOL)arg1;
- (BOOL)recognizeHorizontalWhenDragToClose;
- (void)setRecognizeHorizontalWhenDragToClose:(BOOL)arg1;
- (id)dragToCloseInstallScrollView;
- (BOOL)ignoreDragVelocityThreshold;
- (void)setIgnoreDragVelocityThreshold:(BOOL)arg1;
- (double)dragToCloseRatio;
- (void)setDragToCloseRatio:(double)arg1;
- (BOOL)dragNotCloseHalfScreen;
- (void)setDragNotCloseHalfScreen:(BOOL)arg1;
- (id)animateDuration;
- (void)setAnimateDuration:(id)arg1;
- (BOOL)disablePageSheetChangeAnimation;
- (void)setDisablePageSheetChangeAnimation:(BOOL)arg1;
- (BOOL)disableAlphaTransitionAtPresent;
- (void)setDisableAlphaTransitionAtPresent:(BOOL)arg1;
- (BOOL)navHidden;
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
- (double)subTitleSpacing;
- (void)setSubTitleSpacing:(double)arg1;
- (BOOL)isTruncateSubtitleHead;
- (void)setIsTruncateSubtitleHead:(BOOL)arg1;
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

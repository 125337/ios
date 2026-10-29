@interface WAGameActionSheet : MMObject
{
    WAContact * m_contact; // +0x8
    unsigned long long m_appType; // +0x10
    NSArray * m_btnTitles; // +0x18
    NSArray * m_debugTitles; // +0x20
    NSString * m_cancelTitle; // +0x28
    BOOL m_isLandScape; // +0x30
    BOOL m_isNewGroup; // +0x31
    double kButtonFontSize; // +0x38
    double MENU_ICON_LRMARGIN; // +0x40
    double MENU_ICON_SIZE; // +0x48
    double MENU_FONT_SIZE; // +0x50
    double MENU_TO_TITLE; // +0x58
    double kButtonHeight; // +0x60
    double kHeaderButtonIconSize; // +0x68
    double WAActivityHeadHonrizonMargin; // +0x70
    UIColor * kMaskViewBGColor; // +0x78
    double kMaskViewBGAlpha; // +0x80
    UIColor * kContainerViewBGColor; // +0x88
    UIColor * kMenuButtonColor; // +0x90
    UIColor * kMenuButtonHighlightColor; // +0x98
    UIColor * kMenuBorderColor; // +0xa0
    UIColor * kButtonTitleColor; // +0xa8
    UIColor * kMenuTitleColor; // +0xb0
    long long BLUR_EFFECT_TYPE; // +0xb8
    double kActionSheetWidth; // +0xc0
    double kBorderWidth; // +0xc8
    BOOL _isUseWeAppModule; // +0xd0
    BOOL _isDismissForbidAnimation; // +0xd1
    id <WAGameActionSheetDelegate> _delegate; // +0xd8
    long long _actionSheetStyle; // +0xe0
    UIView * _maskView; // +0xe8
    UIView * _containerView; // +0xf0
    UIButton * _cancelBtn; // +0xf8
    UIView * _parentView; // +0x100
}
- (id)STYLECOLORWithLight:(id)arg1 ligthAlpha:(double)arg2 dark:(id)arg3 darkAlpha:(double)arg4;
- (double)LANDSCAPEFLOAT:(id)arg1 withPortrait:(id)arg2;
- (id)initWithUsrName:(id)arg1 orientation:(long long)arg2 appType:(unsigned long long)arg3 cancelButtonTitle:(id)arg4 buttonTitleArray:(id)arg5 delegate:(id)arg6;
- (void)dealloc;
- (void)showInView:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissWithAnimation;
- (BOOL)isVisible;
- (void)setDebugTitles:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setupMaskView;
- (void)setupContainerView;
- (double)addButtonToView:(id)arg1 button:(id)arg2 originY:(double)arg3;
- (double)endButtonGroups:(id)arg1 originY:(double)arg2;
- (id)setupButtonsView;
- (id)setupMenuView:(double)arg1;
- (id)genboundaryLine:(CGSize)arg1;
- (id)genNormalBtn:(id)arg1;
- (id)genHeaderBtnWithContact:(id)arg1 appType:(unsigned long long)arg2;
- (void)onMenuButtonClicked:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (void)onHeaderButtonClicked:(id)arg1;
- (void)onCancelButtonClick:(id)arg1;
- (void)didRotate:(id)arg1;
- (double)getActionSheetWidth;
- (double)getScreenWidth;
- (double)getScreenHeight;
- (BOOL)isSmallScreenLandscape;
- (UIEdgeInsets)realSafeAreaInsets;
- (BOOL)isUseWeAppModule;
- (void)setIsUseWeAppModule:(BOOL)arg1;
- (BOOL)isDismissForbidAnimation;
- (void)setIsDismissForbidAnimation:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)actionSheetStyle;
- (void)setActionSheetStyle:(long long)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end

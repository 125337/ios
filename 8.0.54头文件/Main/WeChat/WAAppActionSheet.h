@interface WAAppActionSheet : MMObject
{
    WAContact * m_contact; // +0x8
    unsigned long long m_appType; // +0x10
    NSArray * m_btnTitles; // +0x18
    NSArray * m_debugTitles; // +0x20
    NSString * m_cancelTitle; // +0x28
    NSString * m_destructiveTitle; // +0x30
    UIImage * m_fakeViewImage; // +0x38
    BOOL m_isLandScape; // +0x40
    BOOL m_isDismissing; // +0x41
    BOOL _isUseWeAppModule; // +0x42
    BOOL _isHideAppInfoBtn; // +0x43
    BOOL _isHideCancelBtn; // +0x44
    id <WAAppActionSheetDelegate> m_delegate; // +0x48
    UIView * _interateView; // +0x50
    UIView * _containerView; // +0x58
    long long _menuState; // +0x60
    UIVisualEffectView * _blurView; // +0x68
    NSMutableArray * _btnArray; // +0x70
    UIButton * _destructiveBtn; // +0x78
    UIButton * _cancelBtn; // +0x80
    UILabel * _headerTitleLabel; // +0x88
    UIView * _parentView; // +0x90
}
- (id)initWithUsrName:(id)arg1 appType:(unsigned long long)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 buttonTitleArray:(id)arg5 delegate:(id)arg6;
- (void)dealloc;
- (id)getHeaderButtonTitle:(id)arg1;
- (double)getActionSheetWidth;
- (void)didRotate:(id)arg1;
- (double)getViewWidth;
- (double)getViewHeight;
- (void)showInView:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissWithAnimation;
- (BOOL)isVisible;
- (void)setDebugTitles:(id)arg1;
- (void)initContainerView;
- (id)setupButtonsView;
- (void)initInterateView;
- (BOOL)isSupportVisualEffect;
- (id)genPrivacyStateView;
- (id)genNormalBtn:(id)arg1;
- (id)genDestructiveBtn;
- (id)genWeAppInfoBtnWithContact:(id)arg1 appType:(unsigned long long)arg2;
- (void)onButtonClicked:(id)arg1;
- (void)onStateViewClicked:(id)arg1;
- (void)onHeaerButtonClicked:(id)arg1;
- (void)onDestructiveButtonClick:(id)arg1;
- (void)onCancelButtonClick:(id)arg1;
- (UIEdgeInsets)realSafeAreaInsets;
- (void)_releaseViews;
- (void)addLongPressGestureForHeaderButton:(id)arg1;
- (void)onLongPressHeaderButtonLabel:(id)arg1;
- (id)setupAppInfoView:(double)arg1;
- (BOOL)isSmallScreenLandscape;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isLandScape;
- (void)setM_isLandScape:(BOOL)arg1;
- (BOOL)m_isDismissing;
- (void)setM_isDismissing:(BOOL)arg1;
- (id)interateView;
- (void)setInterateView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (BOOL)isUseWeAppModule;
- (void)setIsUseWeAppModule:(BOOL)arg1;
- (long long)menuState;
- (void)setMenuState:(long long)arg1;
- (BOOL)isHideAppInfoBtn;
- (void)setIsHideAppInfoBtn:(BOOL)arg1;
- (BOOL)isHideCancelBtn;
- (void)setIsHideCancelBtn:(BOOL)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)btnArray;
- (void)setBtnArray:(id)arg1;
- (id)destructiveBtn;
- (void)setDestructiveBtn:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end


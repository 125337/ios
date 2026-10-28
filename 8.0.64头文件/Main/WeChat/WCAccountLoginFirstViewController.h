@interface WCAccountLoginFirstViewController : WCAccountBaseViewController <ILinkEventExt, IMMLanguageMgrExt>
{
    id <WCAccountLoginFirstViewControllerDelegate> m_delegate; // +0x80
    UIView * m_view; // +0x88
    UIView * m_bottomView; // +0x90
    UIButton * m_regBtn; // +0x98
    UIButton * m_loginBtn; // +0xa0
    UIButton * m_btnChangeLanguage; // +0xa8
    UIImageView * m_backgroundImageView; // +0xb0
}
- (id)init;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)onLanguageChange;
- (void)setDelegate:(id)arg1;
- (void)updateChangeLanguageBtn;
- (double)getVisibleHeight;
- (void)adjustViewAndNavBarRect;
- (void)adjustTableViewRect;
- (id)getBackgroundImgWithOrientation:(long long)arg1;
- (BOOL)useSheetView;
- (BOOL)useTableView;
- (void)initView;
- (void)onChangeLanguage;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void).cxx_destruct;
@end

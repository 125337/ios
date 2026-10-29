@interface KidsWatchNormalLoginViewController : KidsWatchBaseViewController
{
    BOOL _showSyncChat; // +0x70
    KidsWatchSwitchCardView * _switchCardView; // +0x78
    KidsWatchTipsButton * _tipsButton; // +0x80
    KidsWatchButton * _loginButton; // +0x88
    MMUIButton * _syncChatCheckbox; // +0x90
}
- (void)setupWithData:(id)arg1;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)onTapLoginButton;
- (void)onTapTipsButton;
- (void)onTapSyncChatCheckbox;
- (id)switchCardView;
- (void)setSwitchCardView:(id)arg1;
- (id)tipsButton;
- (void)setTipsButton:(id)arg1;
- (id)loginButton;
- (void)setLoginButton:(id)arg1;
- (id)syncChatCheckbox;
- (void)setSyncChatCheckbox:(id)arg1;
- (BOOL)showSyncChat;
- (void)setShowSyncChat:(BOOL)arg1;
- (void).cxx_destruct;
@end

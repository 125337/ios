@interface WCFinderAccountWechatInfoSheet : WCFinderCustomPanelSheet
{
    MasterWxAcctInfo * _accountInfo; // +0x68
    UIView * _contentContainerView; // +0x70
    UILabel * _tipsLabel; // +0x78
    UILabel * _nickNameLabel; // +0x80
    UILabel * _usernameLabel; // +0x88
    WCFinderHeadImageView * _headImageView; // +0x90
}
- (void)viewDidLoad;
- (long long)closeButtonStyle;
- (CGVector)closeButtonPosition;
- (CGSize)closeButtonSize;
- (id)loadContentView;
- (void)setAccountInfo:(id)arg1;
- (void)reloadView;
- (double)maxHeight;
- (void)viewDidLayoutSubviews;
- (id)accountInfo;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)usernameLabel;
- (void)setUsernameLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCAccountRegByOldPhoneNewViewController : WCAccountBaseViewController
{
    id <WCAccountRegByOldPhoneViewControllerDelegate> m_delegate; // +0x80
    BOOL _hasNickname; // +0x88
    BOOL _hasUser; // +0x89
    MMUILabel * _titleLabel; // +0x90
    MMWebImageView * _headImageView; // +0x98
    MMUILabel * _nicknameLabel; // +0xa0
    MMUILabel * _contentLabel; // +0xa8
    UIButton * _continueBtn; // +0xb0
    UIButton * _loginLinkBtn; // +0xb8
    NSMutableDictionary * _userInfo; // +0xc0
}
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)initData;
- (void)registerYReportSdk;
- (void)viewDidLayoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)initNavigationBar;
- (void)initView;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)continueBtn;
- (void)setContinueBtn:(id)arg1;
- (id)loginLinkBtn;
- (void)setLoginLinkBtn:(id)arg1;
- (BOOL)hasNickname;
- (void)setHasNickname:(BOOL)arg1;
- (BOOL)hasUser;
- (void)setHasUser:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

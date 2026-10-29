@interface WCAccountRegByOldPhoneViewController : WCAccountBaseViewController
{
    id <WCAccountRegByOldPhoneViewControllerDelegate> m_delegate; // +0x80
    BOOL _hasNickname; // +0x88
    BOOL _hasUser; // +0x89
    MMWebImageView * _headImageView; // +0x90
    MMUILabel * _nicknameLabel; // +0x98
    MMUILabel * _contentLabel; // +0xa0
    UIView * _mItemsView; // +0xa8
    NSMutableDictionary * _userInfo; // +0xb0
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
- (id)mItemsView;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void)setMItemsView:(id)arg1;
- (BOOL)hasNickname;
- (void)setHasNickname:(BOOL)arg1;
- (BOOL)hasUser;
- (void)setHasUser:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

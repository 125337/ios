@interface MMAuthorizeFriendsViewController : MMUIViewController
{
    unsigned int _fromScene; // +0x68
    NSString * _appName; // +0x70
    NSString * _iconUrl; // +0x78
    OauthScopeInfo * _scopeInfo; // +0x80
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x88
    UIScrollView * _scrollView; // +0x90
    MMWebImageView * _appIconImageView; // +0x98
    MMUILabel * _titleLabel; // +0xa0
    MMUILabel * _scopeLabel; // +0xa8
    UIButton * _comfirmBtn; // +0xb0
    UIButton * _denyBtn; // +0xb8
    MMUILabel * _cloudGameScopeLabel; // +0xc0
    NSString * _cloudGameScopeWording; // +0xc8
}
- (id)initWithAppName:(id)arg1 iconUrl:(id)arg2 scopeInfo:(id)arg3 cloudGameScopeWording:(id)arg4;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)onReturn;
- (BOOL)shouldInteractivePop;
- (void)initSubViews;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)scopeInfo;
- (void)setScopeInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)appIconImageView;
- (void)setAppIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)scopeLabel;
- (void)setScopeLabel:(id)arg1;
- (id)comfirmBtn;
- (void)setComfirmBtn:(id)arg1;
- (id)denyBtn;
- (void)setDenyBtn:(id)arg1;
- (id)cloudGameScopeLabel;
- (void)setCloudGameScopeLabel:(id)arg1;
- (id)cloudGameScopeWording;
- (void)setCloudGameScopeWording:(id)arg1;
- (void).cxx_destruct;
@end


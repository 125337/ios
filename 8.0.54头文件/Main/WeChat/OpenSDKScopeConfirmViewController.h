@interface OpenSDKScopeConfirmViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UILabel * _titleLabel; // +0x68
    UIView * _titleSplitLine; // +0x70
    MMBrandHeadImageView * _appIconImageView; // +0x78
    UILabel * _scopeDescriptionLabel; // +0x80
    UIView * _tableSplitLine; // +0x88
    UITableView * _scopeTableView; // +0x90
    UIView * _buttonSplitLine; // +0x98
    UIView * _buttonVerticalSpliteLine; // +0xa0
    UIButton * _cancelButton; // +0xa8
    UIButton * _confirmButton; // +0xb0
    NSMutableArray * _arrSelect; // +0xb8
    NSString * _confirmRediretUrl; // +0xc0
    int _errCode; // +0xc8
    NSString * _errMsg; // +0xd0
    BOOL _isforcedRotationToPortrait; // +0xd8
    unsigned int _fromScene; // +0xdc
    NSString * _appId; // +0xe0
    NSString * _scope; // +0xe8
    NSString * _state; // +0xf0
    NSString * _bundleId; // +0xf8
    NSString * _appName; // +0x100
    NSString * _iconUrl; // +0x108
    OauthScopeInfo * _scopeInfo; // +0x110
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x118
    NSMutableArray * _scopeInfoList; // +0x120
}
- (id)initWithAppName:(id)arg1 iconUrl:(id)arg2 scopeInfoList:(id)arg3;
- (id)comfirmScopeInfoList;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (id)titleText;
- (void)viewDidLayoutSubviews;
- (unsigned long long)designContentWidth;
- (double)designNoTableContentHeightToContentWidthRatio;
- (double)designTableHeightRatio;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)totalTableHeightWithWidth:(float)arg1;
- (void)onOAuthCancel;
- (void)onClickButtonConfirm:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)isforcedRotationToPortrait;
- (void)setIsforcedRotationToPortrait:(BOOL)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)bundleId;
- (void)setBundleId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)scopeInfo;
- (void)setScopeInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scopeInfoList;
- (void)setScopeInfoList:(id)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end


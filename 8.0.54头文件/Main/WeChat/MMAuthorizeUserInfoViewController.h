@interface MMAuthorizeUserInfoViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMAuthorizeAddAvatarViewControllerDelegate, PBMessageObserverDelegate>
{
    BOOL _isBanModifyAvatar; // +0x68
    BOOL _canAddNewAvatar; // +0x69
    unsigned int _avatarLimit; // +0x6c
    unsigned int _selectedAvatarId; // +0x70
    unsigned int _fromScene; // +0x74
    unsigned int _sessionId; // +0x78
    unsigned int _defaultAvatarId; // +0x7c
    OauthScopeInfo * _scopeInfo; // +0x80
    NSString * _appName; // +0x88
    NSString * _iconUrl; // +0x90
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x98
    NSString * _appId; // +0xa0
    NSMutableArray * _avatarList; // +0xa8
    NSString * _defaultAvatarImgUrl; // +0xb0
    NSString * _defaultAvatarImgFileId; // +0xb8
    NSString * _createAvatarWording; // +0xc0
    NSString * _editAvatarWording; // +0xc8
    NSString * _selectAvatarWording; // +0xd0
    MMTableView * _tableView; // +0xd8
    MMAuthorizeScopeTopView * _tableHeaderView; // +0xe0
    UIView * _tableFooterView; // +0xe8
    UIButton * _comfirmBtn; // +0xf0
    UIButton * _denyBtn; // +0xf8
    MMTipsViewController * _tipsVC; // +0x100
    NSString * _cloudGameScopeWording; // +0x108
}
- (void)dealloc;
- (id)initWithAppName:(id)arg1 appId:(id)arg2 iconUrl:(id)arg3 scopeInfo:(id)arg4 avatarList:(id)arg5 avatarLimit:(unsigned int)arg6 isBanModifyAvatar:(BOOL)arg7 defaultAvatarId:(unsigned int)arg8 cloudGameScopeWording:(id)arg9;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)onReturn;
- (BOOL)shouldInteractivePop;
- (void)initSubViews;
- (void)initTableHeaderView;
- (void)layoutTableHeaderView;
- (void)initTableFooterView;
- (void)layoutTableFooterView;
- (double)tableViewHeight;
- (unsigned int)selectedAvatarId;
- (BOOL)canAddNewAvatar;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)genAddAvatarCell;
- (id)genNoMoreQuotaCell;
- (unsigned int)checkDefaultAvatarId;
- (void)editAvatar:(id)arg1;
- (void)deleteAvatar:(id)arg1;
- (void)modifyAvatar:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleDelAvatarResp:(id)arg1;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (void)onAddAvatarSuccess:(id)arg1;
- (void)onModAvatarSuccess:(id)arg1;
- (void)reloadTableViewAndFooterView;
- (id)scopeInfo;
- (void)setScopeInfo:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)avatarList;
- (void)setAvatarList:(id)arg1;
- (unsigned int)avatarLimit;
- (void)setAvatarLimit:(unsigned int)arg1;
- (BOOL)isBanModifyAvatar;
- (void)setIsBanModifyAvatar:(BOOL)arg1;
- (void)setSelectedAvatarId:(unsigned int)arg1;
- (id)defaultAvatarImgUrl;
- (void)setDefaultAvatarImgUrl:(id)arg1;
- (id)defaultAvatarImgFileId;
- (void)setDefaultAvatarImgFileId:(id)arg1;
- (id)createAvatarWording;
- (void)setCreateAvatarWording:(id)arg1;
- (id)editAvatarWording;
- (void)setEditAvatarWording:(id)arg1;
- (id)selectAvatarWording;
- (void)setSelectAvatarWording:(id)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)comfirmBtn;
- (void)setComfirmBtn:(id)arg1;
- (id)denyBtn;
- (void)setDenyBtn:(id)arg1;
- (id)tipsVC;
- (void)setTipsVC:(id)arg1;
- (unsigned int)defaultAvatarId;
- (void)setDefaultAvatarId:(unsigned int)arg1;
- (void)setCanAddNewAvatar:(BOOL)arg1;
- (id)cloudGameScopeWording;
- (void)setCloudGameScopeWording:(id)arg1;
- (void).cxx_destruct;
@end


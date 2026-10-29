@interface ChatBotSettingViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ICBTMomentExt, IChatBotAvatarUpdateExt>
{
    int _indexSelfChat; // +0x70
    int _indexBiz; // +0x74
    MMHeadImageView * _avatarCellView; // +0x78
    NSMutableArray * _dataPermission; // +0x80
    NSArray * _dataPermissionWording; // +0x88
    ChatBotVoIPAIMemberInfo * _memberInfo; // +0x90
    MMTableView * _tableView; // +0x98
}
- (id)initWithMemberInfo:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldHideNavigationBar;
- (BOOL)useCustomNavibar;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)layoutTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genCellContentView:(id)arg1 withTitle:(id)arg2;
- (void)makeAsstInfoCell:(id)arg1 indexPath:(id)arg2;
- (void)makeDataPermissionCell:(id)arg1 indexPath:(id)arg2;
- (void)makeMomentCell:(id)arg1 indexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)getHeaderTitleWithSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)permissionSwitchValueChanged:(id)arg1;
- (void)momentSwitchValueChanged:(id)arg1;
- (void)close;
- (void)openSelectHeadImagePage;
- (void)fetchData;
- (void)onUpdateAvatar:(id)arg1;
- (void)onMomentTimelineDataTypeUpdate;
- (int)indexSelfChat;
- (void)setIndexSelfChat:(int)arg1;
- (int)indexBiz;
- (void)setIndexBiz:(int)arg1;
- (id)avatarCellView;
- (void)setAvatarCellView:(id)arg1;
- (id)dataPermission;
- (void)setDataPermission:(id)arg1;
- (id)dataPermissionWording;
- (void)setDataPermissionWording:(id)arg1;
- (id)memberInfo;
- (void)setMemberInfo:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMTemplateMsgAuthScopesViewController : ZZFLEXTableViewController <IMMTemplateMsgAuthServiceExt, IStrangerContactMgrExt>
{
    NSMutableArray * _scopeList; // +0x68
    WAContactGetter * _contactGetter; // +0x70
    BOOL _hasFillOriginInfoAndReportEnterEvent; // +0x78
    BOOL _isGlobalRecv; // +0x79
    NSString * _userName; // +0x80
    NSString * _nickName; // +0x88
    BrandTemplateMsgAuthSettingPageModel * _settingPageModel; // +0x90
    unsigned long long _enterScene; // +0x98
}
- (id)initWithEnterScene:(unsigned long long)arg1;
- (id)init;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)tryUpdateKVReportInfo;
- (void)reloadUI;
- (void)onFetchShowInSettingScopeList:(id)arg1 forUser:(id)arg2 hasSettingEntry:(BOOL)arg3;
- (void)onUpdateScopeGlobalRecv:(BOOL)arg1 forUser:(id)arg2;
- (void)getNickNameFromLocalOrServer;
- (void)getWeappContactForUsername:(id)arg1 handler:(id /* block */)arg2;
- (void)onStrangerContactUpdated:(id)arg1;
- (BOOL)isCurrentSceneNeedDataReporter;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (BOOL)isGlobalRecv;
- (void)setIsGlobalRecv:(BOOL)arg1;
- (id)settingPageModel;
- (void)setSettingPageModel:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


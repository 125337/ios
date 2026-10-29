@interface MMTemplateMsgAuthScopesViewController : ZZFLEXTableViewController <IMMTemplateMsgAuthServiceExt, IStrangerContactMgrExt>
{
    NSMutableArray * _scopeList; // +0x70
    BOOL _hasSettingEntry; // +0x78
    WAContactGetter * _contactGetter; // +0x80
    BOOL _hasFillOriginInfoAndReportEnterEvent; // +0x88
    TemplateMsgAuthScopesReportModel * _templateMsgAuthScopesReportModel; // +0x90
    BOOL _isGlobalRecv; // +0x98
    BOOL _isServiceNormalMsgNotify; // +0x99
    BOOL _isHasGlobalSwitchFooter; // +0x9a
    BOOL _isHasB2CAuthList; // +0x9b
    NSString * _userName; // +0xa0
    NSString * _nickName; // +0xa8
    BrandTemplateMsgAuthSettingPageModel * _settingPageModel; // +0xb0
    unsigned long long _enterScene; // +0xb8
}
- (id)initWithEnterScene:(unsigned long long)arg1;
- (id)initWithConfigModel:(id)arg1;
- (id)init;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)tryUpdateKVReportInfo;
- (void)reloadUI;
- (void)onFetchShowInSettingScopeList:(id)arg1 forUser:(id)arg2 hasSettingEntry:(BOOL)arg3;
- (void)onUpdateScopeGlobalRecv:(BOOL)arg1 forUser:(id)arg2;
- (void)onUpdateServiceNormalMsgNotifyStatus:(BOOL)arg1 forUser:(id)arg2;
- (void)getNickNameFromLocalOrServer;
- (void)getWeappContactForUsername:(id)arg1 handler:(id /* block */)arg2;
- (void)onStrangerContactUpdated:(id)arg1;
- (BOOL)isWeAppUserName;
- (BOOL)isCurrentSceneNeedDataReporter;
- (void)fillTemplateMsgAuthScopesReportModelBaseInfo;
- (id)generateReportTemplateItems;
- (void)reportTemplateMsgAuthScopesOpType:(id)arg1 scopeItem:(id)arg2 templateItems:(id)arg3;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (BOOL)isGlobalRecv;
- (void)setIsGlobalRecv:(BOOL)arg1;
- (BOOL)isServiceNormalMsgNotify;
- (void)setIsServiceNormalMsgNotify:(BOOL)arg1;
- (id)settingPageModel;
- (void)setSettingPageModel:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (BOOL)isHasGlobalSwitchFooter;
- (void)setIsHasGlobalSwitchFooter:(BOOL)arg1;
- (BOOL)isHasB2CAuthList;
- (void)setIsHasB2CAuthList:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface SettingPluginsViewController : NewSettingBaseViewController <WCPayGetCollAssitStatusCgiDelegate, contactInfoDelegate, WCActionSheetDelegate>
{
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapCellToCellType; // +0x78
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_uninstallMapCellToCellType; // +0x90
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapSectionType; // +0xa8
    NSMutableArray * m_nameArray; // +0xc0
    NSMutableArray * m_uninstallNameArray; // +0xc8
    WCPayGetCollAssitStatusCgi * _getCollAssistStatusCgi; // +0xd0
    ContactGetPluginSwitchCgi * _getPluginSwitchCgi; // +0xd8
}
- (void)newMessageFromContactInfo:(id)arg1;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)openContactInfoView:(long long)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (void)onSwitchChanged_MMPlugin_QQMail:(id)arg1;
- (void)onSwitchChanged_MMPlugin_Facebook:(id)arg1;
- (void)onSwitchChanged_MMPlugin_Reader:(id)arg1;
- (void)onSwitchChanged_MMPlugin_MassSend:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeSport:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeChatPay:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeChatPayCollAssist:(id)arg1;
- (void)onSwitchChanged_MMPlugin_MinishopAssist:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeChatPayHK:(id)arg1;
- (void)onSwitchChanged_MMPlugin_MerchantAssist:(id)arg1;
- (void)onSwitchChanged_MMPlugin_WeGame:(id)arg1;
- (void)onSwitchChanged_MMPlugin_Count:(id)arg1;
- (void)onSwitchChanged:(id)arg1 rowType:(long long)arg2;
- (void)reportUserClickWithPluginType:(long long)arg1;
- (void)refreshAllData;
- (void)reloadTableData;
- (id)cellWithRowType:(unsigned int)arg1 text:(id)arg2 isInstallSection:(BOOL)arg3;
- (void)initOnePlugin:(long long)arg1;
- (void)initData;
- (void)pluginsChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)checkCollAssistPluginEntryIfNeed;
- (void)checkPluginSwitchEntryIfNeeded;
- (void)onGetCollAssistStatusCgiSucc;
- (id)getCollAssistStatusCgi;
- (void)setGetCollAssistStatusCgi:(id)arg1;
- (id)getPluginSwitchCgi;
- (void)setGetPluginSwitchCgi:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


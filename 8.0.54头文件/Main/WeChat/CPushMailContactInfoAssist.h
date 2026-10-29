@interface CPushMailContactInfoAssist : PluginContactInfoAssist <XMailBindMailControlLogicDelegate, PBMessageObserverDelegate>
{
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> m_mapPushMailCellToCellType; // +0x68
    XMailBindMailControlLogic * _bindMailControlLogic; // +0x80
}
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (BOOL)isShowOpenPushMailBtn;
- (void)reloadPushMailTableView;
- (void)doSwitchPushMail:(id)arg1;
- (void)onSwitchViewOn;
- (void)onSwitchViewOff;
- (id)getPluginIntro;
- (id)getLoadingText;
- (void)installPlugin;
- (void)doUninstall;
- (void)clearPluginData;
- (void)onWrite;
- (void)startBind;
- (void)makeAccountDescCell:(id)arg1 cellInfo:(id)arg2;
- (id)getAccountRebindDescView;
- (void)reloadInstalledTableViewData;
- (void)onMuteChange:(id)arg1;
- (void)onSessionTopStateChange:(id)arg1;
- (void)showInputPwdAlert:(BOOL)arg1;
- (id)getPushMailErrorTitle;
- (void)handleSwitchPushMailOk:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)onXMailBindMailControlLogicSuccess:(id)arg1 mailAddr:(id)arg2;
- (void)onXMailBindMailControlLogicCanceled:(id)arg1;
- (id)bindMailControlLogic;
- (void)setBindMailControlLogic:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


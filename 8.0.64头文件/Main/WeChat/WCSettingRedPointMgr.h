@interface WCSettingRedPointMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    RedPointCtrlInfo * _ctrlInfo; // +0x8
    NSArray * _validRedPointPathArray; // +0x10
}
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)loadData;
- (void)clearAllData;
- (BOOL)shouldShowRedPointInMoreTab;
- (BOOL)shouldShowRedPointInSetting;
- (BOOL)shouldShowRedPointInPrivacy;
- (BOOL)shouldShowRedPointInRecentOption;
- (BOOL)shouldShowRedPointInGeneralCell;
- (BOOL)shouldShowRedPointInPluginCell;
- (BOOL)shouldShowRedPointInPluginItem:(id)arg1;
- (BOOL)trySetSeqWhenShowMoreView;
- (BOOL)trySetSeqWhenShowSettingView;
- (BOOL)trySetSeqWhenShowPrivacyView;
- (BOOL)trySetSeqWhenShowRecentOptionView;
- (BOOL)trySetSeqWhenShowGeneralView;
- (BOOL)trySetSeqWhenShowPluginView;
- (BOOL)trySetSeqWhenShowPluginProfileInfo:(id)arg1;
- (void)delCtrlInfo;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)parseRedPointCtrlMsg:(id)arg1;
- (BOOL)canPluginReceiveRedPoint:(id)arg1;
- (void).cxx_destruct;
@end

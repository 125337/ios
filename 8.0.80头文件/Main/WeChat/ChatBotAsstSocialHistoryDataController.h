@interface ChatBotAsstSocialHistoryDataController : NSObject <UITableViewDelegate, UITableViewDataSource, IContactMgrExt, IStrangerContactMgrExt, IChatBotVoIPSessionDelegate>
{
    BOOL _isAppeared; // +0x8
    MMTableView * _tableView; // +0x10
    id <ChatBotAsstSocialHistoryOptionalDelegate> _optionalDelegate; // +0x18
    id <ChatBotAsstSocialHistoryVCDelegate> _vcDelegate; // +0x20
    ChatBotVoIPSession * _voipSession; // +0x28
    NSMutableArray * _talkingRoomList; // +0x30
    NSMutableArray * _historyList; // +0x38
    NSMutableArray * _nowHistorySessionList; // +0x40
    NSMutableSet * _localSessionSet; // +0x48
    NSMutableArray * _dataSource; // +0x50
}
- (id)init;
- (void)setVoipSession:(id)arg1;
- (unsigned int)getActiveSocialRoomCount;
- (void)loadCacheData;
- (void)updateAllData;
- (void)updateDataWithListType:(unsigned int)arg1;
- (void)calculateSessionCount:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)reloadData;
- (id)getFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onUpdateStrangerContactWithUsername:(id)arg1;
- (void)onUpdateContact:(id)arg1;
- (void)historyViewTableWillLoad;
- (void)historyViewWillPopOrDismiss;
- (void)historyViewWillBePushOrPresent;
- (void)onNewContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onAddNewStrangerContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onSocialHistoryUpdateWithInfo:(id)arg1;
- (id)tableView;
- (id)optionalDelegate;
- (void)setOptionalDelegate:(id)arg1;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (id)voipSession;
- (id)talkingRoomList;
- (void)setTalkingRoomList:(id)arg1;
- (id)historyList;
- (void)setHistoryList:(id)arg1;
- (id)nowHistorySessionList;
- (void)setNowHistorySessionList:(id)arg1;
- (id)localSessionSet;
- (void)setLocalSessionSet:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)isAppeared;
- (void)setIsAppeared:(BOOL)arg1;
- (void).cxx_destruct;
@end

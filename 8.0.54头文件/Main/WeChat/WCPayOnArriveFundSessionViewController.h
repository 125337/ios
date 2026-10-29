@interface WCPayOnArriveFundSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IGroupMgrExt, IMMNewSessionMgrExt>
{
    MMTableView * m_tableView; // +0x68
    NSMutableArray * m_arrSessionInfo; // +0x70
    NSMutableArray * m_arrChatName; // +0x78
    NSString * m_confirmingSessionName; // +0x80
}
- (id)initWithWithChatName:(id)arg1;
- (void)viewDidLoad;
- (void)sortSession;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateSessionInfo;
- (void)initTableView;
- (void)initNavigationBar;
- (void)onBackBtnDone:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)deleteSessionOnIndexPath:(id)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)OnQuitGroup:(id)arg1;
- (id)m_arrSessionInfo;
- (void)setM_arrSessionInfo:(id)arg1;
- (id)m_arrChatName;
- (void)setM_arrChatName:(id)arg1;
- (id)m_confirmingSessionName;
- (void)setM_confirmingSessionName:(id)arg1;
- (void).cxx_destruct;
@end


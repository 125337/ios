@interface MMChatBackgroundSettingViewController : MMUIViewController <ChatBackgroundExt, ChatBackgroundViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x68
    long long m_columnCount; // +0x70
    NSMutableArray * m_itemViews; // +0x78
    NSString * m_username; // +0x80
    NSMutableArray * m_allItems; // +0x88
    BOOL isSettingChanged; // +0x90
    ChatBackgroundView * currentSelectView; // +0x98
    BOOL _bFromSetting; // +0xa0
    id <MMChatBackgroundSettingViewControllerDelegate> _delegate; // +0xa8
}
- (void)addItemView:(id)arg1;
- (id)init;
- (id)getAllItems;
- (long long)getRowCount;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)OnCancel;
- (void)OnDone;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onChatBackgroundDownloadFinishedForUser:(id)arg1 withCID:(id)arg2;
- (void)onChatBackgroundViewClick:(id)arg1;
- (void)onListStatusChange;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_itemViews;
- (void)setM_itemViews:(id)arg1;
- (id)m_username;
- (void)setM_username:(id)arg1;
- (id)m_allItems;
- (void)setM_allItems:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bFromSetting;
- (void)setBFromSetting:(BOOL)arg1;
- (void).cxx_destruct;
@end


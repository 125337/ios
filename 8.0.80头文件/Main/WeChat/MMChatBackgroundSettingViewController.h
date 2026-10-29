@interface MMChatBackgroundSettingViewController : MMUIViewController <ChatBackgroundExt, ChatBackgroundViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x70
    long long m_columnCount; // +0x78
    NSMutableArray * m_itemViews; // +0x80
    NSString * m_username; // +0x88
    NSMutableArray * m_allItems; // +0x90
    BOOL isSettingChanged; // +0x98
    ChatBackgroundView * currentSelectView; // +0xa0
    CGSize m_itemSize; // +0xa8
    double m_layoutScale; // +0xb8
    BOOL m_hasGridLayout; // +0xc0
    BOOL _bFromSetting; // +0xc1
    id <MMChatBackgroundSettingViewControllerDelegate> _delegate; // +0xc8
}
- (void)addItemView:(id)arg1;
- (id)init;
- (id)getAllItems;
- (long long)getRowCount;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (CGRect)itemFrameForColumn:(long long)arg1;
- (void)layoutVisibleItemViews;
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

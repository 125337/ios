@interface ChatRoomMemMsgListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, MMRefreshTableFooterDelegate, ChatRoomMemMsgDataLogicDelegate>
{
    MMTableView * m_tableView; // +0x68
    WCTimeLineFooterView * m_footerView; // +0x70
    NSMutableArray * m_arrMsg; // +0x78
    NSMutableDictionary * m_dicMsgView; // +0x80
    ChatRoomMemMsgDataLogic * m_logic; // +0x88
    BOOL m_bHasMoreItems; // +0x90
    NSString * m_nsChatName; // +0x98
    CContact * m_oMemContact; // +0xa0
    BOOL m_bLoading; // +0xa8
}
- (id)initWithChat:(id)arg1 memContact:(id)arg2;
- (void)updateTableFooterHeaderView;
- (void)onBackButtonClicked:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)getViewFor:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onChatRoomMemMsgDataDone:(id)arg1 End:(BOOL)arg2;
- (void)getMoreData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void).cxx_destruct;
@end


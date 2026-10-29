@interface WCCardMsgCenterViewController : MMUIViewController <IWCShareCardPkgExt, WCNewShareCardConsumedViewDelegate, UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, WCActionSheetDelegate, MMWebImageViewDelegate, WCCardMsgViewDelegate>
{
    NSMutableArray * _msgList; // +0x68
    NSMutableDictionary * _cellHeightDic; // +0x70
    UIScrollView * _emptyView; // +0x78
    MMTableView * _tableView; // +0x80
    MMUIButton * _footerView; // +0x88
    MMUIActivityIndicatorView * _activityView; // +0x90
    MMUILabel * _loadLabel; // +0x98
    unsigned int _curMinUpdateTime; // +0xa0
    NSString * _lastShareCardConsumedMsgCardID; // +0xa8
    WCNewShareCardConsumedView * _newConsumendView; // +0xb0
    BOOL _bForNewMsg; // +0xb8
}
- (id)init;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)updateTableFooterHasMore:(BOOL)arg1;
- (void)initEmptyView;
- (void)genNormalCell:(id)arg1 IndexPath:(id)arg2;
- (void)sortMsgList;
- (void)hideEmptyView;
- (void)reloadTableView;
- (void)initData;
- (void)safeAddMsgList:(id)arg1;
- (BOOL)isAddedMsg:(id)arg1;
- (void)onFooterClicked;
- (void)onLoadMore;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onOperate;
- (void)onClearAllMsg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onAcceptCard:(id)arg1;
- (void)onJumpUrl:(id)arg1;
- (void)onShareCardAfterConsumed:(BOOL)arg1;
- (id)msgList;
- (void)setMsgList:(id)arg1;
- (BOOL)bForNewMsg;
- (void)setBForNewMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end


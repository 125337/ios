@interface MultiQuitChatRoomViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BatchQuitChatRoomLogicDelegate>
{
    BOOL _batchQuitRunning; // +0x70
    BOOL _searchDataChanged; // +0x71
    NSDictionary * _dicSearchMatchTips; // +0x78
    NSString * _searchText; // +0x80
    id <MultiQuitChatRoomViewControllerDelegate> _delegate; // +0x88
    NSMutableArray * _contacts; // +0x90
    NSMutableDictionary * _selectedContacts; // +0x98
    MMTableView * _tableView; // +0xa0
    MMUIView * _bottomToolView; // +0xa8
    MMUIButton * _quitButton; // +0xb0
    MMUILabel * _emptyLabel; // +0xb8
    BatchQuitChatRoomLogic * _batchQuitLogic; // +0xc0
}
- (id)initWithContacts:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initTableView;
- (void)initBottomToolView;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)isSelectionDisabledForContact:(id)arg1;
- (void)showSelectionLimitHint;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onViewChatRoomButton:(id)arg1;
- (BOOL)onViewChatRoomAccessibilityAction:(id)arg1;
- (void)openChatRoomIfAllowed:(id)arg1;
- (void)onQuitButtonTapped;
- (id)selectedContactsInDisplayOrder;
- (void)startBatchQuitWithContacts:(id)arg1 clearHistory:(BOOL)arg2;
- (void)batchQuitChatRoomLogic:(id)arg1 didSucceedRoom:(id)arg2;
- (void)batchQuitChatRoomLogic:(id)arg1 didFailRoom:(id)arg2 errorMessage:(id)arg3;
- (void)batchQuitChatRoomLogic:(id)arg1 didCompleteWithSuccessRooms:(id)arg2 failures:(id)arg3 errorMessage:(id)arg4 isNetworkError:(BOOL)arg5;
- (void)showBatchResultWithSuccessCount:(unsigned long long)arg1 failures:(id)arg2 errorMessage:(id)arg3 isNetworkError:(BOOL)arg4;
- (void)updateQuitButton;
- (void)updateContentState;
- (void)showBatchRunningHint;
- (void)notifySearchDataChangedIfNeeded;
- (void)onClose;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (id)dicSearchMatchTips;
- (void)setDicSearchMatchTips:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomToolView;
- (void)setBottomToolView:(id)arg1;
- (id)quitButton;
- (void)setQuitButton:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)batchQuitLogic;
- (void)setBatchQuitLogic:(id)arg1;
- (BOOL)batchQuitRunning;
- (void)setBatchQuitRunning:(BOOL)arg1;
- (BOOL)searchDataChanged;
- (void)setSearchDataChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end

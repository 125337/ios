@interface ChatRoomToolWeAppSelectViewController : MMUIViewController <MMRefreshTableFooterDelegate>
{
    unsigned long long m_selectedExistWeAppCount; // +0x68
    id <ChatRoomToolWeAppSelectViewControllerDelegate> _m_delegate; // +0x70
    MMTableView * _tableView; // +0x78
    MMUILabel * _emptyLabel; // +0x80
    WCTimeLineFooterView * _loadingView; // +0x88
    NSMutableDictionary * _cellViewCache; // +0x90
    NSMutableArray * _selectedInSideWeAppList; // +0x98
    CContact * _chatRoomContact; // +0xa0
    NSMutableArray * _weAppList; // +0xa8
    NSArray * _selectedExistWeAppList; // +0xb0
    MMToolManageTableViewLogic * _toolManageTableViewLogic; // +0xb8
}
- (id)initWithChatRoomContact:(id)arg1 andSelectedExistWeAppList:(id)arg2 andWeAppList:(id)arg3;
- (void)viewDidLoad;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)initData;
- (void)initNavigationBar;
- (void)initView;
- (void)initEmptyView;
- (id)genTableHeaderView;
- (void)onCancel;
- (void)onExitConfirm;
- (void)onDone;
- (void)reloadTableWithWeAppList:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)cellViewCache;
- (void)setCellViewCache:(id)arg1;
- (id)selectedInSideWeAppList;
- (void)setSelectedInSideWeAppList:(id)arg1;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (id)weAppList;
- (void)setWeAppList:(id)arg1;
- (id)selectedExistWeAppList;
- (void)setSelectedExistWeAppList:(id)arg1;
- (id)toolManageTableViewLogic;
- (void)setToolManageTableViewLogic:(id)arg1;
- (void).cxx_destruct;
@end


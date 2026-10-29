@interface SelectContactFromChatRoomSelectListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray * m_arrFilteredContacts; // +0x70
    NSMutableDictionary * _dicMatchTip; // +0x78
    unsigned int m_canSelectContactCount; // +0x80
    BOOL _isAllSelected; // +0x84
    MMTableView * m_tableView; // +0x88
    OrderedDictionary * m_dicMultiSelect; // +0x90
    NSDictionary * m_dicExistContact; // +0x98
    NSMutableArray * _arrAllContact; // +0xa0
    id <SelectContactFromChatRoomSelectListViewControllerDelegate> _m_delegate; // +0xa8
    MMPageSheetAdapter * _pageSheetAdapter; // +0xb0
    MMUIButton * _completeButton; // +0xb8
    MMUIButton * _selectAllButton; // +0xc0
    UIView * _bottomBar; // +0xc8
}
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initData;
- (void)initTitleArea;
- (void)initTableView;
- (void)initBottomBar;
- (void)initView;
- (double)getTableViewHeight;
- (double)getCellHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)isExisted:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (void)updateBottomCompleteButton;
- (void)onTapSelectAllButton;
- (void)updateSelectAllButtonIcon;
- (void)onFinishMultiSelect;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)arrAllContact;
- (void)setArrAllContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id)completeButton;
- (void)setCompleteButton:(id)arg1;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (BOOL)isAllSelected;
- (void)setIsAllSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

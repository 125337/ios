@interface MultiDeleteContactsViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ContactBatchModifyLogicDelegate, ContactInfoViewControllerDelegate>
{
    unsigned long long _type; // +0x70
    NSDictionary * _dicSearchMatchTips; // +0x78
    NSString * _searchText; // +0x80
    id <MultiDeleteContactsViewControllerDelegate> _delegate; // +0x88
    NSMutableArray * _arrContacts; // +0x90
    MMTableView * _tableView; // +0x98
    MMUIView * _bottomToolView; // +0xa0
    MMUIButton * _deleteButton; // +0xa8
    NSMutableDictionary * _dicSelectedContacts; // +0xb0
    ContactBatchModifyLogic * _contactBatchModifyLogic; // +0xb8
    CContact * _viewInfoContact; // +0xc0
}
+ (void)reportMultiDeleteContactsWithAction:(unsigned long long)arg1 query:(id)arg2;
+ (void)reportMultiDeleteContactsWithAction:(unsigned long long)arg1 actionInfo:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 arrContacts:(id)arg2;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initBottomToolView;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onViewContact:(id)arg1;
- (void)onViewContactBtn:(id)arg1;
- (BOOL)onViewContactAccessibilityCustomAction:(id)arg1;
- (void)onRemoveContact;
- (void)switchSelectionOfContact:(id)arg1 contact:(id)arg2;
- (void)updateDeleteButtonStatus;
- (void)onDeleteButtonTapped;
- (void)deleteSelectedContacts;
- (void)OnContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(BOOL)arg4;
- (void)onDeleteFaildWithErrMsg:(id)arg1;
- (void)onDeleteFaildWithErrMsgTitle:(id)arg1 errMsgContent:(id)arg2;
- (void)onClose;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)reportMultiDeleteContactsWithAction:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)dicSearchMatchTips;
- (void)setDicSearchMatchTips:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)arrContacts;
- (void)setArrContacts:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomToolView;
- (void)setBottomToolView:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)dicSelectedContacts;
- (void)setDicSelectedContacts:(id)arg1;
- (id)contactBatchModifyLogic;
- (void)setContactBatchModifyLogic:(id)arg1;
- (id)viewInfoContact;
- (void)setViewInfoContact:(id)arg1;
- (void).cxx_destruct;
@end

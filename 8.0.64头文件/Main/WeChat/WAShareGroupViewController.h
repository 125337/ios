@interface WAShareGroupViewController : MMUIViewController <WCCreateNewGroupDemoViewControllerDelegate, WCFacadeExt, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray * m_arrAllLabelName; // +0x70
    MMTableView * m_tableView; // +0x78
    BOOL m_bShowDetail; // +0x80
    WCCreateNewGroupDemoViewController * newGroup; // +0x88
    NSMutableSet * m_contactSetImportFromGroup; // +0x90
    NSMutableSet * m_contactSetNotImportFromGroup; // +0x98
    unsigned int _createTagEventId; // +0xa0
    id <WAShareGroupViewControllerDelegate> m_delegate; // +0xa8
    NSString * m_title; // +0xb0
    long long m_privacy; // +0xb8
    NSArray * m_cells; // +0xc0
    NSMutableSet * m_labelNameSet; // +0xc8
    NSArray * m_contactList; // +0xd0
    NSString * _createTagName; // +0xd8
}
- (id)init;
- (id)initWithCells:(id)arg1 title:(id)arg2;
- (id)initWithCells:(id)arg1 title:(id)arg2 privacy:(long long)arg3 labelNameList:(id)arg4 contactList:(id)arg5;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)initData;
- (void)initView;
- (void)reloadAllTableView;
- (void)onWCGroupUpdated;
- (void)willShow;
- (id)loadAllTagNameList;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (int)getCellType:(id)arg1;
- (BOOL)isSelected:(int)arg1 postPrivacy:(long long)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onDataChange;
- (void)onReturn;
- (void)onDone;
- (void)editContactLabels;
- (void)selectContacts;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)onSaveTag;
- (void)onSkipSavingTag;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)onAllTagNameUpdate;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)handleCreateToSetContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)handleCreateContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_title;
- (void)setM_title:(id)arg1;
- (long long)m_privacy;
- (void)setM_privacy:(long long)arg1;
- (id)m_cells;
- (void)setM_cells:(id)arg1;
- (id)m_labelNameSet;
- (void)setM_labelNameSet:(id)arg1;
- (id)m_contactList;
- (void)setM_contactList:(id)arg1;
- (unsigned int)createTagEventId;
- (void)setCreateTagEventId:(unsigned int)arg1;
- (id)createTagName;
- (void)setCreateTagName:(id)arg1;
- (void).cxx_destruct;
@end

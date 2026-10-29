@interface OpenIMContactSelectView : UIView <ContactsDataLogicDelegate, UITableViewDelegate, UITableViewDataSource>
{
    ContactsDataLogic * m_contactsDataLogic; // +0x8
    NSMutableArray * m_sectionKeyArray; // +0x10
    NSDictionary * m_allOpenIMContactsDic; // +0x18
    NSString * m_weWorkOpenImAcctType; // +0x20
    BOOL m_bMultiSelect; // +0x28
    id <OpenIMContactSelectViewDelegate> m_delegate; // +0x30
    NSDictionary * m_dicExistContact; // +0x38
    NSMutableDictionary * m_dicMultiSelect; // +0x40
    MMTableView * m_tableView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)initView;
- (void)initTableView;
- (void)dealloc;
- (unsigned long long)getTotalSelectCount;
- (void)removeSelect:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (id)getCellImage:(id)arg1;
- (void)addSelect:(id)arg1;
- (BOOL)updateMultiSelect:(id)arg1;
- (void)updateMultiSelectView;
- (void)reloadTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 multiSelect:(BOOL)arg3;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)getTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (id)getDicSelectedContacts;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (BOOL)m_bMultiSelect;
- (void)setM_bMultiSelect:(BOOL)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (void).cxx_destruct;
@end

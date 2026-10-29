@interface WCRedEnvelopesMultiSelectContactsViewController : WCRedEnvelopesBaseViewController <SelectTagContactsViewControllerDelegate, WCSearchDelegate, WCDataSearchDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, NewContactsSearchPanelViewDelegate, GroupSelectContactsViewControllerDelegate, ContactsDataLogicDelegate>
{
    id <WCRedEnvelopesMultiSelectContactsViewControllerDelegate> m_delegate; // +0x88
    MMTableView * m_tableView; // +0x90
    NSDictionary * m_dicExistContact; // +0x98
    NSDictionary * m_dicIgnoreContact; // +0xa0
    BOOL m_bShowHistoryGroup; // +0xa8
    BOOL m_bShowRadarCreateRoom; // +0xa9
    BOOL m_bDidBack; // +0xaa
    NSMutableDictionary * m_dicMultiSelect; // +0xb0
    NSIndexPath * m_indexPathToBeDeleted; // +0xb8
    NewContactsSearchPanelView * m_panelView; // +0xc0
    UIButton * m_panelBtn; // +0xc8
    UIBarButtonItem * m_panelBtnItem; // +0xd0
    NSMutableArray * m_selectIndexPaths; // +0xd8
    ContactsDataLogic * m_contactsDataLogic; // +0xe0
    unsigned int m_uiGroupScene; // +0xe8
    NSArray * m_arrTagContacts; // +0xf0
    NSString * m_nsTagName; // +0xf8
    unsigned long long m_memberCountLimit; // +0x100
    UIView * _tableFooterView; // +0x108
    NSString * nsCurrentSearchText; // +0x110
    BOOL _m_bShowAllTags; // +0x118
    unsigned int m_uiMaxCountSelect; // +0x11c
}
- (id)init;
- (void)removeSelect:(id)arg1;
- (void)UpdateForChatGroup:(id)arg1;
- (void)onGroupSelectContactReturn:(id)arg1;
- (BOOL)isIgnore:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (id)getCellImage:(id)arg1;
- (void)addSelect:(id)arg1;
- (void)updatePanelBtn;
- (void)updatePanelView:(id)arg1;
- (BOOL)updateMultiSelect:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (void)onCancel:(id)arg1;
- (void)onDone:(id)arg1;
- (void)initData;
- (void)initTitleArea;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)showAlertForOverMax;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeRadarCreateRoomCell:(id)arg1;
- (void)makeHistoryGroupCell:(id)arg1;
- (void)makeTagCell:(id)arg1 row:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)handleSelectHistoryGroup;
- (void)handleSelectRadarCreateRoom;
- (unsigned long long)getTotalSelectCount;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (unsigned long long)getSectionIndexOfTag;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)searchTextFieldDidBeginEditing;
- (void)setDelegate:(id)arg1;
- (void)onSelectDoneWithContacts:(id)arg1;
- (void)setM_uiMaxCountSelect:(unsigned int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_dicIgnoreContact;
- (void)setM_dicIgnoreContact:(id)arg1;
- (BOOL)m_bShowHistoryGroup;
- (void)setM_bShowHistoryGroup:(BOOL)arg1;
- (BOOL)m_bShowRadarCreateRoom;
- (void)setM_bShowRadarCreateRoom:(BOOL)arg1;
- (unsigned int)m_uiGroupScene;
- (void)setM_uiGroupScene:(unsigned int)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)m_panelBtn;
- (void)setM_panelBtn:(id)arg1;
- (id)m_panelBtnItem;
- (void)setM_panelBtnItem:(id)arg1;
- (unsigned long long)m_memberCountLimit;
- (void)setM_memberCountLimit:(unsigned long long)arg1;
- (unsigned int)m_uiMaxCountSelect;
- (BOOL)m_bShowAllTags;
- (void)setM_bShowAllTags:(BOOL)arg1;
- (void).cxx_destruct;
@end


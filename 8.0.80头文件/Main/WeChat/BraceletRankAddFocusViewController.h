@interface BraceletRankAddFocusViewController : MMUIViewController <SelectTagContactsViewControllerDelegate, IDeviceRankAddFocusMgrExt, IDeviceRankProfileMgrExt, UITableViewDelegate, UITableViewDataSource, WCSearchDelegate, WCDataSearchDelegate, WCActionSheetDelegate, NewContactsSearchPanelViewDelegate, ContactsDataLogicDelegate>
{
    id <BraceletRankAddFocusViewControllerDelegate> m_delegate; // +0x70
    MMTableView * m_tableView; // +0x78
    NSDictionary * m_dicExistContact; // +0x80
    NSDictionary * m_dicIgnoreContact; // +0x88
    NSMutableDictionary * m_dicMultiSelect; // +0x90
    NSIndexPath * m_indexPathToBeDeleted; // +0x98
    NewContactsSearchPanelView * m_panelView; // +0xa0
    UIButton * m_panelBtn; // +0xa8
    UIBarButtonItem * m_panelBtnItem; // +0xb0
    NSMutableArray * m_selectIndexPaths; // +0xb8
    ContactsDataLogic * m_contactsDataLogic; // +0xc0
    unsigned int m_uiGroupScene; // +0xc8
    NSArray * m_arrTagContacts; // +0xd0
    NSString * m_nsTagName; // +0xd8
    unsigned long long m_memberCountLimit; // +0xe0
    UIView * _tableFooterView; // +0xe8
    NSString * nsCurrentSearchText; // +0xf0
    NSMutableArray * m_recentLikeUsers; // +0xf8
    NSMutableArray * m_followes; // +0x100
    NSMutableArray * m_followedArr; // +0x108
    NSMutableArray * m_toFollow; // +0x110
    NSMutableArray * m_keyArray; // +0x118
    BOOL _m_bShowAllTags; // +0x120
}
- (id)init;
- (void)removeSelect:(id)arg1;
- (void)UpdateForChatGroup:(id)arg1;
- (void)onGroupSelectContactReturn:(id)arg1;
- (BOOL)isIgnore:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (BOOL)isSelected:(id)arg1;
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
- (void)updateSelectedHeadImgView;
- (void)viewDidLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(BOOL)arg3;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeRadarCreateRoomCell:(id)arg1;
- (void)makeTagCell:(id)arg1 row:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (unsigned long long)getTotalSelectCount;
- (void)reloadTableView;
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
- (id)makeFiterContactToTagSearchView:(id)arg1;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)searchTextFieldDidBeginEditing;
- (void)onSelectDoneWithContacts:(id)arg1;
- (void)onGotWeRunFollowerList:(id)arg1 followers:(id)arg2 errCode:(int)arg3;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)failedToFollow;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_dicIgnoreContact;
- (void)setM_dicIgnoreContact:(id)arg1;
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
- (BOOL)m_bShowAllTags;
- (void)setM_bShowAllTags:(BOOL)arg1;
- (void).cxx_destruct;
@end

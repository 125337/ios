@interface GroupSelectContactsViewController : MMUIViewController <WCSearchDelegate, WCDataSearchDelegate, UITableViewDelegate, UITableViewDataSource, ContactsDataLogicDelegate>
{
    id <GroupSelectContactsViewControllerDelegate> m_delegate; // +0x70
    MMTableView * m_tableView; // +0x78
    ContactsDataLogic * m_contactsDataLogic; // +0x80
    BOOL m_bShowSearchBar; // +0x88
    unsigned int m_uiDataScene; // +0x8c
    NSMutableDictionary * m_dicMultiSelect; // +0x90
    NSDictionary * m_dicExistContact; // +0x98
    WCDataSearcher * _searcher; // +0xa0
    double m_CurrentScreenWidth; // +0xa8
    BOOL _isInPageSheetMode; // +0xb0
    NSString * _m_viewControllerTitle; // +0xb8
    NSString * _m_rightBarButtonTitle; // +0xc0
    NSNumber * _m_leftBarButtonStyle; // +0xc8
}
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewY;
- (double)getVisibleHeight;
- (void)onCancelBackInPageSheetMode:(id)arg1;
- (void)onDoneInPageSheetMode;
- (id)init;
- (void)onCancelBack:(id)arg1;
- (void)initData;
- (void)onDone;
- (void)actionDone;
- (void)initTitleArea;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (void)updateRightBarBtn;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (BOOL)isSeachActive;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)isSelected:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (void)selectContact:(id)arg1;
- (id)getCellImage:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)getAllGroup;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bShowSearchBar;
- (void)setM_bShowSearchBar:(BOOL)arg1;
- (unsigned int)m_uiDataScene;
- (void)setM_uiDataScene:(unsigned int)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)m_viewControllerTitle;
- (void)setM_viewControllerTitle:(id)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (id)m_rightBarButtonTitle;
- (void)setM_rightBarButtonTitle:(id)arg1;
- (id)m_leftBarButtonStyle;
- (void)setM_leftBarButtonStyle:(id)arg1;
- (void).cxx_destruct;
@end

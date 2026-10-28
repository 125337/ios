@interface ContactTagListViewController : MMUIViewController <IContactLabelMgrExt, MMTableViewMultipleReorderDelegate, MMTableViewMultipleReorderDataSource, ContactTagNewDetailViewControllerDelegate, ContactTagListBottomBarDelegate, WCActionSheetDelegate, ContactTagSearchPanelDelegate, WCDataSearchDelegate, WCSearchDelegate, ContactTagCreateTagHalfScreenViewControllerDelegate, ContactTagNoTagContactsDetailViewControllerDelegate>
{
    ContactTagCreateTagHalfScreenViewController * m_tagHalfScreenviewController; // +0x70
    BOOL _needReload; // +0x78
    BOOL _isEditing; // +0x79
    BOOL _isMultipleReordering; // +0x7a
    unsigned int _m_uiFromScene; // +0x7c
    UILabel * _noContactTagTipLabel; // +0x80
    ContactTagListBottomBar * _bottomBar; // +0x88
    MMTableView * _tableView; // +0x90
    NSMutableArray * _arrContactTagData; // +0x98
    NSArray * _previousTagData; // +0xa0
    UIBarButtonItem * _backButtonItem; // +0xa8
    NSMutableSet * _selectedTags; // +0xb0
    NSMutableArray * _selectedIndexPaths; // +0xb8
    ContactTagSearchPanel * _searchPanel; // +0xc0
    UIView * _searchPanelView; // +0xc8
    NSArray * _tagsToDelete; // +0xd0
    WCDataSearcher * _searcher; // +0xd8
    MMTableViewMultipleReorder * _tableViewMultipleReorder; // +0xe0
    NSArray * _recentMoveToIndexPaths; // +0xe8
    UIButton * _addButton; // +0xf0
    double _cellHeightWithDetailLine; // +0xf8
    double _cellHeightWithOutDetailLine; // +0x100
    NSArray * _noTagMembers; // +0x108
}
- (id)init;
- (void)viewDidLoad;
- (void)initNavigation;
- (void)initBottomBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)showNavigationBarSepLine;
- (void)reloadDataAndView;
- (void)reloadDataAndViewWithIsKeepOrder:(BOOL)arg1;
- (void)ResetViews;
- (id)getMemberDesc:(id)arg1;
- (id)getNoTagMembers;
- (void)updateNoTagMembers;
- (void)UpdateViewForNoContactTag;
- (void)onEditContactLabel:(id)arg1;
- (void)onShowNoTagMembers;
- (void)makeNewContactTag:(id)arg1;
- (void)OnNewContactTagCreateTagWithTagId:(unsigned int)arg1 result:(BOOL)arg2 isRename:(BOOL)arg3;
- (void)updateHadSelectTagInEdit;
- (BOOL)shouldInteractivePop;
- (BOOL)checkNoTagSectionWithSection:(long long)arg1;
- (id)getContactTagNoTagMembers:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeContactItemCellContent:(id)arg1 withTagData:(id)arg2;
- (void)makeContactItemCellContent:(id)arg1 withTagData:(id)arg2 searchText:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onUpdateLabelOrder:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)reloadContactTagListView;
- (void)onTagDetailDismissedWithAddContactLabel;
- (void)startEdit;
- (BOOL)hasReordered;
- (void)endEdit;
- (void)saveEditAndQuit;
- (void)quitEditMode;
- (void)updateSelectedCount;
- (BOOL)isSelected:(id)arg1;
- (BOOL)selectTag:(id)arg1;
- (BOOL)deselectTag:(id)arg1;
- (BOOL)selectTags:(id)arg1;
- (BOOL)deselectTags:(id)arg1;
- (BOOL)switchSelectionOfTags:(id)arg1 select:(BOOL)arg2;
- (BOOL)selectTag:(id)arg1 indexPath:(id)arg2;
- (BOOL)deselectTag:(id)arg1 indexPath:(id)arg2;
- (BOOL)switchSelectionOfTag:(id)arg1 indexPath:(id)arg2 select:(BOOL)arg3;
- (long long)getCreatTagLimit;
- (long long)getSelectTagLimit;
- (id)getAllTags;
- (id)getCurrentSelectedTagsName;
- (void)contactTagSearchPanelDidSelectTag:(id)arg1;
- (void)contactTagSearchPanelDidSelectTags:(id)arg1;
- (void)contactTagSearchPanelDidDismissSearch:(id)arg1;
- (void)onContactTagListBottomBarCreateTag;
- (void)onContactTagListBottomBarEditTags;
- (void)onContactTagListBottomBarMoveTo;
- (void)onContactTagListBottomBarDelete;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelMultipleReorder;
- (id)tableView:(id)arg1 cellSnapshotImageForIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowsAtIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)tableViewWillEndMultipleReorder:(id)arg1;
- (void)tableViewWillBeginMultipleReorder:(id)arg1;
- (void)tableViewDidBeginMultipleReorder:(id)arg1;
- (void)tableViewDidEndMultipleReorder:(id)arg1;
- (void)tableViewDidCancelMultipleReorder:(id)arg1;
- (void)quitMultipleReorderMode;
- (double)tableViewEstimatedRowHeightForMultipleReorder:(id)arg1;
- (void)doFlashAnimationForCells:(id)arg1 completion:(id /* block */)arg2;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (id)attributedTextForTagName:(id)arg1 searchText:(id)arg2;
- (BOOL)accessibilityPerformEscape;
- (id)tableView:(id)arg1 multipleReorderAccessibilityLabelForRowAtIndexPath:(id)arg2;
- (void)registerYReportSdk;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (id)noContactTagTipLabel;
- (void)setNoContactTagTipLabel:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)needReload;
- (void)setNeedReload:(BOOL)arg1;
- (id)arrContactTagData;
- (void)setArrContactTagData:(id)arg1;
- (id)previousTagData;
- (void)setPreviousTagData:(id)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (id)backButtonItem;
- (void)setBackButtonItem:(id)arg1;
- (id)selectedTags;
- (void)setSelectedTags:(id)arg1;
- (id)selectedIndexPaths;
- (void)setSelectedIndexPaths:(id)arg1;
- (id)searchPanel;
- (void)setSearchPanel:(id)arg1;
- (id)searchPanelView;
- (void)setSearchPanelView:(id)arg1;
- (id)tagsToDelete;
- (void)setTagsToDelete:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)tableViewMultipleReorder;
- (void)setTableViewMultipleReorder:(id)arg1;
- (BOOL)isMultipleReordering;
- (void)setIsMultipleReordering:(BOOL)arg1;
- (id)recentMoveToIndexPaths;
- (void)setRecentMoveToIndexPaths:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (double)cellHeightWithDetailLine;
- (void)setCellHeightWithDetailLine:(double)arg1;
- (double)cellHeightWithOutDetailLine;
- (void)setCellHeightWithOutDetailLine:(double)arg1;
- (id)noTagMembers;
- (void)setNoTagMembers:(id)arg1;
- (void).cxx_destruct;
@end

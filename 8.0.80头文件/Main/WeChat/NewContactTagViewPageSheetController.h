@interface NewContactTagViewPageSheetController : NewContactTagViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, NewContactTagTableViewDelegate, ContactTagCreateTagHalfScreenViewControllerDelegate, MMPageSheetAdapterDelegate>
{
    MMUIButton * m_sectionManageButton; // +0xd0
    BOOL m_needReloadTableView; // +0xd8
    NSArray * _arrExistSelectRecommTagName; // +0xe0
    NSArray * _arrSelectedTagName; // +0xe8
    NSString * _nsUserName; // +0xf0
    NSString * _pageSheetViewTitle; // +0xf8
    NSDictionary * _reportDic; // +0x100
    id <NewContactTagViewPageSheetControllerDelegate> _tagViewPageSheetDelegate; // +0x108
    MMTableView * _pageSheetTableView; // +0x110
    WCSearchBar * _searcherBar; // +0x118
    NewContactTagTableView * _recentlyUsedTagTableView; // +0x120
    NewContactTagTableView * _allTagTableView; // +0x128
    NewContactTagTableView * _searchTagTableView; // +0x130
    MMTableView * _searchResultTableView; // +0x138
    NSMutableArray * _arrSearchResult; // +0x140
    NSArray * _arrRecentlyUsedTag; // +0x148
    NSMutableArray * _arrAllTag; // +0x150
    NSMutableArray * _arrAllTagFromCache; // +0x158
    UIView * _allTagSectionHeaderView; // +0x160
    NSMutableArray * _arrExposureTagItem; // +0x168
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)initPageModeData;
- (void)resetPageModeData;
- (void)initPageModeView;
- (void)initTableView;
- (void)initSearchBar;
- (void)initSectionManageButton;
- (void)initRecentlyUsedTagTableView;
- (void)initTagTableView;
- (void)initSearchTagTableView;
- (id)genTagTableView;
- (void)initSearchResultTableView;
- (void)initAllTagSectionHeadView;
- (void)updateAllTags:(id)arg1 tagTableView:(id)arg2;
- (void)setAllTagTableViewHighLight:(BOOL)arg1 tagName:(id)arg2;
- (void)reloadAllTags;
- (void)updateCurrentTags:(id)arg1;
- (void)didUpdateCurrentTags:(id)arg1;
- (void)handleCreateTag:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)doSearchAction:(id)arg1;
- (id)genSearchTagNoResultViewForKeyword:(id)arg1 width:(double)arg2;
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (void)pageSheetWillClose:(id)arg1 closeType:(long long)arg2;
- (void)resetMakeSureButtonenabled;
- (void)handleShowSearchResultTableView:(BOOL)arg1;
- (unsigned int)getRecentlyUsedSectionValueCount;
- (id)getArrRecommendSectionValue;
- (long long)sortContactTagComptrWithTagItem:(id)arg1 tagItemOther:(id)arg2;
- (double)getVisibleHeight;
- (double)getContentViewY;
- (void)DismissTagViewControllerAnimated:(BOOL)arg1;
- (void)OnCancel;
- (void)onEditDone;
- (void)onDoneInPageSheetMode:(id)arg1;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)jumpToTagListViewController;
- (void)triggerCreateTagButton;
- (void)onCreateNewTagToTagTableView:(id)arg1;
- (void)onEditTags;
- (void)onTagHighLight:(id)arg1;
- (void)onTagUnHighLight:(id)arg1;
- (void)onAddButtonFromTagTableView:(id)arg1;
- (void)onDeleteButtonFromTagTableView:(id)arg1;
- (void)onAddButtonFromTagEditView:(id)arg1;
- (void)onDeleteButtonFromTagEditView:(id)arg1;
- (void)didTagButtonWillDisplayWithTagId:(unsigned int)arg1 tagName:(id)arg2 tagTableView:(id)arg3;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)arg1 tagName:(id)arg2 isSelected:(BOOL)arg3 tagTableView:(id)arg4;
- (void)OnDismissTagViewcontrollerAnimated;
- (void)OnNewContactTagCreateTagWithTagId:(unsigned int)arg1 result:(BOOL)arg2 isRename:(BOOL)arg3;
- (void)setupReportData;
- (void)reportClickListTagItem:(unsigned int)arg1 isSelected:(BOOL)arg2;
- (void)reportClickTagSearchInput;
- (void)reportExposureFriendsCreateTab;
- (long long)getContactListTagTypeWithTagTableView:(id)arg1;
- (id)getReportDictionary;
- (void)onDidClickCreateTagButton;
- (void)reportNewRemarkViewPageSheetUnexp:(unsigned int)arg1;
- (id)arrExistSelectRecommTagName;
- (void)setArrExistSelectRecommTagName:(id)arg1;
- (id)arrSelectedTagName;
- (void)setArrSelectedTagName:(id)arg1;
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (id)pageSheetViewTitle;
- (void)setPageSheetViewTitle:(id)arg1;
- (id)reportDic;
- (void)setReportDic:(id)arg1;
- (id)tagViewPageSheetDelegate;
- (void)setTagViewPageSheetDelegate:(id)arg1;
- (id)pageSheetTableView;
- (void)setPageSheetTableView:(id)arg1;
- (id)searcherBar;
- (void)setSearcherBar:(id)arg1;
- (id)recentlyUsedTagTableView;
- (void)setRecentlyUsedTagTableView:(id)arg1;
- (id)allTagTableView;
- (void)setAllTagTableView:(id)arg1;
- (id)searchTagTableView;
- (void)setSearchTagTableView:(id)arg1;
- (id)searchResultTableView;
- (void)setSearchResultTableView:(id)arg1;
- (id)arrSearchResult;
- (void)setArrSearchResult:(id)arg1;
- (id)arrRecentlyUsedTag;
- (void)setArrRecentlyUsedTag:(id)arg1;
- (id)arrAllTag;
- (void)setArrAllTag:(id)arg1;
- (id)arrAllTagFromCache;
- (void)setArrAllTagFromCache:(id)arg1;
- (id)allTagSectionHeaderView;
- (void)setAllTagSectionHeaderView:(id)arg1;
- (id)arrExposureTagItem;
- (void)setArrExposureTagItem:(id)arg1;
- (void).cxx_destruct;
@end

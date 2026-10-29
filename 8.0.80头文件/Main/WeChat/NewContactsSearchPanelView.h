@interface NewContactsSearchPanelView : MMUIView <FavTagEditViewDelegate, MMTableViewDelegate, MMTableViewIndexViewDelegate, UITableViewDataSource, UITextFieldDelegate, UIScrollViewDelegate, MyUIScrollViewDelegate, GeneralContactsSearchPanelSearchingResultProtocol, UITableViewDelegate>
{
    NSMutableArray * m_arrKeys; // +0x8
    NSMutableArray * m_arrImages; // +0x10
    unsigned int m_uiImageSize; // +0x18
    unsigned int m_uiCellSize; // +0x1c
    unsigned int m_uiLeftMargin; // +0x20
    unsigned int m_uiRightMargin; // +0x24
    unsigned int m_uiCenterIconViewLeft; // +0x28
    BOOL m_bShouldDeleteOnClick; // +0x2c
    UIImageView * m_emptyView; // +0x30
    BOOL m_showEmptyView; // +0x38
    id <NewContactsSearchPanelViewDelegate> m_delegate; // +0x40
    MyUIScrollView * m_scrollView; // +0x48
    long long uiMaxShowHeadViewCount; // +0x50
    BOOL isEmbedSearchTextField; // +0x58
    BOOL isShowAllTags; // +0x59
    UIImageView * m_searchIconView; // +0x60
    UITextField * m_SearchTextField; // +0x68
    UILabel * m_placeholderLabel; // +0x70
    UIView * m_ContentView; // +0x78
    double m_atContentViewYPos; // +0x80
    UIView * m_bottomSeperatorLine; // +0x88
    MMTableView * m_tableView; // +0x90
    MMUIView * m_tagView; // +0x98
    UIScrollView * m_tagScrollView; // +0xa0
    FavTagTableView * m_favTagView; // +0xa8
    NSMutableArray * m_arrFilteredObject; // +0xb0
    NSArray * m_arrContactTags; // +0xb8
    BOOL bIsAddedBlurEffect; // +0xc0
    NSString * nsCurrentSelectTagName; // +0xc8
    NSMutableArray * m_arrSearchTagFilteredObject; // +0xd0
    NSMutableDictionary * m_dicContactsOfTagName; // +0xd8
    NSMutableArray * m_arrSectionKeys; // +0xe0
    NSMutableDictionary * m_dicSectionTitles; // +0xe8
    NSMutableDictionary * m_dicSectionResults; // +0xf0
    unsigned int m_expandBitSet; // +0xf8
    UIView * m_gradientView; // +0x100
    CAGradientLayer * m_leftGradientLayer; // +0x108
    CAGradientLayer * m_rightGradientLayer; // +0x110
    unsigned int m_blurEffect; // +0x118
    BOOL m_bTextFieldClearAction; // +0x11c
    BOOL m_bClickDeleteKeyInput; // +0x11d
    double m_lastLayoutWidth; // +0x120
    BOOL m_usesWidthBasedSearchTextFieldLayout; // +0x128
    BOOL _bShouldFilterSearchResults; // +0x129
    BOOL _bDisplaySectionResults; // +0x12a
    BOOL _bSelectingAnimation; // +0x12b
    BOOL _bDragToDismissKeyboard; // +0x12c
    BOOL _bSelectWithoutResetQuery; // +0x12d
    BOOL _bSelectImageRound; // +0x12e
    BOOL _bCenterAlignment; // +0x12f
    BOOL _usesSearchBarLayout; // +0x130
    BOOL _bNeedBottomSeperatorLine; // +0x131
    BOOL _bShowClearButton; // +0x132
    BOOL _bTagViewNeedAddBlur; // +0x133
    BOOL _bDeleteLastNotHiddeKeyInput; // +0x134
    BOOL _bAlwaysShowSearchTable; // +0x135
    MyUIScrollView * m_ScrollView; // +0x138
    UIImageView * m_SearchIconView; // +0x140
    UIColor * _m_gradientColor; // +0x148
    WCColorProxy * _colorProxy; // +0x150
    WCSTokenPickLogic * _tokenPickLogic; // +0x158
    UIColor * _moreCellImageColor; // +0x160
}
- (id)initWithFrame:(CGRect)arg1 andContentView:(id)arg2 atContentViewYPos:(double)arg3 andCellSize:(double)arg4 andMaxShowCount:(long long)arg5;
- (id)initWithFrame:(CGRect)arg1 andContentView:(id)arg2 atContentViewYPos:(double)arg3 andCellSize:(double)arg4 andMaxShowCount:(long long)arg5 colorProxy:(id)arg6;
- (id)initWithFrame:(CGRect)arg1 andContentView:(id)arg2 atContentViewYPos:(double)arg3 andCellSize:(double)arg4 andMaxShowCount:(long long)arg5 colorProxy:(id)arg6 centerAlignment:(BOOL)arg7;
- (void)setFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setBDragToDismissKeyboard:(BOOL)arg1;
- (void)updateBottomSeperatorLine;
- (void)dealloc;
- (void)setContentView:(id)arg1 atContentViewYPos:(double)arg2;
- (CGRect)searchTextFieldFrameWithSearchIconHidden:(BOOL)arg1;
- (void)updateSearchTextFieldLayoutForCurrentSelection;
- (void)layoutSubviews;
- (id)colorProxy;
- (id)getScrollView;
- (long long)numberofRowsInSection:(long long)arg1;
- (id)getObjectFor:(unsigned long long)arg1;
- (id)getObjectForIndexPath:(id)arg1;
- (unsigned int)getObjectRow:(id)arg1;
- (void)setFilteredObjects:(id)arg1;
- (unsigned long long)getObjectCount;
- (void)addFilteredObject:(id)arg1;
- (void)clearFilteredObjects;
- (void)tryFilterSearchResult;
- (id)getFilteredObjects;
- (id)getMatchTipFor:(id)arg1;
- (void)SetIsEmbedSearchTextField:(BOOL)arg1;
- (id)SetImageForKey:(id)arg1 animated:(BOOL)arg2;
- (void)RemoveImageForKey:(id)arg1;
- (void)recoverSearchBarView;
- (void)clearAll;
- (void)setTableViewHidden:(BOOL)arg1;
- (void)clearSearchInAlwaysShowSearchTable;
- (void)setTableViewHeaderView:(id)arg1;
- (BOOL)isSearchResultShowing;
- (void)reloadTableView;
- (void)updateMultiSelectView;
- (void)updateContactTagView;
- (void)setHideContactTagViews:(BOOL)arg1;
- (void)updateBlurView;
- (void)SetIsShowAllTags:(BOOL)arg1;
- (id)addImage:(id)arg1 animated:(BOOL)arg2;
- (void)deleteImage:(unsigned int)arg1;
- (void)SetLastHeadViewHighlight:(BOOL)arg1;
- (BOOL)isLastHeadViewHighlight;
- (void)ShowSearchIcon;
- (void)HideSearchIcon;
- (void)doSearch:(id)arg1;
- (void)cancelSearch;
- (void)onTouchesEnded:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)recoverTextAttribute;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)triggerTextFieldChanged;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged:(id)arg1;
- (id)getSearchText;
- (void)setSearchText:(id)arg1;
- (id)getSelectedKeys;
- (id)getSelectedImages;
- (void)makeViewOfInvisibleStatus;
- (BOOL)checkSearchTextFieldIsEmptyInput;
- (void)onTagHighLight:(id)arg1;
- (void)onTouchEndBlankView;
- (void)onSelectSearchedContact:(BOOL)arg1;
- (void)selectWithoutResetQuery;
- (void)mmTableView:(id)arg1 dragTriggerNotifyWithOffset:(double)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getSearchResultTable;
- (id)getSearchContactTagsView;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)setFilterdSectionKeys:(id)arg1;
- (void)setSectionTitleMaps:(id)arg1;
- (void)setFilterdSectionResults:(id)arg1;
- (void)prepareRefreshing;
- (void)prepareRefreshingAnimated:(BOOL)arg1;
- (BOOL)isMoreCellAtIndexPath:(id)arg1;
- (BOOL)isCollapseAtSection:(long long)arg1;
- (id)getMoreCellDescriptionAtSection:(long long)arg1;
- (id)getMoreCellImageAtSection:(long long)arg1;
- (id)getSectionKeyAtSection:(long long)arg1;
- (void)clickMoreCellAtIndexPath:(id)arg1;
- (unsigned long long)getMoreCellStatusAtSection:(long long)arg1;
- (BOOL)shouldCollaseOrExpandSearchResultAtIndex:(long long)arg1;
- (void)setExpandStatus:(BOOL)arg1 forSection:(long long)arg2;
- (BOOL)isExpandingForSection:(long long)arg1;
- (BOOL)isJumpable:(id)arg1;
- (void)idkeyWithResultClick:(BOOL)arg1 withCollapse:(BOOL)arg2;
- (void)handleResultTokenPick:(id)arg1;
- (void)onSelectContact:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)isMultiSelectContactSection:(long long)arg1;
- (BOOL)hasSelectedRecommendContact;
- (void)tryDeselectOtherContactForIndexPath:(id)arg1;
- (void)onDeselectContact:(id)arg1 forIndexPath:(id)arg2;
- (void)updateDefaultQuery;
- (void)pickDataSelected:(id)arg1 indexPath:(id)arg2;
- (void)pickDataDeSelected:(id)arg1 indexPath:(id)arg2;
- (void)asyncRecommend;
- (void)refreshPickDataRecommendSection:(long long)arg1 added:(BOOL)arg2 deleted:(BOOL)arg3;
- (void)removeTokenSelectedContact:(id)arg1;
- (void)removePickDataForUsername:(id)arg1;
- (void)tryReorderContactAtSection:(long long)arg1;
- (void)resetLoadTokenPicTableView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBlurEffect;
- (void)setSeperatorLineColor:(id)arg1;
- (void)setImageSize:(double)arg1;
- (double)getImageSize;
- (id)getSearchIconView;
- (id)getPlaceholderLabel;
- (void)resetPlaceholderLayout;
- (void)resetSearchIconLayout;
- (void)resetSearchTextFieldLayout;
- (void)updateGradientLayer;
- (id)getGradientColor;
- (void)removePickDataStillSelectForUsername:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)isEmbedSearchTextField;
- (id)m_ScrollView;
- (void)setM_ScrollView:(id)arg1;
- (id)m_SearchIconView;
- (void)setM_SearchIconView:(id)arg1;
- (id)m_SearchTextField;
- (void)setM_SearchTextField:(id)arg1;
- (BOOL)isShowAllTags;
- (BOOL)bShouldFilterSearchResults;
- (void)setBShouldFilterSearchResults:(BOOL)arg1;
- (BOOL)bDisplaySectionResults;
- (void)setBDisplaySectionResults:(BOOL)arg1;
- (BOOL)bSelectingAnimation;
- (void)setBSelectingAnimation:(BOOL)arg1;
- (BOOL)bDragToDismissKeyboard;
- (BOOL)bSelectWithoutResetQuery;
- (void)setBSelectWithoutResetQuery:(BOOL)arg1;
- (BOOL)bSelectImageRound;
- (void)setBSelectImageRound:(BOOL)arg1;
- (BOOL)bCenterAlignment;
- (void)setBCenterAlignment:(BOOL)arg1;
- (BOOL)usesSearchBarLayout;
- (void)setUsesSearchBarLayout:(BOOL)arg1;
- (BOOL)bNeedBottomSeperatorLine;
- (void)setBNeedBottomSeperatorLine:(BOOL)arg1;
- (BOOL)bShowClearButton;
- (void)setBShowClearButton:(BOOL)arg1;
- (id)m_gradientColor;
- (void)setM_gradientColor:(id)arg1;
- (BOOL)bTagViewNeedAddBlur;
- (void)setBTagViewNeedAddBlur:(BOOL)arg1;
- (void)setColorProxy:(id)arg1;
- (id)tokenPickLogic;
- (void)setTokenPickLogic:(id)arg1;
- (id)moreCellImageColor;
- (void)setMoreCellImageColor:(id)arg1;
- (BOOL)bDeleteLastNotHiddeKeyInput;
- (void)setBDeleteLastNotHiddeKeyInput:(BOOL)arg1;
- (BOOL)bAlwaysShowSearchTable;
- (void)setBAlwaysShowSearchTable:(BOOL)arg1;
- (void).cxx_destruct;
@end

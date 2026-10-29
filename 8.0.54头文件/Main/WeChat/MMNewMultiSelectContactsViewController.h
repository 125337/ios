@interface MMNewMultiSelectContactsViewController : MMUIViewController <MMNewMultiSelectContactsLogicDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, MMNewMultiSelectContactsViewControllerDelegate, MMMultiSelectedContactDisplayViewDelegate>
{
    BOOL _isSearching; // +0x68
    BOOL _isAllowMultiSelect; // +0x69
    BOOL _isShowSelectResult; // +0x6a
    BOOL _m_hasReachLimit; // +0x6b
    unsigned int _m_clickCount; // +0x6c
    id <MMNewMultiSelectContactsViewControllerDelegate> _delegate; // +0x70
    NSString * _m_rightButtonTitle; // +0x78
    MMUIView * _headerContainerView; // +0x80
    MMMultiSelectedContactDisplayView * _selectedDisplayView; // +0x88
    MMUIView * _searchBar; // +0x90
    UITextField * _searchTextField; // +0x98
    MMUIView * _searchHintBkgView; // +0xa0
    UIImageView * _searchIconImgView; // +0xa8
    MMUILabel * _searchBarHintLabel; // +0xb0
    UIButton * _searchCancelBtn; // +0xb8
    MMTableView * _displayTableView; // +0xc0
    UIImage * _backgroundImage; // +0xc8
    unsigned long long _dataMode; // +0xd0
    NSString * _limitTipsContent; // +0xd8
    MMNewMultiSelectContactsLogicController * _logicController; // +0xe0
    MultiTalkJumpAppInfo * _jumpAppInfo; // +0xe8
}
- (id)initWithAllFriendContacts;
- (id)initWithChatRoomContact:(id)arg1;
- (void)commonInit;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)adjustSubviewRects;
- (void)makeBackgroundBlurView;
- (void)initView;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractiveDismiss;
- (void)setAllowMultiSelect:(BOOL)arg1;
- (void)setNeedShowSelectResultView:(BOOL)arg1;
- (void)setExistContactArray:(id)arg1;
- (void)setMultiSelectLimitCount:(unsigned long long)arg1 andShowTips:(id)arg2;
- (void)setBackGroundImage:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)isJumpAppCellForSection:(long long)arg1;
- (void)onGetContactSearchResult:(id)arg1;
- (void)onHandleCotnactTableViewSelected:(id)arg1 atIndexPath:(id)arg2 isSelected:(BOOL)arg3;
- (void)onResultTableViewNeedReload;
- (void)onSelectCountOutOfLimit;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onSelectedContactDisplayViewDelete:(id)arg1;
- (BOOL)isContactCanBeRemove:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)onCloseBarButtonPress:(id)arg1;
- (void)onFinishBarButtonPress:(id)arg1;
- (void)onTextFieldTextChange;
- (void)cancelSearch:(id)arg1;
- (void)searchFieldResignFirstResponder;
- (BOOL)isNeedShowSection;
- (void)addExistContact2DisplayView;
- (void)showLimitTipsView;
- (void)updateRightBarButtonItemTitle;
- (void)updateRightBarButtonItemEnable;
- (void)setTitleBar;
- (void)setLeftBarButtonItem;
- (void)setRightBarButtonItem;
- (id)headerContainerView;
- (id)selectedDisplayView;
- (id)searchBar;
- (id)displayTableView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_rightButtonTitle;
- (void)setM_rightButtonTitle:(id)arg1;
- (void)setHeaderContainerView:(id)arg1;
- (void)setSelectedDisplayView:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)searchTextField;
- (void)setSearchTextField:(id)arg1;
- (id)searchHintBkgView;
- (void)setSearchHintBkgView:(id)arg1;
- (id)searchIconImgView;
- (void)setSearchIconImgView:(id)arg1;
- (id)searchBarHintLabel;
- (void)setSearchBarHintLabel:(id)arg1;
- (id)searchCancelBtn;
- (void)setSearchCancelBtn:(id)arg1;
- (void)setDisplayTableView:(id)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (BOOL)isAllowMultiSelect;
- (void)setIsAllowMultiSelect:(BOOL)arg1;
- (BOOL)isShowSelectResult;
- (void)setIsShowSelectResult:(BOOL)arg1;
- (unsigned long long)dataMode;
- (void)setDataMode:(unsigned long long)arg1;
- (id)limitTipsContent;
- (void)setLimitTipsContent:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (BOOL)m_hasReachLimit;
- (void)setM_hasReachLimit:(BOOL)arg1;
- (unsigned int)m_clickCount;
- (void)setM_clickCount:(unsigned int)arg1;
- (id)jumpAppInfo;
- (void)setJumpAppInfo:(id)arg1;
- (void).cxx_destruct;
@end


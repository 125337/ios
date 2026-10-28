@interface MultiSelectChatRoomHalfScreenViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    MMUIView * m_contentView; // +0x70
    MMTableView * m_tableView; // +0x78
    MMUISearchBar * m_searchBar; // +0x80
    UIView * m_lineView; // +0x88
    UIView * m_searchBarContainer; // +0x90
    BOOL m_isInSearchState; // +0x98
    NSMutableArray * m_arrFilterdFriends; // +0xa0
    NSMutableDictionary * m_dicMatchTips; // +0xa8
    MMUIButton * m_leftCloseButton; // +0xb0
    MMUIButton * m_rightMakeSureButton; // +0xb8
    NSArray * m_arrAllContact; // +0xc0
    NSMutableOrderedSet * m_setCanSelectContact; // +0xc8
    NSString * m_tipWord; // +0xd0
    NSString * m_choiseSessionWord; // +0xd8
    NSString * m_chatroomSessionWord; // +0xe0
    NSString * m_rightButtonWord; // +0xe8
    NSString * m_rightButtonLightColor; // +0xf0
    NSString * m_rightButtonDarkColor; // +0xf8
    NSArray * m_selectedUserNameList; // +0x100
    unsigned int m_selectMaxCount; // +0x108
    NSString * m_countExceedTipWord; // +0x110
    BOOL m_forceLightMode; // +0x118
    BOOL m_canSelectOpenIM; // +0x119
    OrderedDictionary * m_dicMultiSelect; // +0x120
    NSDictionary * m_dicExistContact; // +0x128
    NSMutableDictionary * m_dicMultiSelectIndex; // +0x130
    id <MultiSelectChatRoomHalfScreenViewControllerDelegate> _m_delegate; // +0x138
    ContactsDataLogic * _m_contactsDataLogic; // +0x140
}
- (id)initWithTipWord:(id)arg1 choiseSessionWord:(id)arg2 chatroomSessionWord:(id)arg3 rightButtonWord:(id)arg4 rightButtonLightColor:(id)arg5 rightButtonDarkColor:(id)arg6 selectedUserNameList:(id)arg7 selectMaxCount:(unsigned int)arg8 countExceedTipWord:(id)arg9 forceLightMode:(BOOL)arg10 canSelectOpenIM:(BOOL)arg11;
- (void)viewDidLoad;
- (void)initData;
- (long long)overrideUserInterfaceStyle;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutSearchField;
- (id)getSearchBarTextField;
- (void)layoutTableView;
- (void)layoutTopView;
- (BOOL)isMultiSelectSessionNumberOfRowsInSection:(long long)arg1;
- (BOOL)isContactSessionNumberOfRowsInSection:(long long)arg1;
- (id)getContactsDataLogic;
- (id)getContactWithIndexPath:(id)arg1;
- (BOOL)isExisted:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (id)getRightMakeSureColor;
- (void)onClickLeftCloseButton;
- (void)onClickMakeSureButton;
- (void)updateRightMakeSureButton;
- (void)didSelectContact:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)makeSectionHeaderViewWithText:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSearchBarColor;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_dicMultiSelectIndex;
- (void)setM_dicMultiSelectIndex:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_contactsDataLogic;
- (void)setM_contactsDataLogic:(id)arg1;
- (void).cxx_destruct;
@end

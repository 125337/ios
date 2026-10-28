@interface ilinkMultiSelectContactsViewController : RoomContactSelectViewController <MultiSelectContactsViewControllerDelegate>
{
    BOOL m_needToFixPanelViewLayout; // +0x118
    BOOL _doNotShowContactsSelect; // +0x119
    id <ilinkMultiSelectContactsViewControllerDelegate> _ilinkVCDelegate; // +0x120
    long long _groupNum; // +0x128
    MultiTalkJumpAppInfo * _jumpAppInfo; // +0x130
    UIView * _headerView; // +0x138
    MMUILabel * _contactTitle; // +0x140
    NSMutableDictionary * _m_dicMultiSelect; // +0x148
}
- (id)init;
- (void)viewDidLoad;
- (void)initViewByIlinkStyle;
- (void)onAddMemberPageForIlink;
- (void)changeSearchBarLayoutToAdding;
- (void)addSelectedOutsideChatRoomContact:(id)arg1;
- (void)deleteSelectedOutsideChatRoomContact:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onDidSelectNormalContact:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)searchTextFieldShouldBeginEditing;
- (void)recoverSearchBar;
- (id)ilinkVCDelegate;
- (void)setIlinkVCDelegate:(id)arg1;
- (long long)groupNum;
- (void)setGroupNum:(long long)arg1;
- (BOOL)doNotShowContactsSelect;
- (void)setDoNotShowContactsSelect:(BOOL)arg1;
- (id)jumpAppInfo;
- (void)setJumpAppInfo:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)contactTitle;
- (void)setContactTitle:(id)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (void).cxx_destruct;
@end

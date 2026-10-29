@interface ilinkMultiSelectContactsViewController : RoomContactSelectViewController <MultiSelectContactsViewControllerDelegate, VoIPRecentInviteScrollViewDelegate, VoIPMultiSelectContactsViewControllerSelectionDelegate, VoIPInviteSelectPageExitDelegate>
{
    BOOL _showRecentInvite; // +0x120
    id <ilinkMultiSelectContactsViewControllerDelegate> _ilinkVCDelegate; // +0x128
    long long _groupNum; // +0x130
    unsigned long long _invitePageExitReason; // +0x138
    VoIPRecentInviteScrollView * _recentInviteScrollView; // +0x140
    MultiTalkJumpAppInfo * _jumpAppInfo; // +0x148
    UITableViewHeaderFooterView * _headerView; // +0x150
    MMUILabel * _contactTitle; // +0x158
    NSMutableDictionary * _m_dicMultiSelect; // +0x160
    UIView * _headerViewSeparatorView; // +0x168
    UIColor * _selectViewBackgroundColor; // +0x170
}
- (void)addSelectedOutsideChatRoomContact:(id)arg1;
- (void)deleteSelectedOutsideChatRoomContact:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (Class)getNewContactsSearchPanelViewClass;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (void)initViewByIlinkStyle;
- (void)searchTextFieldDidBeginEditing;
- (void)doSearch:(id)arg1;
- (void)cancelSearch;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)onInviteSelectContact:(id)arg1 fromSource:(long long)arg2;
- (void)onInviteSelectPageDidPopWithExitReason:(unsigned long long)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)getUITableViewStyle;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setupRecentInviteScrollView;
- (void)makeRecentInviteCell:(id)arg1;
- (void)recentInviteScrollView:(id)arg1 didSelectContact:(id)arg2;
- (void)recentInviteScrollViewNeedsRelayout:(id)arg1;
- (void)updateRecentInviteSelectionForUserName:(id)arg1 selected:(BOOL)arg2;
- (void)setupTableFooterView;
- (void)resetSearchPanelAndTableViewLayout;
- (void)makeBackgroundView;
- (void)onAddMemberPageForIlink;
- (id)ilinkVCDelegate;
- (void)setIlinkVCDelegate:(id)arg1;
- (long long)groupNum;
- (void)setGroupNum:(long long)arg1;
- (BOOL)showRecentInvite;
- (void)setShowRecentInvite:(BOOL)arg1;
- (unsigned long long)invitePageExitReason;
- (void)setInvitePageExitReason:(unsigned long long)arg1;
- (id)recentInviteScrollView;
- (void)setRecentInviteScrollView:(id)arg1;
- (id)jumpAppInfo;
- (void)setJumpAppInfo:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)contactTitle;
- (void)setContactTitle:(id)arg1;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)headerViewSeparatorView;
- (void)setHeaderViewSeparatorView:(id)arg1;
- (id)selectViewBackgroundColor;
- (void)setSelectViewBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end

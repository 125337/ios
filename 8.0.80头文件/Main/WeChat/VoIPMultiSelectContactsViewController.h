@interface VoIPMultiSelectContactsViewController : MultiSelectContactsViewController
{
    BOOL _showRecentInvite; // +0xe8
    BOOL _isShowingTag; // +0xe9
    id <VoIPMultiSelectContactsViewControllerSelectionDelegate><VoIPInviteSelectPageExitDelegate> _inviteDelegate; // +0xf0
    UIImage * _m_backgroundImage; // +0xf8
    unsigned long long _invitePageExitReason; // +0x100
}
- (void)viewDidLoad;
- (id)loadNewSearchPanelViewWithFrame:(CGRect)arg1 andContentView:(id)arg2 andAtContentViewYPos:(double)arg3 andCellSize:(double)arg4 andMaxShowCount:(double)arg5 andColorProxy:(id)arg6;
- (long long)maxCountSearchPanelShow;
- (id)getSearchResultHeaderView;
- (void)viewDidLayoutSubviews;
- (void)alignSearchResultTableWithHeaderView;
- (id)navigationBarBackgroundColor;
- (Class)getContactSelectViewClass;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)onShowSearchContactTagViews;
- (void)onHideSearchContactTagViews;
- (void)makeBackgroundView;
- (void)alignPanelViewToNewSearchBarView;
- (void)onCancel:(id)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)actionDone;
- (void)onSelectContact:(id)arg1;
- (void)onSelectRecentInviteContact:(id)arg1;
- (void)onExistContactDidSelected:(id)arg1;
- (BOOL)showRecentInvite;
- (void)setShowRecentInvite:(BOOL)arg1;
- (id)inviteDelegate;
- (void)setInviteDelegate:(id)arg1;
- (id)m_backgroundImage;
- (void)setM_backgroundImage:(id)arg1;
- (BOOL)isShowingTag;
- (void)setIsShowingTag:(BOOL)arg1;
- (unsigned long long)invitePageExitReason;
- (void)setInvitePageExitReason:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

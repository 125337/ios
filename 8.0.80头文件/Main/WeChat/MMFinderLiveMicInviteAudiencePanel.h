@interface MMFinderLiveMicInviteAudiencePanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveMicInviteAudienceViewModelDelegate, MMFinderLiveConnectedMicUserCellViewDelegate>
{
    BOOL _showLoading; // +0x8
    BOOL _isMicInviteShareToChatAvailable; // +0x9
    BOOL _hasReportedMicInviteExpose; // +0xa
    id <MMFinderLiveMicInviteAudiencePanelDelegate> _actionDelegate; // +0x10
    unsigned long long _micIndex; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMFinderLiveMicInviteAudienceViewModel * _viewModel; // +0x28
    MMTableView * _tableView; // +0x30
    MMUIActivityIndicatorView * _loadingView; // +0x38
    UILabel * _noUserLabel; // +0x40
    UIButton * _inviteFriendsButton; // +0x48
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (id)liveTask;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configPageSheetAndDetailView;
- (void)layoutTableView;
- (void)layoutLoadingView;
- (BOOL)isInviteFriendsButtonVisible;
- (void)layoutEmptyStateViews;
- (void)onTapInviteFriendsButton;
- (void)updateViewsHidden;
- (void)configPanelBeforeShowing;
- (void)showWithAnimated:(BOOL)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)updateListWithInvitedMicAudienceDict:(id)arg1 waitConnectAudienceSet:(id)arg2 removedAudienceSet:(id)arg3;
- (void)updateViewAndReloadTableView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onMMFinderLiveMicInviteAudienceViewModelUserListUpdated;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (unsigned long long)micIndex;
- (void)setMicIndex:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)noUserLabel;
- (void)setNoUserLabel:(id)arg1;
- (id)inviteFriendsButton;
- (void)setInviteFriendsButton:(id)arg1;
- (BOOL)showLoading;
- (void)setShowLoading:(BOOL)arg1;
- (BOOL)isMicInviteShareToChatAvailable;
- (void)setIsMicInviteShareToChatAvailable:(BOOL)arg1;
- (BOOL)hasReportedMicInviteExpose;
- (void)setHasReportedMicInviteExpose:(BOOL)arg1;
- (void).cxx_destruct;
@end

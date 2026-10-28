@interface MMFinderLiveConnectMicPkPanelMasterView : UIView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicPkPanelCellDelegate, MMFinderLiveConnectedMicUserCellViewDelegate, MMFinderLiveMicInviteAudienceViewModelDelegate>
{
    BOOL _canShowInviteAudienceSection; // +0x8
    MMFinderLiveConnectMicPkPanelModel * _model; // +0x10
    id <MMFinderLiveConnectMicPkPanelMasterViewDelegate> _delegate; // +0x18
    MMTableView * _tableView; // +0x20
    UITableViewDiffableDataSource * _diffableDataSource; // +0x28
    NSMutableArray * _sections; // +0x30
    UIView * _headerView; // +0x38
    UILabel * _pkModeLabel; // +0x40
    UILabel * _pkStateLabel; // +0x48
    MMUIButton * _leftActionButton; // +0x50
    MMUIButton * _rightActionButton; // +0x58
    unsigned long long _leftActionType; // +0x60
    unsigned long long _rightActionType; // +0x68
    MMFinderLiveTaskId * _taskId; // +0x70
    MMFinderLiveMicInviteAudienceViewModel * _inviteAudienceViewModel; // +0x78
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)initViews;
- (void)applyDiffSnapshot:(BOOL)arg1;
- (void)updateWithModel:(id)arg1 animated:(BOOL)arg2;
- (void)rebuildDataSourceAndReloadAnimated:(BOOL)arg1;
- (void)tryUpdateCanBeInvitedAudienceList;
- (void)updateCanShowInviteAudienceSection:(BOOL)arg1;
- (void)fetchCanBeInvitedAudienceList;
- (void)checkAndUpdateAfterMicConditionChanged;
- (BOOL)compareSectionsChangesNeedAnimationWithSections:(id)arg1;
- (void)rebuildSectionDataSource;
- (id)buttonWording:(unsigned long long)arg1;
- (id)buttonIconName:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)layoutHeader;
- (void)reloadHeader;
- (void)reloadActionButton;
- (void)onLeftAction;
- (void)onRightAction;
- (void)onButtonAction:(unsigned long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)audienceApplySeatIntroWithMicUser:(id)arg1;
- (BOOL)showAudienceApplicantSeatName;
- (void)onPkPanelCellAccept;
- (void)onPkPanelCellCancel;
- (void)onPkPanelCellQuitMic;
- (void)onPkPanelCellRightButtonAction:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (id)liveTask;
- (void)onMMFinderLiveMicInviteAudienceViewModelUserListUpdated;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)diffableDataSource;
- (void)setDiffableDataSource:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)pkModeLabel;
- (void)setPkModeLabel:(id)arg1;
- (id)pkStateLabel;
- (void)setPkStateLabel:(id)arg1;
- (id)leftActionButton;
- (void)setLeftActionButton:(id)arg1;
- (id)rightActionButton;
- (void)setRightActionButton:(id)arg1;
- (unsigned long long)leftActionType;
- (void)setLeftActionType:(unsigned long long)arg1;
- (unsigned long long)rightActionType;
- (void)setRightActionType:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)canShowInviteAudienceSection;
- (void)setCanShowInviteAudienceSection:(BOOL)arg1;
- (id)inviteAudienceViewModel;
- (void)setInviteAudienceViewModel:(id)arg1;
- (void).cxx_destruct;
@end

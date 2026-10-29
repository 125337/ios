@interface MMFinderLiveConnectMicAudienceContainerView : MMFinderLiveConnectMicBaseContainerView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, MMFinderLiveMicInviteAudienceViewModelDelegate>
{
    BOOL _isAudiencePkEnable; // +0x8
    BOOL _isKTVSectionReported; // +0x9
    NSArray * connectMicUserList; // +0x10
    MMFinderLiveConnectMicAudienceTableViewDataModel * _tableViewDataModel; // +0x18
    MMTableView * _tableView; // +0x20
    double _cellDrawingWidth; // +0x28
    UIView * _headerContainerView; // +0x30
    NSArray * _connectedMicUserList; // +0x38
    NSArray * _applyingMicUserList; // +0x40
    MMFinderLiveMicInviteAudienceViewModel * _inviteAudienceViewModel; // +0x48
    NSArray * _connectedMicUserListForPaidMic; // +0x50
    NSArray * _applyingMicUserListForPaidMic; // +0x58
    MMFinderLivePaidConnectMicAnchorOperationPanelInfo * _panelInfo; // +0x60
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2 isAudiencePkEnable:(BOOL)arg3;
- (id)getFinderLiveTask;
- (void)updateTableViewDataModel;
- (void)rebuildUserListForPaidMicWithConnectingUserIfNeeded:(id)arg1;
- (void)updateTableViewDataModelAndReload;
- (void)updateWithConnectMicUserList:(id)arg1;
- (void)updateConnectingUserList:(id)arg1 invalidUserList:(id)arg2 invitedMicAudienceDict:(id)arg3 recentRemovedUserList:(id)arg4;
- (void)updateWithConnectMicUserList:(id)arg1 invitedMicAudienceDict:(id)arg2;
- (void)updateWithPanelInfo:(id)arg1;
- (id)getPanelInfo;
- (void)checkAndUpdateAfterMicConditionChanged;
- (void)scrollListToTopAnimated:(BOOL)arg1;
- (void)layoutContentView;
- (void)layoutTableView;
- (void)reloadContent;
- (id)mainScrollView;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 connectMicUserCellAtIndex:(id)arg2;
- (BOOL)showApplicantSeatName;
- (id)audienceApplySeatIntroWithMicUser:(id)arg1;
- (void)onMMFinderLiveMicInviteAudienceViewModelUserListUpdated;
- (void)updatePanelInfoUserListWithRemovedUserList:(id)arg1;
- (BOOL)isPaidConnectMic;
- (void)checkTableViewCellDrawingWidthForPaidConnectMic;
- (id)connectMicUserList;
- (void)setConnectMicUserList:(id)arg1;
- (id)tableViewDataModel;
- (void)setTableViewDataModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (double)cellDrawingWidth;
- (void)setCellDrawingWidth:(double)arg1;
- (id)headerContainerView;
- (void)setHeaderContainerView:(id)arg1;
- (BOOL)isAudiencePkEnable;
- (void)setIsAudiencePkEnable:(BOOL)arg1;
- (id)connectedMicUserList;
- (void)setConnectedMicUserList:(id)arg1;
- (id)applyingMicUserList;
- (void)setApplyingMicUserList:(id)arg1;
- (id)inviteAudienceViewModel;
- (void)setInviteAudienceViewModel:(id)arg1;
- (id)connectedMicUserListForPaidMic;
- (void)setConnectedMicUserListForPaidMic:(id)arg1;
- (id)applyingMicUserListForPaidMic;
- (void)setApplyingMicUserListForPaidMic:(id)arg1;
- (id)panelInfo;
- (void)setPanelInfo:(id)arg1;
- (BOOL)isKTVSectionReported;
- (void)setIsKTVSectionReported:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface MMLiveGameInviteJoinTeamView : MMPageSheetBaseView <UIGestureRecognizerDelegate, WCFinderLiveExt>
{
    unsigned int _curJoinTeamMode; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    FinderLiveAppMsgGameInvitationInfo * _invitationInfo; // +0x18
    id /* block */ _showGoToGameAlertEventAction; // +0x20
    id /* block */ _joinTeamAction; // +0x28
    id /* block */ _rejectJoinTeamAction; // +0x30
    UIView * _contentView; // +0x38
    MMUIButton * _closeBtn; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _rankDescLabel; // +0x50
    MMUILabel * _teamupMemberDescLabel; // +0x58
    MMUIButton * _joinTeamButton; // +0x60
    MMUILabel * _explainDescLabel; // +0x68
    MMFinderLiveGameTeamInfo * _gameTeamInfo; // +0x70
    WCFinderGameLiveJumpGameGuideTipsViewController * _tipsVC; // +0x78
}
- (id)initWithTaskId:(id)arg1 invitationInfo:(id)arg2;
- (void)dealloc;
- (void)initUI;
- (void)layoutSubviews;
- (void)setInvitationInfo:(id)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (void)fetchGameTeamInfo;
- (void)setGameTeamInfo:(id)arg1;
- (id)liveTask;
- (void)onJoinTeamButtonClicked;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 extraClientConfigUpdated:(BOOL)arg14 liveGameData:(id)arg15 respContext:(id)arg16;
- (id)audienceLogReporter;
- (id)taskId;
- (id)invitationInfo;
- (id /* block */)showGoToGameAlertEventAction;
- (void)setShowGoToGameAlertEventAction:(id /* block */)arg1;
- (id /* block */)joinTeamAction;
- (void)setJoinTeamAction:(id /* block */)arg1;
- (id /* block */)rejectJoinTeamAction;
- (void)setRejectJoinTeamAction:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rankDescLabel;
- (void)setRankDescLabel:(id)arg1;
- (id)teamupMemberDescLabel;
- (void)setTeamupMemberDescLabel:(id)arg1;
- (id)joinTeamButton;
- (void)setJoinTeamButton:(id)arg1;
- (id)explainDescLabel;
- (void)setExplainDescLabel:(id)arg1;
- (id)gameTeamInfo;
- (id)tipsVC;
- (void)setTipsVC:(id)arg1;
- (unsigned int)curJoinTeamMode;
- (void)setCurJoinTeamMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end

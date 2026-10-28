@interface MMLiveGameJoinTeamSettingView : MMPageSheetBaseView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _lastJoinTeamMode; // +0x8
    unsigned int _curJoinTeamMode; // +0xc
    unsigned int _curCoinValue; // +0x10
    id <MMLiveGameJoinTeamSettingViewDelegate> _operationDelegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIView * _contentView; // +0x28
    UIView * _topAreaView; // +0x30
    MMUIButton * _leftButton; // +0x38
    MMUILabel * _titleLabel; // +0x40
    MMTableView * _joinTeamModeTableView; // +0x48
    OrderedDictionary * _joinTeamQualifications; // +0x50
}
- (id)initWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 curJoinTeamMode:(unsigned int)arg2 curCoinValue:(unsigned int)arg3;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initDefaultData;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)leftButtonAction;
- (void)showChooseCoinView;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getCurrentLeftButton;
- (id)liveTask;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)topAreaView;
- (void)setTopAreaView:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)joinTeamModeTableView;
- (void)setJoinTeamModeTableView:(id)arg1;
- (id)joinTeamQualifications;
- (void)setJoinTeamQualifications:(id)arg1;
- (unsigned int)lastJoinTeamMode;
- (void)setLastJoinTeamMode:(unsigned int)arg1;
- (unsigned int)curJoinTeamMode;
- (void)setCurJoinTeamMode:(unsigned int)arg1;
- (unsigned int)curCoinValue;
- (void)setCurCoinValue:(unsigned int)arg1;
- (void).cxx_destruct;
@end

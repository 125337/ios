@interface GameCenterMsgMgrV2 : MMUserService <MMServiceProtocol>
{
    BOOL _dataHasLoaded; // +0x8
    BOOL _userHasLogout; // +0x9
    GameCenterBaseMsg * _findFriendMsg; // +0x10
    NSString * _currentShowMsgID; // +0x18
    NSMutableSet * _allAvailableMsg; // +0x20
    GCMRedpointExposureControlModel * _controlInfo; // +0x28
    MessageExposureStrategyControl * _strategyControl; // +0x30
    GameCenterBaseMsg * _curQueue0Msg; // +0x38
    GCCommonServer * _server; // +0x40
    GamePullMsgControlInfo * _pullMsgControlInfo; // +0x48
}
- (id)init;
- (void)onServiceClearData;
- (void)regetCurrentFindFriendMsg;
- (void)checkGameLifeRedPointExit;
- (BOOL)checkCurrenFindFriendMsgExit:(BOOL)arg1;
- (void)cleanCurrentFindEntry:(long long)arg1;
- (void)onFindFriendMsgExit:(id)arg1;
- (BOOL)handleNewScoreLogic;
- (void)chooseNewFindMsg:(id)arg1 reason:(long long)arg2;
- (void)onUpdateGameCenterEntrance;
- (long long)getSecondsPassToday;
- (void)checkPullMessage;
- (BOOL)isCurrentRedPointNotEnough;
- (void)upddateRedPointExposure;
- (void)checkNeedReportEmptyRedpoint;
- (id)checkAllAvailableMsg;
- (id)getMaxScoreMsg;
- (float)calcluateMsgScore:(id)arg1;
- (float)getFactorWithParameter:(double)arg1 boundaryArgList:(id)arg2;
- (void)asyncReGetDbQueue1Array:(id)arg1;
- (id)fetchFromDbMsg;
- (BOOL)checkCanRescore;
- (void)updateHistoryScoreWithMsg:(id)arg1;
- (void)handleNewMsgReceived:(id)arg1;
- (void)onReceiveNewGameLifeRedPoint:(id)arg1;
- (void)onGameLifeRedPointExit:(id)arg1 reason:(id)arg2;
- (void)handleMsgExit:(id)arg1 reason:(id)arg2;
- (void)updateMsgCanNotShow:(id)arg1 reason:(id)arg2;
- (void)onClickRedPoint;
- (void)onClearFindFriendMsg:(long long)arg1;
- (void)pullUserMessage:(id)arg1;
- (void)setCurrentShowMsgID:(id)arg1;
- (void)onChooseRedddot:(id)arg1;
- (id)findFriendMsg;
- (void)setFindFriendMsg:(id)arg1;
- (id)currentShowMsgID;
- (id)allAvailableMsg;
- (void)setAllAvailableMsg:(id)arg1;
- (id)controlInfo;
- (void)setControlInfo:(id)arg1;
- (id)strategyControl;
- (void)setStrategyControl:(id)arg1;
- (id)curQueue0Msg;
- (void)setCurQueue0Msg:(id)arg1;
- (id)server;
- (void)setServer:(id)arg1;
- (id)pullMsgControlInfo;
- (void)setPullMsgControlInfo:(id)arg1;
- (BOOL)dataHasLoaded;
- (void)setDataHasLoaded:(BOOL)arg1;
- (BOOL)userHasLogout;
- (void)setUserHasLogout:(BOOL)arg1;
- (void).cxx_destruct;
@end

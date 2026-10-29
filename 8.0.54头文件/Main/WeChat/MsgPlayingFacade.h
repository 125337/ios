@interface MsgPlayingFacade : MMUserService <AutoplayControllerDelegate, AutoPlayControllerExt, MsgPlayingMinimizeControllerDelegate, IAudioReceiverExt, MinimizeNewTransitionControllerDelegate, IContactMgrExt, IMMNewSessionMgrExt, MMServiceProtocol, WCAudioModuleDelegate>
{
    PlayingController * m_playingController; // +0x8
    AutoplayController * m_autoplayController; // +0x10
    MsgPlayingMinimizeController * m_minimizeController; // +0x18
    MinimizeNewTransitionController * _transitionController; // +0x20
    CBaseContact * _contact; // +0x28
    CMessageWrap * _currentInterruptMsg; // +0x30
}
+ (void)reportMsg:(id)arg1 info:(MsgPlayingReportInfo)arg2;
+ (void)tryReportEnterSession:(id)arg1 info:(MsgPlayingReportInfo)arg2;
+ (BOOL)newFeatureOn;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onEnterSession:(id)arg1;
- (void)onSessionAppear:(id)arg1;
- (void)onSessionDisappear:(id)arg1;
- (void)onLeaveSession:(id)arg1 touchCorner:(BOOL)arg2;
- (void)showMinimizeViewForTouchCorner;
- (void)startPlayingMsg:(id)arg1 playArgs:(MsgStartPlayArgs)arg2;
- (void)stopPlayingMsg:(MsgStopPlayArgs)arg1;
- (BOOL)isMsgPlaying:(id)arg1;
- (BOOL)isPlaying;
- (id)currentPlayingMsg;
- (void)StartPlayMessage:(id)arg1;
- (void)StartPlayMessage:(id)arg1 Resume:(BOOL)arg2;
- (void)hideMinimizeViewIfNeed;
- (BOOL)canShowMinimizeView:(BOOL)arg1;
- (void)showMinimizeViewIfNeed;
- (void)showMinimizeViewIfNeed:(BOOL)arg1;
- (void)initMinimizeViewTransitionController;
- (void)clearPlayList;
- (void)setMsgPlayed:(id)arg1;
- (void)OnBeginPlaying:(id)arg1 success:(BOOL)arg2;
- (void)OnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (id)GetDownMsgFromID:(unsigned int)arg1 Limit:(int)arg2 LeftCount:(unsigned int *)arg3;
- (id)GetFirstUnreadMsg;
- (void)autoPlayMsg:(id)arg1;
- (BOOL)shouldStopAutoPlayUnRead;
- (void)onAutoPlayEndWithMsg:(id)arg1;
- (void)onClickMinimizeView;
- (void)onCloseMinimizeView;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (BOOL)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (id)getMinimizationTransitionContext;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(BOOL)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onDidDeleteAllSession;
- (id)transitionController;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)currentInterruptMsg;
- (void)setCurrentInterruptMsg:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCOutCallLogic : MMObject <IPSTNExt, AVAudioPlayerDelegate, MultitalkMinimizeWindowDelegate, MultiTalkMainWindowDelegate, WcoMinimizeDelegate, MMKernelExt>
{
    unsigned long long m_status; // +0x8
    BOOL m_isSpeaker; // +0x10
    BOOL m_isMute; // +0x11
    WCOutRecentCallItem * m_curCallItem; // +0x18
    int m_recentCallLocalID; // +0x20
    int m_roomid; // +0x24
    long long m_CallSeq; // +0x28
    BOOL mIsAccepted; // +0x30
    BOOL mIsConnected; // +0x31
    BOOL mIsOnCalling; // +0x32
    BOOL mIsPlayingCallSound; // +0x33
    BOOL _isMinmizeMode; // +0x34
    UIViewController * _curFromViewController; // +0x38
    unsigned long long _curEntranceType; // +0x40
    AVAudioPlayer * _player; // +0x48
    NSMutableString * _callBackSteam; // +0x50
    WcoMinimizeWindow * _minWindow; // +0x58
    WcoTalkMainWindow * _mainWindow; // +0x60
}
- (void)dealloc;
- (id)init;
- (void)onPreQuit;
- (void)callWCoutContact;
- (void)checkNumber:(id)arg1 PureNum:(id)arg2 LastCountryCode:(id)arg3 DialScece:(unsigned long long)arg4;
- (void)hangUpCall;
- (void)setMute:(BOOL)arg1;
- (void)setSpeaker:(BOOL)arg1;
- (BOOL)isSpeakerMode;
- (BOOL)pressKeyWhileCallingWithKeyCode:(int)arg1;
- (id)GetCurCallItem;
- (id)GetNeedShowLog;
- (id)GetNeedShowLogWithIsHidePhoneNum:(BOOL)arg1;
- (void)prepareCalling;
- (void)beginToTalk;
- (void)OnCallEnded:(BOOL)arg1;
- (void)playEndingSound;
- (void)playCallingSound;
- (void)stopPlaySound;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)handlePSTNStatus:(unsigned long long)arg1;
- (void)handlePSTNErrorCode:(int)arg1 ErrMsg:(id)arg2 ErrTitle:(id)arg3;
- (void)handlePSTNErrorMsg:(id)arg1 errorlevel:(unsigned long long)arg2 ErrTitle:(id)arg3 showChargeAlert:(BOOL)arg4;
- (void)OnPSTNNoAnswer:(id)arg1;
- (void)OnPSTNBeRejected:(id)arg1;
- (void)OnPSTNBeHanguped:(id)arg1;
- (void)OnPSTNAutoHangUp:(id)arg1;
- (void)OnPSTNCallInterrupt:(id)arg1;
- (void)OnPSTNLightInterrupt:(BOOL)arg1;
- (void)OnPSTNTellMeViewIsExist:(BOOL *)arg1;
- (void)OnPSTNCall:(id)arg1 ErrNo:(int)arg2;
- (void)onPSTNCheckNumberResp:(id)arg1;
- (void)OnPSTNRing:(id)arg1;
- (void)OnPSTNBeginTalk:(id)arg1;
- (void)OnPSTNBeAccepted:(id)arg1;
- (void)OnPSTNDataConnected:(id)arg1;
- (void)OnPSTNBeginConnect:(id)arg1;
- (void)OnPSTNError:(id)arg1 ErrNo:(int)arg2 ErrMsg:(id)arg3 ErrTitle:(id)arg4;
- (void)OnPSTNInviteError:(id)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5;
- (void)OnPSTNNotifyError:(id)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5;
- (void)OnPSTNInterrupt:(id)arg1;
- (void)OnPSTNTimeOut:(id)arg1;
- (void)OnPSTNSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNNetWorkError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNInviteGap:(int)arg1;
- (int)getNetSpeed;
- (void)onMultitalkMinimizeWindowClicked;
- (void)onWcoMinimizeButtonClick;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationWillStart;
- (void)onMultiTalkMainWindowQuitAnimationDidEnd;
- (void)onMultiTalkMainWindowCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationDidEnd;
- (CGRect)onMultiTalkMainWindowRequestMinimizeFrame;
- (void)quitMinWindow;
- (void)showMinToastWindowDesc:(id)arg1;
- (BOOL)isWcoActive;
- (id)curCallItem;
- (void)setCurCallItem:(id)arg1;
- (BOOL)isOnCalling;
- (id)curFromViewController;
- (void)setCurFromViewController:(id)arg1;
- (unsigned long long)curEntranceType;
- (void)setCurEntranceType:(unsigned long long)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)callBackSteam;
- (void)setCallBackSteam:(id)arg1;
- (id)minWindow;
- (void)setMinWindow:(id)arg1;
- (id)mainWindow;
- (void)setMainWindow:(id)arg1;
- (BOOL)isMinmizeMode;
- (void)setIsMinmizeMode:(BOOL)arg1;
- (void).cxx_destruct;
@end


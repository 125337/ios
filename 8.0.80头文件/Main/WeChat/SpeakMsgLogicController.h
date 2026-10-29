@interface SpeakMsgLogicController : MMUserService <SpeakMsgLogicDelegate, SpeakMsgMinimizeControllerDelegate, WCAudioModuleDelegate, IMsgRevokeExt, BaseMsgViewControllerExt, MMServiceProtocol>
{
    BOOL _didManuallyStop; // +0x8
    BOOL _isInterrupted; // +0x9
    BOOL _hasPaused; // +0xa
    SpeakMsgLogic * _speakMsgLogic; // +0x10
    SpeakMsgMinimizeController * _minimizeController; // +0x18
    NSMutableArray * _speakMsgList; // +0x20
    CMessageWrap * _lastSpeakingMsg; // +0x28
    unsigned long long _playStartTime; // +0x30
    unsigned long long _totalPlayDuration; // +0x38
    unsigned long long _playedMsgCount; // +0x40
    NSMutableArray * _playedMsgList; // +0x48
}
+ (BOOL)isEnable;
+ (BOOL)isSupportedChatForMessage:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startSpeakMsg:(id)arg1;
- (void)initSpeakMsgListWithStartMsg:(id)arg1;
- (void)updateMessageNodeArray:(id)arg1;
- (id)filterSpeakableViewModels:(id)arg1 anchorMsg:(id)arg2 includeAnchor:(BOOL)arg3;
- (BOOL)isPlaying;
- (id)currentSpeakingMsg;
- (id)stateMinimizeTaskData;
- (id)minimizeController;
- (id)getNextBatchToSpeak;
- (id)getNextMsgToSpeak;
- (void)forceStop;
- (void)clearSpeakingHighlight;
- (void)onSpeakMsgStop;
- (void)onSpeakMsgStart:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onClickMinimizeView;
- (void)onCloseMinimizeView;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)reportMsgPlay:(unsigned long long)arg1;
- (void)reportMsgPause;
- (id)generateSelectedMsgList;
- (void)reportMsgEndWithEndType:(unsigned long long)arg1;
- (id)speakMsgLogic;
- (void)setSpeakMsgLogic:(id)arg1;
- (void)setMinimizeController:(id)arg1;
- (id)speakMsgList;
- (void)setSpeakMsgList:(id)arg1;
- (BOOL)didManuallyStop;
- (void)setDidManuallyStop:(BOOL)arg1;
- (id)lastSpeakingMsg;
- (void)setLastSpeakingMsg:(id)arg1;
- (BOOL)isInterrupted;
- (void)setIsInterrupted:(BOOL)arg1;
- (unsigned long long)playStartTime;
- (void)setPlayStartTime:(unsigned long long)arg1;
- (unsigned long long)totalPlayDuration;
- (void)setTotalPlayDuration:(unsigned long long)arg1;
- (unsigned long long)playedMsgCount;
- (void)setPlayedMsgCount:(unsigned long long)arg1;
- (id)playedMsgList;
- (void)setPlayedMsgList:(id)arg1;
- (BOOL)hasPaused;
- (void)setHasPaused:(BOOL)arg1;
- (void).cxx_destruct;
@end

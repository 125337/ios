@interface FTSFloatingXiaoWeiModel : NSObject
{
    id <FTSFloatingXiaoWeiModelDelegate> _delegate; // +0x8
    MMUIViewController * _presentingViewController; // +0x10
    unsigned long long _xiaoWeiState; // +0x18
    NSString * _currentSessionId; // +0x20
    NSString * _voipSessionId; // +0x28
    NSDate * _commitDate; // +0x30
    NSString * _voiceSearchReportRoundID; // +0x38
    NSDate * _prepareDate; // +0x40
    unsigned long long _headlessRoundId; // +0x48
    FTSXiaoWeiGen2HeadlessObserver * _headlessObserver; // +0x50
    CBTHeadlessVoiceObserver * _headlessObserverWrapper; // +0x58
}
+ (long long)searchLongPressAskXiaoweiExptValue;
+ (BOOL)searchLongPressHeadlessAgentMode;
+ (BOOL)searchLongPressAskXiaoweiGen2Enabled;
- (void)dealloc;
- (void)startVoiceInputWithCompleBlock:(id /* block */)arg1;
- (void)stopVoiceInputAndCommit;
- (void)cancelVoiceInput;
- (void)abortVoiceInputWithReason:(id)arg1;
- (BOOL)isGen2HeadlessEnabled;
- (BOOL)isHeadlessAgentMode;
- (void)startGen2HeadlessVoiceInput;
- (void)onGen2VoiceInputStateChanged:(unsigned long long)arg1 state:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)onGen2VoiceInputLevelMeter:(unsigned long long)arg1 peak:(float)arg2;
- (void)enterXiaoWeiRoom;
- (void)notifyXiaoWeiReady:(id)arg1;
- (void)notifyXiaoWeiAccepted:(id)arg1;
- (void)notifyXiaoWeiError:(long long)arg1 errMsg:(id)arg2 sessionId:(id)arg3;
- (void)notifyXiaoWeiPeakPower:(float)arg1 sessionId:(id)arg2;
- (id)genSessionId;
- (BOOL)isValidCallbackForSession:(id)arg1 expectState:(unsigned long long)arg2;
- (void)dispatchOnMain:(id /* block */)arg1;
- (void)mockScheduleReady;
- (void)mockScheduleAccepted;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (unsigned long long)xiaoWeiState;
- (void)setXiaoWeiState:(unsigned long long)arg1;
- (id)currentSessionId;
- (void)setCurrentSessionId:(id)arg1;
- (id)voipSessionId;
- (void)setVoipSessionId:(id)arg1;
- (id)commitDate;
- (void)setCommitDate:(id)arg1;
- (id)voiceSearchReportRoundID;
- (void)setVoiceSearchReportRoundID:(id)arg1;
- (id)prepareDate;
- (void)setPrepareDate:(id)arg1;
- (unsigned long long)headlessRoundId;
- (void)setHeadlessRoundId:(unsigned long long)arg1;
- (id)headlessObserver;
- (void)setHeadlessObserver:(id)arg1;
- (id)headlessObserverWrapper;
- (void)setHeadlessObserverWrapper:(id)arg1;
- (void).cxx_destruct;
@end

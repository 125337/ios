@interface WAAgentAuthCardSession : NSObject
{
    BOOL _finished; // +0x8
    BOOL _reportEnabled; // +0x9
    BOOL _didReportExposure; // +0xa
    BOOL _didReportCompletion; // +0xb
    BOOL _didReportTerminalUserAction; // +0xc
    BOOL _replaySession; // +0xd
    NSString * _cardId; // +0x10
    unsigned long long _type; // +0x18
    NSString * _appId; // +0x20
    unsigned long long _lastStatus; // +0x28
    id /* block */ _onFinish; // +0x30
    NSDictionary * _reportContext; // +0x38
    NSString * _reportSessionId; // +0x40
    unsigned long long _triggerSource; // +0x48
}
+ (id)statusStringForStatus:(unsigned long long)arg1;
+ (id)tailTextForStatus:(unsigned long long)arg1 type:(unsigned long long)arg2;
+ (id)ignoredTailTextForType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 appId:(id)arg2;
- (void)finishWithStatus:(unsigned long long)arg1 extra:(id)arg2;
- (BOOL)acceptWaitsForCGI;
- (void)confirmAcceptFromCardWithCompletion:(id /* block */)arg1;
- (id)buildUserInputForm;
- (id)buildAuthCardData;
- (id)buildSnapshot;
- (void)markAsReplayFinishedWithStatus:(unsigned long long)arg1;
- (id)buildFlutterCardData;
- (void)applyFlutterBusinessData:(id)arg1 forStatus:(unsigned long long)arg2;
- (id)tailTextForStatus:(unsigned long long)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)isFinished;
- (void)setFinished:(BOOL)arg1;
- (unsigned long long)lastStatus;
- (void)setLastStatus:(unsigned long long)arg1;
- (id /* block */)onFinish;
- (void)setOnFinish:(id /* block */)arg1;
- (id)reportContext;
- (void)setReportContext:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (unsigned long long)triggerSource;
- (void)setTriggerSource:(unsigned long long)arg1;
- (BOOL)reportEnabled;
- (void)setReportEnabled:(BOOL)arg1;
- (BOOL)didReportExposure;
- (void)setDidReportExposure:(BOOL)arg1;
- (BOOL)didReportCompletion;
- (void)setDidReportCompletion:(BOOL)arg1;
- (BOOL)didReportTerminalUserAction;
- (void)setDidReportTerminalUserAction:(BOOL)arg1;
- (BOOL)isReplaySession;
- (void)setReplaySession:(BOOL)arg1;
- (void).cxx_destruct;
@end

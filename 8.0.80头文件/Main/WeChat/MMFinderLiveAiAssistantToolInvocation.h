@interface MMFinderLiveAiAssistantToolInvocation : NSObject
{
    BOOL _finished; // +0x8
    NSString * _toolCallId; // +0x10
    NSString * _toolName; // +0x18
    NSString * _toolVersion; // +0x20
    NSString * _msgId; // +0x28
    NSString * _arguments; // +0x30
    NSString * _sessionId; // +0x38
    unsigned long long _requestId; // +0x40
    double _timeout; // +0x48
    id /* block */ _onFinish; // +0x50
    id /* block */ _onTimeoutBlock; // +0x58
    MMTimer * _timeoutTimer; // +0x60
}
- (id)initWithToolCallId:(id)arg1 toolName:(id)arg2 toolVersion:(id)arg3 msgId:(id)arg4 arguments:(id)arg5 sessionId:(id)arg6 requestId:(unsigned long long)arg7 timeout:(double)arg8 onFinish:(id /* block */)arg9 onTimeout:(id /* block */)arg10;
- (void)dealloc;
- (void)startTimeoutCountdown;
- (void)finishWithSuccess:(BOOL)arg1 extraInfo:(id)arg2 errorCode:(long long)arg3;
- (void)cancel;
- (void)onTimeout;
- (id)errorTypeForCode:(long long)arg1;
- (void)cancelTimer;
- (id)toolCallId;
- (void)setToolCallId:(id)arg1;
- (id)toolName;
- (void)setToolName:(id)arg1;
- (id)toolVersion;
- (void)setToolVersion:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)arguments;
- (void)setArguments:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id /* block */)onFinish;
- (void)setOnFinish:(id /* block */)arg1;
- (id /* block */)onTimeoutBlock;
- (void)setOnTimeoutBlock:(id /* block */)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end

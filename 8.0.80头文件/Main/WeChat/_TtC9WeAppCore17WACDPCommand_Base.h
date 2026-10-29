@interface _TtC9WeAppCore17WACDPCommand_Base : NSObject
{
    void * method; // +0x8
    void * callId; // +0x18
    NSData * context; // +0x28
    void * voipSessionID; // +0x30
    void * traceMsgid; // +0x40
    void * params; // +0x50
     state; // +0x58
     commandTask; // +0x60
     webView; // +0x68
     cdpContext; // +0x70
     isRerunCommand; // +0x78
     callbackId; // +0x80
     eventParams; // +0x88
     startTimeStamp; // +0x90
    unsigned long long recvCdpTimeStamp; // +0x98
     waitWeAppLaunchCost; // +0xa0
    void * agentUsername; // +0xa8
    void * appId; // +0xb8
    void * sessionId; // +0xc8
    void * cmdId; // +0xd8
    void * response; // +0xe8
    long long code; // +0xf0
}
+ (id)makeCommandWithMethod:(id)arg1;
- (id)method;
- (void)setMethod:(id)arg1;
- (id)callId;
- (void)setCallId:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (id)traceMsgid;
- (void)setTraceMsgid:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (unsigned long long)recvCdpTimeStamp;
- (void)setRecvCdpTimeStamp:(unsigned long long)arg1;
- (id)agentUsername;
- (void)setAgentUsername:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)cmdId;
- (void)setCmdId:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (long long)code;
- (void)setCode:(long long)arg1;
- (id)taskId;
- (void)runCommandWithCompletionHandler:(id /* block */)arg1;
- (void)onSessionInterrupted;
- (void)onSessionPreempted;
- (id)generateDiagnosticInfo;
- (BOOL)isEqual:(id)arg1;
- (long long)hash;
- (id)init;
- (void).cxx_destruct;
@end

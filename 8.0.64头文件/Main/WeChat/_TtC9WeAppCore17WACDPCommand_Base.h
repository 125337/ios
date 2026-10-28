@interface _TtC9WeAppCore17WACDPCommand_Base : NSObject
{
     method; // +0x8
     callId; // +0x18
     context; // +0x28
     params; // +0x30
     commandTask; // +0x38
     webView; // +0x40
     callbackId; // +0x48
     eventParams; // +0x50
     agentUsername; // +0x58
     appId; // +0x68
     sessionId; // +0x78
     cmdId; // +0x88
     response; // +0x98
     code; // +0xa8
}
+ (id)makeCommandWithMethod:(id)arg1;
- (id)method;
- (void)setMethod:(id)arg1;
- (id)callId;
- (void)setCallId:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
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
- (BOOL)isEqual:(id)arg1;
- (long long)hash;
- (id)init;
- (void).cxx_destruct;
@end

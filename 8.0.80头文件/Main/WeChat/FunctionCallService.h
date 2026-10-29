@interface FunctionCallService : MMUserService <MMServiceProtocol, FunctionCallCPP2NativeCallerBase>
{
    FunctionCallCPP2NativeCaller * m_functionCallNativeController; // +0x8
    FunctionCallNative2CPPCallerCallback * m_functionCallCppCallback; // +0x10
    NSMutableArray * m_allFunctionCallRegister; // +0x18
    FunctionCallCPP2NativeCallerCallback * m_callback; // +0x20
    FunctionCallPlatformServiceImpl * m_platformService; // +0x28
    NSMutableArray * m_allBetaFunctionCallRegister; // +0x30
}
- (unsigned long long)internalCallIdCounter;
- (void)setInternalCallIdCounter:(unsigned long long)arg1;
- (id)internalCallIdLock;
- (void)triggerFunctionCallWithResultReport:(id)arg1 completion:(id /* block */)arg2;
- (void)reportResultOnly:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerInternalFunctionCall:(id)arg1 completion:(id /* block */)arg2;
- (void)parseInternalFunctionName:(id)arg1 inputModule:(id)arg2 outFunctionName:(id *)arg3 outModuleName:(id *)arg4;
- (id)generateInternalCallId;
- (void)executeInternalFunctionAsync:(id)arg1 moduleName:(id)arg2 arguments:(id)arg3 voipSession:(id)arg4 callId:(id)arg5 completion:(id /* block */)arg6;
- (void)reportResultToBackend:(id)arg1 input:(id)arg2;
- (void)onServiceInit;
- (void)onServiceAfterInit;
- (void)onServiceClearData;
- (void)registerAff;
- (void)unregisterAff;
- (void)setCallbackForFunctionCall:(id)arg1;
- (void)registerAllFunctions;
- (void)registerAllBetaFunctions;
- (void)unregisterAllBetaFunctions;
- (void)registerFunction:(id)arg1 moduleName:(id)arg2 withAction:(id /* block */)arg3 schemes:(id)arg4;
- (void)registerAsyncFunction:(id)arg1 moduleName:(id)arg2 withAction:(id /* block */)arg3 schemes:(id)arg4;
- (void)unregisterAllFunctions;
- (void)unregisterFunctions:(id)arg1 moduleName:(id)arg2;
- (id)allRegisteredFunctionNames;
- (void)invokeFunctionCallingAsync:(id)arg1 arguments:(id)arg2 scheme:(int)arg3 callback:(id /* block */)arg4;
- (void)invokeFunctionCallingAsync:(id)arg1 moduleName:(id)arg2 arguments:(id)arg3 scheme:(int)arg4 callback:(id /* block */)arg5;
- (void)registerAuthChatIds:(id)arg1 forSessionId:(id)arg2;
- (void)unregisterAuthChatIdsForSessionId:(id)arg1;
- (id)queryAllowedChatIds:(id)arg1;
- (void)grantChatHistoryAuthDailyGrant;
- (BOOL)hasValidChatHistoryAuthDailyGrant;
- (void)revokeChatHistoryAuthDailyGrant;
- (double)chatHistoryAuthDailyGrantAt;
- (double)chatHistoryAuthDailyGrantExpireAt;
- (void)grantChatHistoryAuthChatDailyGrant:(id)arg1;
- (BOOL)hasValidChatHistoryAuthChatDailyGrant:(id)arg1;
- (void)revokeChatHistoryAuthChatDailyGrant:(id)arg1;
- (double)chatHistoryAuthChatDailyGrantAt:(id)arg1;
- (double)chatHistoryAuthChatDailyGrantExpireAt;
- (void)setCallback:(id)arg1;
- (void)notifyFunctionCallStartAsync:(unsigned long long)arg1 notification:(id)arg2;
- (void)notifyFunctionCallEndAsync:(unsigned long long)arg1 notification:(id)arg2;
- (void)getFunctionProtocolPathAsync:(unsigned long long)arg1;
- (void)getProtocolTempDirAsync:(unsigned long long)arg1;
- (id)chatIdForSentMessage:(id)arg1;
- (void)recordLastXiaoweiSentMessage:(id)arg1;
- (id)lastXiaoweiSentMessage;
- (void)clearLastXiaoweiSentMessageIfMatch:(id)arg1;
- (void).cxx_destruct;
@end

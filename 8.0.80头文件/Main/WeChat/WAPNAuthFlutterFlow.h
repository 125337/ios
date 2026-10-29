@interface WAPNAuthFlutterFlow : NSObject
{
    WAPNAuthFlutterCardSession * _session; // +0x8
    id /* block */ _completion; // +0x10
    NSString * _cardId; // +0x18
    id /* block */ _timeoutBlock; // +0x20
}
+ (BOOL)canHandover;
+ (BOOL)handoverWithAppId:(id)arg1 isRealtime:(BOOL)arg2 pagePath:(id)arg3 noQuotaToast:(BOOL)arg4 appName:(id)arg5 appIconUrl:(id)arg6 fromAgentRuntime:(BOOL)arg7 completion:(id /* block */)arg8;
- (void)dealloc;
- (void)startWithAppId:(id)arg1 isRealtime:(BOOL)arg2 pagePath:(id)arg3 noQuotaToast:(BOOL)arg4 appName:(id)arg5 appIconUrl:(id)arg6 fromAgentRuntime:(BOOL)arg7 completion:(id /* block */)arg8;
- (void)handlePrepareResult:(id)arg1 error:(id)arg2 fromAgentRuntime:(BOOL)arg3;
- (void)handleAutoAuthResult:(id)arg1 fromAgentRuntime:(BOOL)arg2;
- (id)autoAuthResultFromBusinessData:(id)arg1;
- (void)finishSessionWithStatus:(unsigned long long)arg1 businessData:(id)arg2;
- (void)deliverFailureWithErrCode:(long long)arg1 errMsg:(id)arg2;
- (void)deliverResultWithStatus:(unsigned long long)arg1 businessData:(id)arg2;
- (void)cancelTimeout;
- (id)session;
- (void)setSession:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id /* block */)timeoutBlock;
- (void)setTimeoutBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

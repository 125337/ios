@interface TryAddOpenIMKefuContactOpLogic : MMObject <PBMessageObserverDelegate>
{
    NSString * _key; // +0x8
}
- (id)init;
- (void)dealloc;
- (id)buildTryAddContextWithSpamContext:(id)arg1 finderContext:(id)arg2 shareTicket:(id)arg3 openIMKefuNotifyCtx:(id)arg4 contactInfoScene:(int)arg5;
- (void)tryAddWWKFContactWithUrl:(id)arg1 scene:(int)arg2 spamContext:(id)arg3 finderContext:(id)arg4 shareTicket:(id)arg5 openIMKefuNotifyCtx:(id)arg6 contactInfoScene:(int)arg7 onSuccess:(id /* block */)arg8 onFail:(id /* block */)arg9;
- (void)tryAddWWKFContactWithUserName:(id)arg1 scene:(int)arg2 shareTicket:(id)arg3 openIMKefuNotifyCtx:(id)arg4 contactInfoScene:(int)arg5 onSuccess:(id /* block */)arg6 onFail:(id /* block */)arg7;
- (void)sendTryAddRequest:(id)arg1 completeBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)onTryAddWWKFContactFromSvr:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end

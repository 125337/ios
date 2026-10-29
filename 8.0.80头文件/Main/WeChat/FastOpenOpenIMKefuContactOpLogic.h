@interface FastOpenOpenIMKefuContactOpLogic : MMObject <PBMessageObserverDelegate>
{
    NSString * _key; // +0x8
}
- (void)dealloc;
- (id)buildEnterChatContextWithSpamContext:(id)arg1 finderContext:(id)arg2 openIMKefuNotifyCtx:(id)arg3 scene:(int)arg4;
- (void)fetchWWKFContactForFastOpenWithUrl:(id)arg1 scene:(int)arg2 spamContext:(id)arg3 finderContext:(id)arg4 openIMKefuNotifyCtx:(id)arg5 onSuccess:(id /* block */)arg6 onFail:(id /* block */)arg7;
- (void)fetchWWKFContactForFastOpenWithUserName:(id)arg1 scene:(int)arg2 openIMKefuNotifyCtx:(id)arg3 onSuccess:(id /* block */)arg4 onFail:(id /* block */)arg5;
- (void)sendEnterOpenIMKefuChatWithUrl:(id)arg1 userName:(id)arg2 scene:(int)arg3 spamContext:(id)arg4 finderContext:(id)arg5 openIMKefuNotifyCtx:(id)arg6 onSuccess:(id /* block */)arg7 onFail:(id /* block */)arg8;
- (void)onEnterWWKFChatFromSvr:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end

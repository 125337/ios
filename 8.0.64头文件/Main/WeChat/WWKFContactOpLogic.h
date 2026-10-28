@interface WWKFContactOpLogic : MMObject <PBMessageObserverDelegate>
{
    NSString * _key; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)fetchWWKFContactWithUserName:(id)arg1 scene:(int)arg2 onSuccess:(id /* block */)arg3 onFail:(id /* block */)arg4;
- (void)fetchWWKFContactWithUrl:(id)arg1 scene:(int)arg2 spamContext:(id)arg3 finderContext:(id)arg4 onSuccess:(id /* block */)arg5 onFail:(id /* block */)arg6;
- (id)clientStatusForUserName:(id)arg1;
- (void)fetchWWKFContactFromSvr:(id)arg1 clientStatus:(id)arg2 scene:(int)arg3 spamContext:(id)arg4 finderContext:(id)arg5 completeBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)onFetchWWKFContactFromSvr:(id)arg1;
- (void)requestBindWWKFContact:(id)arg1 url:(id)arg2 shareTicket:(id)arg3 notifyCtx:(id)arg4 spamContext:(id)arg5 finderContext:(id)arg6 completeBlock:(id /* block */)arg7;
- (void)onSyncContactAddOperationToSvr:(id)arg1;
- (void)requestUnBindWWKFContactWithUserName:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)onSyncContactDeleteOperationToSvr:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end

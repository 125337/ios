@interface WCPayLedgerQueryBridge : NSObject
{
     queryUseCase; // +0x8
}
- (id)init;
- (void)ensureSyncedWithTalker:(id)arg1 completion:(id /* block */)arg2;
- (void)queryWithTalker:(id)arg1 kind:(long long)arg2 type:(int)arg3 counterparty:(id)arg4 dateStart:(long long)arg5 dateEnd:(long long)arg6 completion:(id /* block */)arg7;
- (void).cxx_destruct;
@end

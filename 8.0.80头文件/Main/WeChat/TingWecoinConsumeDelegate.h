@interface TingWecoinConsumeDelegate : NSObject <WCCoinConsumeLogicDelegate>
{
    id /* block */ _completionBlock; // +0x8
    id /* block */ _onDelegateFinsih; // +0x10
}
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)onDelegateFinsih;
- (void)setOnDelegateFinsih:(id /* block */)arg1;
- (void).cxx_destruct;
@end

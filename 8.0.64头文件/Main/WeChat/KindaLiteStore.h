@interface KindaLiteStore : LiteAppStore
{
    NSMapTable * _storeDelegates; // +0x8
}
+ (void)registerStore;
+ (id)sharedInstance;
- (id)init;
- (id)copy;
- (id)mutableCopy;
- (void)addStoreDelegate:(id)arg1 delegate:(id)arg2;
- (void)removeStoreDelegate:(id)arg1;
- (void)SendResult:(unsigned long long)arg1 callbackId:(unsigned int)arg2 json:(id)arg3;
- (void)SendResult:(unsigned long long)arg1 callbackId:(unsigned int)arg2 obj:(id)arg3;
- (void)SendError:(unsigned long long)arg1 callbackId:(unsigned int)arg2 message:(id)arg3;
- (void)SetData:(id)arg1;
- (BOOL)OnDispatch:(id)arg1 instanceId:(unsigned long long)arg2 actionName:(id)arg3 data:(id)arg4 callbackId:(int)arg5;
- (id)storeDelegates;
- (void)setStoreDelegates:(id)arg1;
- (void).cxx_destruct;
@end

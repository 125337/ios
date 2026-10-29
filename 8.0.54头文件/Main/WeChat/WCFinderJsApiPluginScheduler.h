@interface WCFinderJsApiPluginScheduler : LiteAppJsApiPluginScheduler
{
    MMUIViewController * _fromVC; // +0x8
    MMLiteAppViewController * _toLiteAppVC; // +0x10
}
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)toLiteAppVC;
- (void)setToLiteAppVC:(id)arg1;
- (void).cxx_destruct;
@end


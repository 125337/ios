@interface TextStateEffectManager : MMRootService <MMServiceProtocol>
{
    MMLRUCache * _cache; // +0x8
}
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (id)syncGenerateBlurredImage:(id)arg1 parameter:(id)arg2;
- (void)asyncGenerateBlurredImage:(id)arg1 parameter:(id)arg2 completion:(id /* block */)arg3;
- (id)blurCIImage:(id)arg1;
- (id)blurCIImage:(id)arg1 type:(long long)arg2;
- (id)generateBlurredImage:(id)arg1 type:(long long)arg2;
- (id)cache;
- (void)setCache:(id)arg1;
- (void).cxx_destruct;
@end

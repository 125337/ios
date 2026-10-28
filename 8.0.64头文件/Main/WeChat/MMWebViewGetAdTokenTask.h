@interface MMWebViewGetAdTokenTask : NSObject
{
    NSString * _url; // +0x8
    NSString * _adUrl; // +0x10
    NSString * _posId; // +0x18
    id /* block */ _completion; // +0x20
}
- (id)url;
- (void)setUrl:(id)arg1;
- (id)adUrl;
- (void)setAdUrl:(id)arg1;
- (id)posId;
- (void)setPosId:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

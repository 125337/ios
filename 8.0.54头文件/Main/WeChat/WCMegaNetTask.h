@interface WCMegaNetTask : NSObject
{
    BOOL _checkDisposable; // +0x8
    id _response; // +0x10
    NSString * _error; // +0x18
    NSHashTable * _disposbleTable; // +0x20
    id /* block */ _completion; // +0x28
    id /* block */ _success; // +0x30
    id /* block */ _fail; // +0x38
}
- (id)init;
- (id)onSuccess:(id /* block */)arg1;
- (id)onFail:(id /* block */)arg1;
- (id)disposeBy:(id)arg1;
- (void)doResponse;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (BOOL)checkDisposable;
- (void)setCheckDisposable:(BOOL)arg1;
- (id)disposbleTable;
- (void)setDisposbleTable:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)fail;
- (void)setFail:(id /* block */)arg1;
- (void).cxx_destruct;
@end


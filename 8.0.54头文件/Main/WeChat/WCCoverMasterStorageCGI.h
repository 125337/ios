@interface WCCoverMasterStorageCGI : WCBaseCgi
{
    BOOL _usesOldDataForcibly; // +0x8
    NSString * _language; // +0x10
    id /* block */ _successHandler; // +0x18
    id /* block */ _failureHandler; // +0x20
    NSError * _error; // +0x28
    WCBGStorage * _bgStorage; // +0x30
}
- (id)initWithLanguage:(id)arg1;
- (void)_createRequest;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)language;
- (id /* block */)successHandler;
- (void)setSuccessHandler:(id /* block */)arg1;
- (id /* block */)failureHandler;
- (void)setFailureHandler:(id /* block */)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)bgStorage;
- (void)setBgStorage:(id)arg1;
- (BOOL)usesOldDataForcibly;
- (void)setUsesOldDataForcibly:(BOOL)arg1;
- (void).cxx_destruct;
@end


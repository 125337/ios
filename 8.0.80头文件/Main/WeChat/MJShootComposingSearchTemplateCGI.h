@interface MJShootComposingSearchTemplateCGI : WCFinderBaseCgi
{
    id /* block */ _successfulBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithPageBuffer:(id)arg1 fromTemplateID:(id)arg2 enterScene:(unsigned long long)arg3 queryWord:(id)arg4 successfulBlock:(id /* block */)arg5 failedBlock:(id /* block */)arg6;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

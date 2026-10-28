@interface WCFinderLiveLegalPromotReportCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)initWithFinderTaskId:(id)arg1 legalType:(int)arg2 legalVersion:(unsigned int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequestWithLegalType:(int)arg1 legalVersion:(unsigned int)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

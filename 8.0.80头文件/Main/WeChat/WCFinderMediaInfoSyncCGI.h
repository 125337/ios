@interface WCFinderMediaInfoSyncCGI : WCFinderBaseCgi
{
    id /* block */ _successfulBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
    NSString * _templateID; // +0x18
}
- (id)initWithTemplateID:(id)arg1 md5:(id)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (void).cxx_destruct;
@end

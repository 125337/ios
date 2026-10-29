@interface MJShootCancelAigcTaskRequest : WCFinderBaseCgi
{
    id /* block */ _successfulBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithTaskID:(id)arg1 metaData:(id)arg2 contextBuff:(id)arg3 reasonType:(int)arg4 successfulBlock:(id /* block */)arg5 failedBlock:(id /* block */)arg6;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

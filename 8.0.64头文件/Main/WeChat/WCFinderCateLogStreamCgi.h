@interface WCFinderCateLogStreamCgi : WCFinderBaseCgi
{
    id /* block */ _successfulBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithTabType:(int)arg1 scene:(int)arg2 pullType:(int)arg3 username:(id)arg4 clientStatus:(id)arg5 extBuf:(id)arg6 lastBuf:(id)arg7 successful:(id /* block */)arg8 failed:(id /* block */)arg9;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

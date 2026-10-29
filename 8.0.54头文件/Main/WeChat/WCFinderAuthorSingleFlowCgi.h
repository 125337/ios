@interface WCFinderAuthorSingleFlowCgi : WCFinderBaseCgi
{
    id /* block */ _successfulBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithLastBuffer:(id)arg1 feedid:(id)arg2 nonceId:(id)arg3 tabType:(int)arg4 commentScene:(int)arg5 params:(id)arg6 successful:(id /* block */)arg7 failed:(id /* block */)arg8;
- (id)initWithLastBuffer:(id)arg1 username:(id)arg2 lastTid:(id)arg3 nonceID:(id)arg4 tabType:(int)arg5 commentScene:(int)arg6 params:(id)arg7 successful:(id /* block */)arg8 failed:(id /* block */)arg9;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end


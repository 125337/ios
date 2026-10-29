@interface WCFinderGetAllWindowProductsCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
}
- (id)initWithFinderUsername:(id)arg1 feedID:(id)arg2 scene:(int)arg3 reportInfo:(id)arg4 lastBuffer:(id)arg5 ecSource:(id)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end


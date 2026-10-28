@interface WCFinderGetLiveTabsCGI : WCFinderBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)initWithLongitude:(float)arg1 latitude:(float)arg2 tabScene:(long long)arg3 byPassInfo:(id)arg4 title:(id)arg5 feedExportId:(id)arg6 feedNonceId:(id)arg7 SuccessBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

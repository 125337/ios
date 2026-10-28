@interface WCFinderLiveApplyMicIntercomCGI : WCFinderLiveBaseCgi
{
    BOOL _needSdkInfo; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    NSData * _liveCookies; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 liveCookies:(id)arg3 needSdkInfo:(BOOL)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (BOOL)needSdkInfo;
- (void)setNeedSdkInfo:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

@interface WXPLiteAppNetworkService : NSObject
{
    WXPNetworkServiceImpl * _networkService; // +0x8
}
- (id)init;
- (id)getBaseRequest:(int)arg1;
- (void)request:(id)arg1 data:(id)arg2 callback:(id /* block */)arg3;
- (void)onRequestError:(id)arg1 callback:(id /* block */)arg2;
- (void)onRequestCompleteWithErrType:(int)arg1 responseData:(id)arg2 extraInfo:(id)arg3 callback:(id /* block */)arg4;
- (id)networkService;
- (void)setNetworkService:(id)arg1;
- (void).cxx_destruct;
@end

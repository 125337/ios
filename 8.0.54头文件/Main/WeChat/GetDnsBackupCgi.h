@interface GetDnsBackupCgi : WCBaseCgi
{
    weak_ptr<mars::cdn::Get3rdDnsCallback> callback_; // +0x8
    Get3rdDnsReq * get3rdDnsReq; // +0x18
}
- (id)init;
- (void)setCallback:(shared_ptr<mars::cdn::Get3rdDnsCallback>)arg1;
- (void)startRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)get3rdDnsReq;
- (void)setGet3rdDnsReq:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


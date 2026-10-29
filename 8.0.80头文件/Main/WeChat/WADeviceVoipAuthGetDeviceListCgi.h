@interface WADeviceVoipAuthGetDeviceListCgi : WCBaseCgi
{
    id <WADeviceVoipAuthGetDeviceListCgiDelegate> _delegate; // +0x8
    NSString * _appId; // +0x10
}
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end

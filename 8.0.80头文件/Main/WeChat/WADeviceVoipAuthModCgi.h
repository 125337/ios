@interface WADeviceVoipAuthModCgi : WCBaseCgi
{
    id <WADeviceVoipAuthModCgiDelegate> _delegate; // +0x8
    WADeviceVoipAuthDeviceItem * _deviceItem; // +0x10
    WAServiceVoipAuthItem * _serviceVoipAuthItem; // +0x18
}
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)deviceItem;
- (void)setDeviceItem:(id)arg1;
- (id)serviceVoipAuthItem;
- (void)setServiceVoipAuthItem:(id)arg1;
- (void).cxx_destruct;
@end

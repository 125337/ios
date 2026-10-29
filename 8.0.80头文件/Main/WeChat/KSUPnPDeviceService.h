@interface KSUPnPDeviceService : NSObject
{
    NSString * _serviceType; // +0x8
    NSString * _serviceId; // +0x10
    NSURL * _SCPDURL; // +0x18
    NSURL * _controlURL; // +0x20
    NSURL * _eventSubURL; // +0x28
}
- (id)description;
- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (id)serviceId;
- (void)setServiceId:(id)arg1;
- (id)SCPDURL;
- (void)setSCPDURL:(id)arg1;
- (id)controlURL;
- (void)setControlURL:(id)arg1;
- (id)eventSubURL;
- (void)setEventSubURL:(id)arg1;
- (void).cxx_destruct;
@end

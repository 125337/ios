@interface WAMediaCastingUpnpDeviceService : NSObject
{
    NSString * _SCPDURL; // +0x8
    NSString * _controlURL; // +0x10
    NSString * _eventSubURL; // +0x18
    NSString * _serviceId; // +0x20
    NSString * _serviceType; // +0x28
}
+ (id)deviceServiceWithInfo:(id)arg1;
- (id)SCPDURL;
- (void)setSCPDURL:(id)arg1;
- (id)controlURL;
- (void)setControlURL:(id)arg1;
- (id)eventSubURL;
- (void)setEventSubURL:(id)arg1;
- (id)serviceId;
- (void)setServiceId:(id)arg1;
- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (void).cxx_destruct;
@end


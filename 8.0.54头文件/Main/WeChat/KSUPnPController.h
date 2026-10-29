@interface KSUPnPController : NSObject
{
    KSUPnPDevice * _device; // +0x8
    KSUPnPDeviceService * _service; // +0x10
}
+ (Class)controllerClassForServiceType:(id)arg1;
- (id)initWithDevice:(id)arg1 service:(id)arg2;
- (id)device;
- (id)service;
- (void).cxx_destruct;
@end


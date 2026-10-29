@interface WAMediaCastingRoutePickerDeviceItem : NSObject
{
    unsigned long long _deviceType; // +0x8
    NSString * _name; // +0x10
    WAMediaCastingUpnpDevice * _upnpDevice; // +0x18
}
+ (id)deviceItemUpnp:(id)arg1;
+ (id)deviceItemAirPlay;
- (void)setUpnpDevice:(id)arg1;
- (unsigned long long)deviceType;
- (void)setDeviceType:(unsigned long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)upnpDevice;
- (void).cxx_destruct;
@end

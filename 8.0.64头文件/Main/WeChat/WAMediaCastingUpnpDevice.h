@interface WAMediaCastingUpnpDevice : NSObject
{
    NSString * _deviceID; // +0x8
    NSString * _address; // +0x10
    NSString * _usn; // +0x18
    NSString * _uuid; // +0x20
    NSString * _location; // +0x28
    NSString * _friendlyName; // +0x30
    NSString * _modelName; // +0x38
    NSString * _modelNumber; // +0x40
    NSString * _modelDescription; // +0x48
    NSString * _manufacturer; // +0x50
    NSDictionary<WAMediaCastingUpnpDeviceService> * _servicesDictionary; // +0x58
    NSURL * _commandBaseURL; // +0x60
    NSString * _XMLString; // +0x68
}
+ (id)deviceWithLocation:(id)arg1 usn:(id)arg2 uuid:(id)arg3 data:(id)arg4 address:(id)arg5;
+ (id)deviceIDWithUUID:(id)arg1 address:(id)arg2;
- (id)description;
- (id)commandURLWithServiceType:(id)arg1;
- (id)SOAPActionWithCommandName:(id)arg1 serviceType:(id)arg2;
- (id)deviceID;
- (void)setDeviceID:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)usn;
- (void)setUsn:(id)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)friendlyName;
- (void)setFriendlyName:(id)arg1;
- (id)modelName;
- (void)setModelName:(id)arg1;
- (id)modelNumber;
- (void)setModelNumber:(id)arg1;
- (id)modelDescription;
- (void)setModelDescription:(id)arg1;
- (id)manufacturer;
- (void)setManufacturer:(id)arg1;
- (id)servicesDictionary;
- (void)setServicesDictionary:(id)arg1;
- (id)commandBaseURL;
- (void)setCommandBaseURL:(id)arg1;
- (id)XMLString;
- (void)setXMLString:(id)arg1;
- (void).cxx_destruct;
@end

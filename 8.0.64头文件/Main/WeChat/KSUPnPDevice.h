@interface KSUPnPDevice : NSObject
{
    NSMutableDictionary * _controllers; // +0x8
    NSString * _instanceDescription; // +0x10
    NSString * _UUID; // +0x18
    long long _status; // +0x20
    NSDictionary * _discoverInfo; // +0x28
    NSURL * _deviceDescriptionURL; // +0x30
    NSString * _searchTarget; // +0x38
    NSURL * _baseURL; // +0x40
    NSString * _deviceType; // +0x48
    NSString * _friendlyName; // +0x50
    NSString * _manufacturer; // +0x58
    NSURL * _manufacturerURL; // +0x60
    NSString * _modelDescription; // +0x68
    NSString * _modelName; // +0x70
    NSString * _modelNumber; // +0x78
    NSArray * _serviceList; // +0x80
    id <KSUPnPDeviceStatusObserver> _statusObserver; // +0x88
    NSDictionary * _discoverInfoForParsing; // +0x90
    NSMutableDictionary * _mutableUSNInfos; // +0x98
}
- (BOOL)parseDescriptionFromXMLData:(id)arg1;
- (void)requestDeviceDescription;
- (void)handleDeviceDescriptionWithRecord:(id)arg1 response:(id)arg2 data:(id)arg3;
- (void)handleSuccessForDeviceDescriptionWithRecord:(id)arg1;
- (void)handleFailureForDeviceDescriptionWithRecord:(id)arg1 error:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (BOOL)_isValid;
- (void)_didInit;
- (void)setStatus:(long long)arg1;
- (id)USNInfos;
- (id)mutableUSNInfos;
- (id)initWithDiscoverInfo:(id)arg1;
- (void)updateWithDiscoverInfo:(id)arg1;
- (id)initWithDiscoverResponseData:(id)arg1;
- (void)updateWithDiscoverResponseData:(id)arg1;
- (BOOL)isPrimaryDiscoverInfoEqualToDevice:(id)arg1;
- (id)serviceForType:(id)arg1;
- (id)controllers;
- (id)controllerForServiceType:(id)arg1;
- (id)description;
- (id)instanceDescription;
- (id)propertiesDescription;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (long long)status;
- (id)discoverInfo;
- (void)setDiscoverInfo:(id)arg1;
- (id)deviceDescriptionURL;
- (void)setDeviceDescriptionURL:(id)arg1;
- (id)searchTarget;
- (void)setSearchTarget:(id)arg1;
- (id)baseURL;
- (void)setBaseURL:(id)arg1;
- (id)deviceType;
- (void)setDeviceType:(id)arg1;
- (id)friendlyName;
- (void)setFriendlyName:(id)arg1;
- (id)manufacturer;
- (void)setManufacturer:(id)arg1;
- (id)manufacturerURL;
- (void)setManufacturerURL:(id)arg1;
- (id)modelDescription;
- (void)setModelDescription:(id)arg1;
- (id)modelName;
- (void)setModelName:(id)arg1;
- (id)modelNumber;
- (void)setModelNumber:(id)arg1;
- (id)serviceList;
- (void)setServiceList:(id)arg1;
- (id)statusObserver;
- (void)setStatusObserver:(id)arg1;
- (id)discoverInfoForParsing;
- (void)setDiscoverInfoForParsing:(id)arg1;
- (void)setMutableUSNInfos:(id)arg1;
- (void).cxx_destruct;
@end

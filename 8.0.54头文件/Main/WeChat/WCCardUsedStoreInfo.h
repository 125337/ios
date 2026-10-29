@interface WCCardUsedStoreInfo : MMObject
{
    unsigned int _distance; // +0x8
    NSString * _name; // +0x10
    double _longitude; // +0x18
    double _latitude; // +0x20
    NSString * _descriptor; // +0x28
    NSString * _phone; // +0x30
    NSString * _country; // +0x38
    NSString * _province; // +0x40
    NSString * _city; // +0x48
    NSString * _address; // +0x50
    NSString * _jumpUrl; // +0x58
    NSString * _appBrandUserName; // +0x60
    NSString * _appBrandPass; // +0x68
}
- (void)parseFromJSONDic:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (id)descriptor;
- (void)setDescriptor:(id)arg1;
- (id)phone;
- (void)setPhone:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (unsigned int)distance;
- (void)setDistance:(unsigned int)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (id)appBrandUserName;
- (void)setAppBrandUserName:(id)arg1;
- (id)appBrandPass;
- (void)setAppBrandPass:(id)arg1;
- (void).cxx_destruct;
@end


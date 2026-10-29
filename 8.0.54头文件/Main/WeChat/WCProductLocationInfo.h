@interface WCProductLocationInfo : NSObject
{
    float latitude; // +0x8
    float longitude; // +0xc
    NSString * country; // +0x10
    NSString * province; // +0x18
    NSString * city; // +0x20
    NSString * address; // +0x28
}
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (float)latitude;
- (void)setLatitude:(float)arg1;
- (float)longitude;
- (void)setLongitude:(float)arg1;
- (void).cxx_destruct;
@end


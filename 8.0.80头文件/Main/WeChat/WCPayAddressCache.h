@interface WCPayAddressCache : NSObject <PBCoding>
{
    NSString * _province; // +0x8
    NSString * _city; // +0x10
    NSString * _district; // +0x18
    double _latitude; // +0x20
    double _longitude; // +0x28
    NSString * _country; // +0x30
    NSString * _countryCode; // +0x38
    long long _positionTs; // +0x40
    NSString * _adCode; // +0x48
}
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_district;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_countryCode;
+ (void)PBArrayAdd_positionTs;
+ (void)PBArrayAdd_adCode;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)district;
- (void)setDistrict:(id)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (long long)positionTs;
- (void)setPositionTs:(long long)arg1;
- (id)adCode;
- (void)setAdCode:(id)arg1;
- (void).cxx_destruct;
@end

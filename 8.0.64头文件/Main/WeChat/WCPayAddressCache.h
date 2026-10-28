@interface WCPayAddressCache : NSObject <PBCoding>
{
    NSString * _province; // +0x8
    NSString * _city; // +0x10
    NSString * _district; // +0x18
    double _latitude; // +0x20
    double _longitude; // +0x28
}
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_district;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
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
- (void).cxx_destruct;
@end

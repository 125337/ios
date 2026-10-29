@interface BizPublishLaunchPoiPiegonInfo : NSObject
{
    NSString * _name; // +0x8
    NSString * _address; // +0x10
    NSString * _districtId; // +0x18
    NSNumber * _latitude; // +0x20
    NSNumber * _longitude; // +0x28
    NSString * _poiId; // +0x30
}
+ (id)makeWithName:(id)arg1 address:(id)arg2 districtId:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 poiId:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)name;
- (void)setName:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)districtId;
- (void)setDistrictId:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (void).cxx_destruct;
@end

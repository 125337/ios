@interface LinkLocationJumpInfo : NSObject
{
    NSString * _address; // +0x8
    NSString * _city; // +0x10
    NSString * _id; // +0x18
    NSString * _districtId; // +0x20
    NSString * _img; // +0x28
    NSString * _latitude; // +0x30
    NSString * _longitude; // +0x38
    NSString * _name; // +0x40
    NSString * _poiId; // +0x48
    NSString * _province; // +0x50
    NSString * _type; // +0x58
}
+ (id)makeWithAddress:(id)arg1 city:(id)arg2 id:(id)arg3 districtId:(id)arg4 img:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 name:(id)arg8 poiId:(id)arg9 province:(id)arg10 type:(id)arg11;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)id;
- (void)setId:(id)arg1;
- (id)districtId;
- (void)setDistrictId:(id)arg1;
- (id)img;
- (void)setImg:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (void).cxx_destruct;
@end


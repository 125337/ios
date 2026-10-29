@interface BizPoiSelectResult : NSObject
{
    BizPoiSelectCallbackTypeBox * _type; // +0x8
    NSNumber * _ignorePoi; // +0x10
    NSNumber * _longitude; // +0x18
    NSNumber * _latitude; // +0x20
    NSString * _poiId; // +0x28
    NSString * _name; // +0x30
    NSString * _address; // +0x38
    NSString * _districtId; // +0x40
    NSString * _content; // +0x48
}
+ (id)makeWithType:(id)arg1 ignorePoi:(id)arg2 longitude:(id)arg3 latitude:(id)arg4 poiId:(id)arg5 name:(id)arg6 address:(id)arg7 districtId:(id)arg8 content:(id)arg9;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)type;
- (void)setType:(id)arg1;
- (id)ignorePoi;
- (void)setIgnorePoi:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)districtId;
- (void)setDistrictId:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end

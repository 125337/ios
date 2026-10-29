@interface OMCGeographicInfo : NSObject
{
    NSString * _province; // +0x8
    NSString * _country; // +0x10
    NSString * _city; // +0x18
    NSString * _region; // +0x20
    NSString * _name; // +0x28
    NSString * _address; // +0x30
}
- (id)province;
- (void)setProvince:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (void).cxx_destruct;
@end


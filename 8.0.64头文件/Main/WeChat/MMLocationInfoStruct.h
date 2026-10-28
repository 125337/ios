@interface MMLocationInfoStruct : NSObject
{
    NSString * _province; // +0x8
    NSString * _city; // +0x10
    NSString * _district; // +0x18
    NSString * _countryCode; // +0x20
}
+ (id)LocationInfoStructWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3 countryCode:(id)arg4;
- (id)initWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3 countryCode:(id)arg4;
- (id)description;
- (id)province;
- (id)city;
- (id)district;
- (id)countryCode;
- (void).cxx_destruct;
@end

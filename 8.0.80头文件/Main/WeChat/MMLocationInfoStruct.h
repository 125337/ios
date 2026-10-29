@interface MMLocationInfoStruct : NSObject
{
    NSString * _province; // +0x8
    NSString * _city; // +0x10
    NSString * _district; // +0x18
    NSString * _countryCode; // +0x20
    NSString * _country; // +0x28
    long long _positionTs; // +0x30
    NSString * _adCode; // +0x38
}
+ (id)LocationInfoStructWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3 countryCode:(id)arg4 country:(id)arg5 positionTs:(long long)arg6 adCode:(id)arg7;
- (id)initWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3 countryCode:(id)arg4 country:(id)arg5 positionTs:(long long)arg6 adCode:(id)arg7;
- (id)description;
- (id)province;
- (id)city;
- (id)district;
- (id)countryCode;
- (id)country;
- (long long)positionTs;
- (id)adCode;
- (void).cxx_destruct;
@end

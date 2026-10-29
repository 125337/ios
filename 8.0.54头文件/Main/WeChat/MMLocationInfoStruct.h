@interface MMLocationInfoStruct : NSObject
{
    NSString * _province; // +0x8
    NSString * _city; // +0x10
    NSString * _district; // +0x18
}
+ (id)LocationInfoStructWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3;
- (id)initWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3;
- (id)description;
- (id)province;
- (id)city;
- (id)district;
- (void).cxx_destruct;
@end


@interface OVCGeoInfo : NSObject
{
    NSString * _country; // +0x8
    NSString * _city; // +0x10
}
- (id)initWithCountry:(id)arg1 city:(id)arg2;
- (id)country;
- (id)city;
- (void).cxx_destruct;
@end

@interface BizPOIInfo : NSObject
{
    NSNumber * _latitude; // +0x8
    NSNumber * _longitude; // +0x10
    NSString * _cityCode; // +0x18
}
+ (id)makeWithLatitude:(id)arg1 longitude:(id)arg2 cityCode:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)cityCode;
- (void)setCityCode:(id)arg1;
- (void).cxx_destruct;
@end

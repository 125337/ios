@interface BSPOIInfo : NSObject
{
    NSNumber * _latitude; // +0x8
    NSNumber * _longitude; // +0x10
}
+ (id)makeWithLatitude:(id)arg1 longitude:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (void).cxx_destruct;
@end

@interface MpUserLocationInfo : NSObject
{
    NSNumber * _longitude; // +0x8
    NSNumber * _latitude; // +0x10
}
+ (id)makeWithLongitude:(id)arg1 latitude:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (void).cxx_destruct;
@end

@interface EcsPoiInfo : NSObject
{
    NSNumber * _longitude; // +0x8
    NSNumber * _latitude; // +0x10
    NSNumber * _timeStamp; // +0x18
}
+ (id)makeWithLongitude:(id)arg1 latitude:(id)arg2 timeStamp:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)timeStamp;
- (void)setTimeStamp:(id)arg1;
- (void).cxx_destruct;
@end

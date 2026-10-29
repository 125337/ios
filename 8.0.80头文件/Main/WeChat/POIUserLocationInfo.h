@interface POIUserLocationInfo : NSObject
{
    double _longitude; // +0x8
    double _latitude; // +0x10
    double _horizontalAccuracy; // +0x18
    double _verticalAccuracy; // +0x20
}
+ (id)makeWithLongitude:(double)arg1 latitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)horizontalAccuracy;
- (void)setHorizontalAccuracy:(double)arg1;
- (double)verticalAccuracy;
- (void)setVerticalAccuracy:(double)arg1;
@end

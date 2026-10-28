@interface WCFinderLocationInfo : NSObject <PBCoding>
{
    double _latitude; // +0x8
    double _longitude; // +0x10
    NSDate * _timeStamp; // +0x18
}
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_timeStamp;
+ (void)initialize;
+ (id)locationInfoWithLocation:(id)arg1;
- (id)getPBPropertyTable;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (id)timeStamp;
- (void)setTimeStamp:(id)arg1;
- (void).cxx_destruct;
@end

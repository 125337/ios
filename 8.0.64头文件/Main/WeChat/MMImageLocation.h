@interface MMImageLocation : MMObject <PBCoding>
{
    double _latitude; // +0x8
    double _longitude; // +0x10
}
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)initialize;
- (id)getPBPropertyTable;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
@end

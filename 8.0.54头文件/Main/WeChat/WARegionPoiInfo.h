@interface WARegionPoiInfo : NSObject <NSCoding>
{
    NSString * _city; // +0x8
    NSString * _poiName; // +0x10
    NSString * _poiAddress; // +0x18
    CLLocationCoordinate2D _coordinate; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)poiAddress;
- (void)setPoiAddress:(id)arg1;
- (void).cxx_destruct;
@end


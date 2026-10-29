@interface QPoiInfoV2 : NSObject
{
    NSString * _name; // +0x8
    CLLocationCoordinate2D _coordinate; // +0x10
}
- (id)initWithCoordinate:(CLLocationCoordinate2D)arg1 name:(id)arg2;
- (BOOL)isValid;
- (id)name;
- (void)setName:(id)arg1;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (void).cxx_destruct;
@end


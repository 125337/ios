@interface QPoiInfo : NSObject
{
    NSString * _uid; // +0x8
    NSString * _name; // +0x10
    CLLocationCoordinate2D _coordinate; // +0x18
}
- (id)uid;
- (void)setUid:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (void).cxx_destruct;
@end

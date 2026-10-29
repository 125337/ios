@interface MMLocationIndoorItem : NSObject
{
    QIndoorInfo * _indoorInfo; // +0x8
    CLLocationCoordinate2D _location; // +0x10
}
- (CLLocationCoordinate2D)location;
- (void)setLocation:(CLLocationCoordinate2D)arg1;
- (id)indoorInfo;
- (void)setIndoorInfo:(id)arg1;
- (void).cxx_destruct;
@end

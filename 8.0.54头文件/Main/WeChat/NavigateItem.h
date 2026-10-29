@interface NavigateItem : MMObject
{
    CLLocationCoordinate2D _coordinate; // +0x8
    NSString * _name; // +0x18
    BOOL _isNameOnly; // +0x20
    NSString * _poiId; // +0x28
}
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (BOOL)isNameOnly;
- (void)setIsNameOnly:(BOOL)arg1;
- (void).cxx_destruct;
@end


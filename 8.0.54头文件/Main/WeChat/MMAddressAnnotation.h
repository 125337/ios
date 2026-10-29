@interface MMAddressAnnotation : MMObject <QAnnotation, ILocationMgrExt>
{
    unsigned long long _geoTag; // +0x8
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    id <MMAddressAnnotationDelegate> m_delegate; // +0x20
    NSString * _buildingId; // +0x28
    NSString * _floorName; // +0x30
    CLLocationCoordinate2D _coordinate; // +0x38
}
- (void)dealloc;
- (id)initWithCoordinate:(CLLocationCoordinate2D)arg1 Location:(id)arg2 POIName:(id)arg3;
- (void)safeDeleteGeocoder;
- (void)createNewRequest;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (CLLocationCoordinate2D)coordinate;
- (id)buildingId;
- (void)setBuildingId:(id)arg1;
- (id)floorName;
- (void)setFloorName:(id)arg1;
- (void).cxx_destruct;
@end


@interface MJLocationItem : NSObject
{
    NSString * _poiName; // +0x8
    NSString * _nation; // +0x10
    NSString * _province; // +0x18
    NSString * _city; // +0x20
    NSString * _district; // +0x28
    NSString * _street; // +0x30
    CLLocationCoordinate2D _coordinate; // +0x38
}
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)nation;
- (void)setNation:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)district;
- (void)setDistrict:(id)arg1;
- (id)street;
- (void)setStreet:(id)arg1;
- (void).cxx_destruct;
@end


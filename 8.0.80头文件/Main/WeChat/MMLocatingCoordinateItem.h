@interface MMLocatingCoordinateItem : NSObject
{
    NSString * _nation; // +0x8
    NSString * _province; // +0x10
    NSString * _city; // +0x18
    NSString * _district; // +0x20
    NSString * _street; // +0x28
    NSString * _route; // +0x30
    NSString * _detail; // +0x38
    NSString * _roughAddress; // +0x40
    NSString * _roughAddressWithDirection; // +0x48
    NSString * _addressDescrption; // +0x50
    NSString * _nearestPoiId; // +0x58
    NSString * _nearestPoiName; // +0x60
    NSString * _poiId; // +0x68
    NSString * _poiName; // +0x70
    double _distanceToLandmark; // +0x78
    NSString * _nationalCode; // +0x80
    double _latitude; // +0x88
    double _longitude; // +0x90
    id _requestObj; // +0x98
    NSString * _addressNameId; // +0xa0
    NSString * _countryCode; // +0xa8
    NSString * _addressCode; // +0xb0
}
- (id)description;
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
- (id)route;
- (void)setRoute:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)roughAddress;
- (void)setRoughAddress:(id)arg1;
- (id)roughAddressWithDirection;
- (void)setRoughAddressWithDirection:(id)arg1;
- (id)addressDescrption;
- (void)setAddressDescrption:(id)arg1;
- (id)nearestPoiId;
- (void)setNearestPoiId:(id)arg1;
- (id)nearestPoiName;
- (void)setNearestPoiName:(id)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (double)distanceToLandmark;
- (void)setDistanceToLandmark:(double)arg1;
- (id)nationalCode;
- (void)setNationalCode:(id)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (id)requestObj;
- (void)setRequestObj:(id)arg1;
- (id)addressNameId;
- (void)setAddressNameId:(id)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (id)addressCode;
- (void)setAddressCode:(id)arg1;
- (void).cxx_destruct;
@end

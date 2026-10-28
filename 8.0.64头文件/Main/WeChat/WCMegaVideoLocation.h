@interface WCMegaVideoLocation : NSObject <WCTColumnCoding, PBCoding>
{
    double _longitude; // +0x8
    double _latitude; // +0x10
    NSString * _city; // +0x18
    NSString * _poiName; // +0x20
    NSString * _poiAddress; // +0x28
    NSString * _poiClassifyId; // +0x30
    unsigned long long _poiClassifyType; // +0x38
    NSString * _province; // +0x40
    NSString * _region; // +0x48
    NSString * _country; // +0x50
}
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_poiAddress;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_poiClassifyType;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_region;
+ (void)PBArrayAdd_country;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoLocation:(id)arg1;
- (id)genMegaVideoLocation;
- (id)description;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)poiAddress;
- (void)setPoiAddress:(id)arg1;
- (id)poiClassifyId;
- (void)setPoiClassifyId:(id)arg1;
- (unsigned long long)poiClassifyType;
- (void)setPoiClassifyType:(unsigned long long)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (void).cxx_destruct;
@end

@interface POIInfo : NSObject <NSCoding, NSCopying>
{
    CLLocationCoordinate2D _coordinate; // +0x8
    double _scale; // +0x18
    NSString * _bid; // +0x20
    NSString * _address; // +0x28
    NSString * _poiName; // +0x30
    NSString * _poiCategoryTips; // +0x38
    NSString * _poiBusinessHour; // +0x40
    NSString * _poiPhone; // +0x48
    NSString * _poiPriceTips; // +0x50
    BOOL _isFromPoiList; // +0x58
    NSString * _infoUrl; // +0x60
    NSString * _city; // +0x68
    NSString * _country; // +0x70
    unsigned int _adCode; // +0x78
    NSString * _buildingId; // +0x80
    NSString * _floorName; // +0x88
    long long _source; // +0x90
    BOOL _isCoordinateError; // +0x98
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (BOOL)isIndoor;
- (BOOL)isPrivated;
- (BOOL)isPOIAllowForwardOrFav;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (id)bid;
- (void)setBid:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)infoUrl;
- (void)setInfoUrl:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)buildingId;
- (void)setBuildingId:(id)arg1;
- (id)floorName;
- (void)setFloorName:(id)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (BOOL)isFromPoiList;
- (void)setIsFromPoiList:(BOOL)arg1;
- (BOOL)isCoordinateError;
- (void)setIsCoordinateError:(BOOL)arg1;
- (id)poiCategoryTips;
- (void)setPoiCategoryTips:(id)arg1;
- (id)poiBusinessHour;
- (void)setPoiBusinessHour:(id)arg1;
- (id)poiPhone;
- (void)setPoiPhone:(id)arg1;
- (id)poiPriceTips;
- (void)setPoiPriceTips:(id)arg1;
- (unsigned int)adCode;
- (void)setAdCode:(unsigned int)arg1;
- (void).cxx_destruct;
@end


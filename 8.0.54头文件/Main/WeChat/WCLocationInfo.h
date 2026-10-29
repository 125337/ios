@interface WCLocationInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _isMaterialPOI; // +0x8
    int _poiClassifyType; // +0xc
    int _poiClickableStatus; // +0x10
    unsigned int _showFlag; // +0x14
    unsigned int _showType; // +0x18
    NSString * _city; // +0x20
    NSString * _poiName; // +0x28
    NSString * _poiAddress; // +0x30
    double _poiScale; // +0x38
    NSString * _poiInfoUrl; // +0x40
    NSString * _poiClassifyId; // +0x48
    NSData * _poiBuff; // +0x50
    NSString * _buildingID; // +0x58
    NSString * _floorName; // +0x60
    StoreWXaRedirectInfoItem * _storeWXaRedirectInfoItem; // +0x68
    NSString * _poiUrl; // +0x70
    long long _sourceType; // +0x78
    NSString * _country; // +0x80
    NSString * _displayPoiAddressName; // +0x88
    double _locationLongitude; // +0x90
    double _locationLatitude; // +0x98
}
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_locationLongitude;
+ (void)PBArrayAdd_locationLatitude;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_poiAddress;
+ (void)PBArrayAdd_poiScale;
+ (void)PBArrayAdd_poiInfoUrl;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_poiClassifyType;
+ (void)PBArrayAdd_poiClickableStatus;
+ (void)PBArrayAdd_poiBuff;
+ (void)PBArrayAdd_showFlag;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_poiUrl;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_displayPoiAddressName;
+ (void)PBArrayAdd_buildingID;
+ (void)PBArrayAdd_floorName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)getDisplayCity;
- (id)getDisplayPOIAddress;
- (double)poiScale;
- (BOOL)isPoiInfo;
- (BOOL)isValidForShow;
- (BOOL)isLocationValid;
- (BOOL)isPoiInfoClickable;
- (CLLocationCoordinate2D)location;
- (void)setLocation:(CLLocationCoordinate2D)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)poiAddress;
- (void)setPoiAddress:(id)arg1;
- (void)setPoiScale:(double)arg1;
- (id)poiInfoUrl;
- (void)setPoiInfoUrl:(id)arg1;
- (id)poiClassifyId;
- (void)setPoiClassifyId:(id)arg1;
- (int)poiClassifyType;
- (void)setPoiClassifyType:(int)arg1;
- (int)poiClickableStatus;
- (void)setPoiClickableStatus:(int)arg1;
- (id)poiBuff;
- (void)setPoiBuff:(id)arg1;
- (id)buildingID;
- (void)setBuildingID:(id)arg1;
- (id)floorName;
- (void)setFloorName:(id)arg1;
- (unsigned int)showFlag;
- (void)setShowFlag:(unsigned int)arg1;
- (unsigned int)showType;
- (void)setShowType:(unsigned int)arg1;
- (id)storeWXaRedirectInfoItem;
- (void)setStoreWXaRedirectInfoItem:(id)arg1;
- (id)poiUrl;
- (void)setPoiUrl:(id)arg1;
- (long long)sourceType;
- (void)setSourceType:(long long)arg1;
- (BOOL)isMaterialPOI;
- (void)setIsMaterialPOI:(BOOL)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)displayPoiAddressName;
- (void)setDisplayPoiAddressName:(id)arg1;
- (double)locationLongitude;
- (void)setLocationLongitude:(double)arg1;
- (double)locationLatitude;
- (void)setLocationLatitude:(double)arg1;
- (void).cxx_destruct;
@end


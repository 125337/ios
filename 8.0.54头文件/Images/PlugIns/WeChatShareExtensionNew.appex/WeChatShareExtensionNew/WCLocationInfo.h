@interface WCLocationInfo : NSObject <NSCoding>
{
    NSString * city; // +0x8
    CLLocationCoordinate2D location; // +0x10
    NSString * poiName; // +0x20
    NSString * poiAddress; // +0x28
    double poiScale; // +0x30
    NSString * poiInfoUrl; // +0x38
    NSString * poiClassifyId; // +0x40
    long long poiClassifyType; // +0x48
    long long poiClickableStatus; // +0x50
}
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
- (id)city;
- (void)setCity:(id)arg1;
- (CLLocationCoordinate2D)location;
- (void)setLocation:(CLLocationCoordinate2D)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)poiAddress;
- (void)setPoiAddress:(id)arg1;
- (void)setPoiScale:(double)arg1;
- (id)poiInfoUrl;
- (void)setPoiInfoUrl:(id)arg1;
- (id)poiClassifyId;
- (void)setPoiClassifyId:(id)arg1;
- (long long)poiClassifyType;
- (void)setPoiClassifyType:(long long)arg1;
- (long long)poiClickableStatus;
- (void)setPoiClickableStatus:(long long)arg1;
- (void).cxx_destruct;
@end


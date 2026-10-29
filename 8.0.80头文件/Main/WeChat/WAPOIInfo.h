@interface WAPOIInfo : NSObject <NSCoding>
{
    double _scale; // +0x8
    NSString * _bid; // +0x10
    NSString * _address; // +0x18
    NSString * _poiName; // +0x20
    NSString * _infoUrl; // +0x28
    long long _poiBizSource; // +0x30
    NSString * _waAppId; // +0x38
    NSString * _waName; // +0x40
    NSString * _waPath; // +0x48
    CLLocationCoordinate2D _coordinate; // +0x50
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
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
- (long long)poiBizSource;
- (void)setPoiBizSource:(long long)arg1;
- (id)waAppId;
- (void)setWaAppId:(id)arg1;
- (id)waName;
- (void)setWaName:(id)arg1;
- (id)waPath;
- (void)setWaPath:(id)arg1;
- (void).cxx_destruct;
@end

@interface QGPLatLng : QGPBaseModel
{
    double _lat; // +0x8
    double _lng; // +0x10
    NSNumber<QTCOptional> * _altitude; // +0x18
}
- (id)initWithLat:(double)arg1 lng:(double)arg2 altitude:(double)arg3;
- (double)lat;
- (void)setLat:(double)arg1;
- (double)lng;
- (void)setLng:(double)arg1;
- (id)altitude;
- (void)setAltitude:(id)arg1;
- (void).cxx_destruct;
@end

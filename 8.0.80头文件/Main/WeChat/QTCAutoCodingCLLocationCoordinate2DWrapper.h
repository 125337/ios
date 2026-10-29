@interface QTCAutoCodingCLLocationCoordinate2DWrapper : QTCObjcTypeAutoCodingBaseWrapper
{
    double _latitude; // +0x8
    double _longitude; // +0x10
}
+ (id)qtc_supportedObjcType;
- (id)qtc_encodeWithValue:(id)arg1;
- (id)qtc_decode;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
@end

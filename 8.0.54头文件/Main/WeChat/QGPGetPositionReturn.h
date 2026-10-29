@interface QGPGetPositionReturn : QGPReturn
{
    QGPLatLng * _value; // +0x8
}
- (id)initWithLat:(double)arg1 lng:(double)arg2 altitude:(double)arg3;
- (id)value;
- (void)setValue:(id)arg1;
- (void).cxx_destruct;
@end


@interface QPolyline : QMultiPoint
{
    QIndoorInfo * _indoorInfo; // +0x38
}
+ (id)polylineWithEncodedString:(id)arg1;
+ (id)polylineWithPoints:(struct *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithCoordinates:(CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (void)setUserData:(id)arg1;
- (id)userData;
- (struct)boundingMapRect;
- (id)initWithPoints:(struct *)arg1 count:(unsigned long long)arg2;
- (id)initWithCoordinates:(CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)indoorInfo;
- (void)setIndoorInfo:(id)arg1;
- (void).cxx_destruct;
@end

@interface DirectionsRequestItem : MMObject
{
    BOOL useGoogleApi; // +0x8
    CLLocationCoordinate2D begin; // +0x10
    CLLocationCoordinate2D end; // +0x20
}
- (CLLocationCoordinate2D)begin;
- (void)setBegin:(CLLocationCoordinate2D)arg1;
- (CLLocationCoordinate2D)end;
- (void)setEnd:(CLLocationCoordinate2D)arg1;
- (BOOL)useGoogleApi;
- (void)setUseGoogleApi:(BOOL)arg1;
@end

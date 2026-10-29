@interface QBorder : NSObject
{
    CGPath * _borderPath; // +0x8
    CGRect _borderBoundingBox; // +0x10
    CGPoint * _points; // +0x30
    int _nPoints; // +0x38
}
- (BOOL)containsCoordinate:(CLLocationCoordinate2D)arg1;
- (BOOL)containsMapRect:(struct)arg1;
- (void)constructBorderPath:(id)arg1;
- (void)constructPathWithString:(id)arg1 unitSeparator:(id)arg2 itemSeparator:(id)arg3;
- (id)initWithBorder:(id)arg1;
- (void)dealloc;
@end


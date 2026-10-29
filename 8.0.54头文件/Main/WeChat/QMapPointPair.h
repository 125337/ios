@interface QMapPointPair : NSObject
{
    struct * _points; // +0x8
    unsigned long long _pointCount; // +0x10
}
- (struct *)points;
- (void)setPoints:(struct *)arg1;
- (unsigned long long)pointCount;
- (void)setPointCount:(unsigned long long)arg1;
@end


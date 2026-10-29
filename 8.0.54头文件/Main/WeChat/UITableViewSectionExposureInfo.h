@interface UITableViewSectionExposureInfo : MMObject
{
    unsigned long long _sectionIndex; // +0x8
    double _exposureRatio; // +0x10
    CGRect _intersectionRect; // +0x18
    CGRect _sectionRect; // +0x38
}
- (unsigned long long)sectionIndex;
- (void)setSectionIndex:(unsigned long long)arg1;
- (CGRect)intersectionRect;
- (void)setIntersectionRect:(CGRect)arg1;
- (CGRect)sectionRect;
- (void)setSectionRect:(CGRect)arg1;
- (double)exposureRatio;
- (void)setExposureRatio:(double)arg1;
@end


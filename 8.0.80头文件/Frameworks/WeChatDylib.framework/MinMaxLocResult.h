@interface MinMaxLocResult : NSObject
{
    double _minVal; // +0x8
    double _maxVal; // +0x10
    Point2i * _minLoc; // +0x18
    Point2i * _maxLoc; // +0x20
}
- (id)init;
- (id)initWithMinval:(double)arg1 maxVal:(double)arg2 minLoc:(id)arg3 maxLoc:(id)arg4;
- (double)minVal;
- (void)setMinVal:(double)arg1;
- (double)maxVal;
- (void)setMaxVal:(double)arg1;
- (id)minLoc;
- (void)setMinLoc:(id)arg1;
- (id)maxLoc;
- (void)setMaxLoc:(id)arg1;
- (void).cxx_destruct;
@end

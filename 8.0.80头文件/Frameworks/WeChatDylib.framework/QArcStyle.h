@interface QArcStyle : NSObject
{
    NSArray * _gradient; // +0x8
    double _width; // +0x10
    double _degree; // +0x18
}
- (id)init;
- (void)setDegree:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)setGradient:(id)arg1;
- (id)gradient;
- (double)width;
- (double)degree;
- (void).cxx_destruct;
@end

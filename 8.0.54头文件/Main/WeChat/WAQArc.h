@interface WAQArc : QArc
{
    long long _arcId; // +0x8
    double _lineWidth; // +0x10
    UIColor * _strokeColor; // +0x18
}
- (long long)arcId;
- (void)setArcId:(long long)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (void).cxx_destruct;
@end


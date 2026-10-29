@interface CurveGradientView : UIView
{
    float _startAlpha; // +0x8
    float _endAlpha; // +0xc
    long long _simulationLayerNum; // +0x10
    unsigned long long _curveType; // +0x18
    UIColor * _baseColor; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 curveType:(unsigned long long)arg2 simulationLayerNum:(long long)arg3 baseColor:(id)arg4 startAlpha:(float)arg5 endAlpha:(float)arg6;
- (void)initSubviews;
- (id)xPoint;
- (id)calculateYValuesForCurveType;
- (long long)simulationLayerNum;
- (void)setSimulationLayerNum:(long long)arg1;
- (unsigned long long)curveType;
- (void)setCurveType:(unsigned long long)arg1;
- (id)baseColor;
- (void)setBaseColor:(id)arg1;
- (float)startAlpha;
- (void)setStartAlpha:(float)arg1;
- (float)endAlpha;
- (void)setEndAlpha:(float)arg1;
- (void).cxx_destruct;
@end

@interface PIPPerformanceComputeParamConfig : NSObject
{
    int _fpsPerformanceSwitch; // +0x8
    int _topFPSDifferenceListCnt; // +0xc
    int _topFPSLimit; // +0x10
    double _largeFPSDifference; // +0x18
    double _lessFPSDifference; // +0x20
    double _computeResultDifferenceTime; // +0x28
}
+ (id)createParamConfigWithDict:(id)arg1;
- (int)fpsPerformanceSwitch;
- (void)setFpsPerformanceSwitch:(int)arg1;
- (double)largeFPSDifference;
- (void)setLargeFPSDifference:(double)arg1;
- (double)lessFPSDifference;
- (void)setLessFPSDifference:(double)arg1;
- (int)topFPSDifferenceListCnt;
- (void)setTopFPSDifferenceListCnt:(int)arg1;
- (int)topFPSLimit;
- (void)setTopFPSLimit:(int)arg1;
- (double)computeResultDifferenceTime;
- (void)setComputeResultDifferenceTime:(double)arg1;
@end

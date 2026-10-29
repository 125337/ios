@interface CPUAnimationMetricAnalysisResult : NSObject
{
    double _invokeTime; // +0x8
    long long _analysisRet; // +0x10
}
- (double)invokeTime;
- (void)setInvokeTime:(double)arg1;
- (long long)analysisRet;
- (void)setAnalysisRet:(long long)arg1;
@end


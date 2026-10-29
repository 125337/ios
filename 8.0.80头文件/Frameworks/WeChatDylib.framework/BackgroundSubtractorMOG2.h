@interface BackgroundSubtractorMOG2 : BackgroundSubtractor
{
    Ptr<cv::BackgroundSubtractorMOG2> _nativePtrBackgroundSubtractorMOG2; // +0x8
}
+ (id)fromNative:(Ptr<cv::BackgroundSubtractorMOG2>)arg1;
- (id)initWithNativePtr:(Ptr<cv::BackgroundSubtractorMOG2>)arg1;
- (int)getHistory;
- (void)setHistory:(int)arg1;
- (int)getNMixtures;
- (void)setNMixtures:(int)arg1;
- (double)getBackgroundRatio;
- (void)setBackgroundRatio:(double)arg1;
- (double)getVarThreshold;
- (void)setVarThreshold:(double)arg1;
- (double)getVarThresholdGen;
- (void)setVarThresholdGen:(double)arg1;
- (double)getVarInit;
- (void)setVarInit:(double)arg1;
- (double)getVarMin;
- (void)setVarMin:(double)arg1;
- (double)getVarMax;
- (void)setVarMax:(double)arg1;
- (double)getComplexityReductionThreshold;
- (void)setComplexityReductionThreshold:(double)arg1;
- (BOOL)getDetectShadows;
- (void)setDetectShadows:(BOOL)arg1;
- (int)getShadowValue;
- (void)setShadowValue:(int)arg1;
- (double)getShadowThreshold;
- (void)setShadowThreshold:(double)arg1;
- (void)apply:(id)arg1 fgmask:(id)arg2 learningRate:(double)arg3;
- (void)apply:(id)arg1 fgmask:(id)arg2;
- (Ptr<cv::BackgroundSubtractorMOG2>)nativePtrBackgroundSubtractorMOG2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

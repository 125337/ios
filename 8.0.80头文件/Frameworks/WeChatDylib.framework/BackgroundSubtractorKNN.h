@interface BackgroundSubtractorKNN : BackgroundSubtractor
{
    Ptr<cv::BackgroundSubtractorKNN> _nativePtrBackgroundSubtractorKNN; // +0x8
}
+ (id)fromNative:(Ptr<cv::BackgroundSubtractorKNN>)arg1;
- (id)initWithNativePtr:(Ptr<cv::BackgroundSubtractorKNN>)arg1;
- (int)getHistory;
- (void)setHistory:(int)arg1;
- (int)getNSamples;
- (void)setNSamples:(int)arg1;
- (double)getDist2Threshold;
- (void)setDist2Threshold:(double)arg1;
- (int)getkNNSamples;
- (void)setkNNSamples:(int)arg1;
- (BOOL)getDetectShadows;
- (void)setDetectShadows:(BOOL)arg1;
- (int)getShadowValue;
- (void)setShadowValue:(int)arg1;
- (double)getShadowThreshold;
- (void)setShadowThreshold:(double)arg1;
- (Ptr<cv::BackgroundSubtractorKNN>)nativePtrBackgroundSubtractorKNN;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

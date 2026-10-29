@interface UsacParams : NSObject
{
    Ptr<cv::UsacParams> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::UsacParams>)arg1;
- (id)initWithNativePtr:(Ptr<cv::UsacParams>)arg1;
- (id)init;
- (double)confidence;
- (void)setConfidence:(double)arg1;
- (BOOL)isParallel;
- (void)setIsParallel:(BOOL)arg1;
- (int)loIterations;
- (void)setLoIterations:(int)arg1;
- (int)loMethod;
- (void)setLoMethod:(int)arg1;
- (int)loSampleSize;
- (void)setLoSampleSize:(int)arg1;
- (int)maxIterations;
- (void)setMaxIterations:(int)arg1;
- (int)neighborsSearch;
- (void)setNeighborsSearch:(int)arg1;
- (int)randomGeneratorState;
- (void)setRandomGeneratorState:(int)arg1;
- (int)sampler;
- (void)setSampler:(int)arg1;
- (int)score;
- (void)setScore:(int)arg1;
- (double)threshold;
- (void)setThreshold:(double)arg1;
- (Ptr<cv::UsacParams>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

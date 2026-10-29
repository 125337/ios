@interface DISOpticalFlow : DenseOpticalFlow
{
    Ptr<cv::DISOpticalFlow> _nativePtrDISOpticalFlow; // +0x8
}
+ (id)fromNative:(Ptr<cv::DISOpticalFlow>)arg1;
+ (int)PRESET_ULTRAFAST;
+ (int)PRESET_FAST;
+ (int)PRESET_MEDIUM;
+ (id)create:(int)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::DISOpticalFlow>)arg1;
- (int)getFinestScale;
- (void)setFinestScale:(int)arg1;
- (int)getPatchSize;
- (void)setPatchSize:(int)arg1;
- (int)getPatchStride;
- (void)setPatchStride:(int)arg1;
- (int)getGradientDescentIterations;
- (void)setGradientDescentIterations:(int)arg1;
- (int)getVariationalRefinementIterations;
- (void)setVariationalRefinementIterations:(int)arg1;
- (float)getVariationalRefinementAlpha;
- (void)setVariationalRefinementAlpha:(float)arg1;
- (float)getVariationalRefinementDelta;
- (void)setVariationalRefinementDelta:(float)arg1;
- (float)getVariationalRefinementGamma;
- (void)setVariationalRefinementGamma:(float)arg1;
- (BOOL)getUseMeanNormalization;
- (void)setUseMeanNormalization:(BOOL)arg1;
- (BOOL)getUseSpatialPropagation;
- (void)setUseSpatialPropagation:(BOOL)arg1;
- (Ptr<cv::DISOpticalFlow>)nativePtrDISOpticalFlow;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

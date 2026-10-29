@interface IntelligentScissorsMB : NSObject
{
    Ptr<cv::segmentation::IntelligentScissorsMB> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::segmentation::IntelligentScissorsMB>)arg1;
- (id)initWithNativePtr:(Ptr<cv::segmentation::IntelligentScissorsMB>)arg1;
- (id)init;
- (id)setWeights:(float)arg1 weight_gradient_direction:(float)arg2 weight_gradient_magnitude:(float)arg3;
- (id)setGradientMagnitudeMaxLimit:(float)arg1;
- (id)setGradientMagnitudeMaxLimit;
- (id)setEdgeFeatureZeroCrossingParameters:(float)arg1;
- (id)setEdgeFeatureZeroCrossingParameters;
- (id)setEdgeFeatureCannyParameters:(double)arg1 threshold2:(double)arg2 apertureSize:(int)arg3 L2gradient:(BOOL)arg4;
- (id)setEdgeFeatureCannyParameters:(double)arg1 threshold2:(double)arg2 apertureSize:(int)arg3;
- (id)setEdgeFeatureCannyParameters:(double)arg1 threshold2:(double)arg2;
- (id)applyImage:(id)arg1;
- (id)applyImageFeatures:(id)arg1 gradient_direction:(id)arg2 gradient_magnitude:(id)arg3 image:(id)arg4;
- (id)applyImageFeatures:(id)arg1 gradient_direction:(id)arg2 gradient_magnitude:(id)arg3;
- (void)buildMap:(id)arg1;
- (void)getContour:(id)arg1 contour:(id)arg2 backward:(BOOL)arg3;
- (void)getContour:(id)arg1 contour:(id)arg2;
- (Ptr<cv::segmentation::IntelligentScissorsMB>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

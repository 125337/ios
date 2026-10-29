@interface VariationalRefinement : DenseOpticalFlow
{
    Ptr<cv::VariationalRefinement> _nativePtrVariationalRefinement; // +0x8
}
+ (id)fromNative:(Ptr<cv::VariationalRefinement>)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::VariationalRefinement>)arg1;
- (void)calcUV:(id)arg1 I1:(id)arg2 flow_u:(id)arg3 flow_v:(id)arg4;
- (int)getFixedPointIterations;
- (void)setFixedPointIterations:(int)arg1;
- (int)getSorIterations;
- (void)setSorIterations:(int)arg1;
- (float)getOmega;
- (void)setOmega:(float)arg1;
- (float)getAlpha;
- (void)setAlpha:(float)arg1;
- (float)getDelta;
- (void)setDelta:(float)arg1;
- (float)getGamma;
- (void)setGamma:(float)arg1;
- (Ptr<cv::VariationalRefinement>)nativePtrVariationalRefinement;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

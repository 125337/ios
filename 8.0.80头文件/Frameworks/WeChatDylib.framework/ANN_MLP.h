@interface ANN_MLP : StatModel
{
    Ptr<cv::ml::ANN_MLP> _nativePtrANN_MLP; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::ANN_MLP>)arg1;
+ (id)create;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::ANN_MLP>)arg1;
- (void)setTrainMethod:(int)arg1 param1:(double)arg2 param2:(double)arg3;
- (void)setTrainMethod:(int)arg1 param1:(double)arg2;
- (void)setTrainMethod:(int)arg1;
- (int)getTrainMethod;
- (void)setActivationFunction:(int)arg1 param1:(double)arg2 param2:(double)arg3;
- (void)setActivationFunction:(int)arg1 param1:(double)arg2;
- (void)setActivationFunction:(int)arg1;
- (void)setLayerSizes:(id)arg1;
- (id)getLayerSizes;
- (id)getTermCriteria;
- (void)setTermCriteria:(id)arg1;
- (double)getBackpropWeightScale;
- (void)setBackpropWeightScale:(double)arg1;
- (double)getBackpropMomentumScale;
- (void)setBackpropMomentumScale:(double)arg1;
- (double)getRpropDW0;
- (void)setRpropDW0:(double)arg1;
- (double)getRpropDWPlus;
- (void)setRpropDWPlus:(double)arg1;
- (double)getRpropDWMinus;
- (void)setRpropDWMinus:(double)arg1;
- (double)getRpropDWMin;
- (void)setRpropDWMin:(double)arg1;
- (double)getRpropDWMax;
- (void)setRpropDWMax:(double)arg1;
- (double)getAnnealInitialT;
- (void)setAnnealInitialT:(double)arg1;
- (double)getAnnealFinalT;
- (void)setAnnealFinalT:(double)arg1;
- (double)getAnnealCoolingRatio;
- (void)setAnnealCoolingRatio:(double)arg1;
- (int)getAnnealItePerStep;
- (void)setAnnealItePerStep:(int)arg1;
- (id)getWeights:(int)arg1;
- (Ptr<cv::ml::ANN_MLP>)nativePtrANN_MLP;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

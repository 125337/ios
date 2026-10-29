@interface SVMSGD : StatModel
{
    Ptr<cv::ml::SVMSGD> _nativePtrSVMSGD; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::SVMSGD>)arg1;
+ (id)create;
+ (id)load:(id)arg1 nodeName:(id)arg2;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::SVMSGD>)arg1;
- (id)getWeights;
- (float)getShift;
- (void)setOptimalParameters:(int)arg1 marginType:(int)arg2;
- (void)setOptimalParameters:(int)arg1;
- (void)setOptimalParameters;
- (int)getSvmsgdType;
- (void)setSvmsgdType:(int)arg1;
- (int)getMarginType;
- (void)setMarginType:(int)arg1;
- (float)getMarginRegularization;
- (void)setMarginRegularization:(float)arg1;
- (float)getInitialStepSize;
- (void)setInitialStepSize:(float)arg1;
- (float)getStepDecreasingPower;
- (void)setStepDecreasingPower:(float)arg1;
- (id)getTermCriteria;
- (void)setTermCriteria:(id)arg1;
- (Ptr<cv::ml::SVMSGD>)nativePtrSVMSGD;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

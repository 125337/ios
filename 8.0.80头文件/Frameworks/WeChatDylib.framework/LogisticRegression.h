@interface LogisticRegression : StatModel
{
    Ptr<cv::ml::LogisticRegression> _nativePtrLogisticRegression; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::LogisticRegression>)arg1;
+ (id)create;
+ (id)load:(id)arg1 nodeName:(id)arg2;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::LogisticRegression>)arg1;
- (double)getLearningRate;
- (void)setLearningRate:(double)arg1;
- (int)getIterations;
- (void)setIterations:(int)arg1;
- (int)getRegularization;
- (void)setRegularization:(int)arg1;
- (int)getTrainMethod;
- (void)setTrainMethod:(int)arg1;
- (int)getMiniBatchSize;
- (void)setMiniBatchSize:(int)arg1;
- (id)getTermCriteria;
- (void)setTermCriteria:(id)arg1;
- (float)predict:(id)arg1 results:(id)arg2 flags:(int)arg3;
- (float)predict:(id)arg1 results:(id)arg2;
- (float)predict:(id)arg1;
- (id)get_learnt_thetas;
- (Ptr<cv::ml::LogisticRegression>)nativePtrLogisticRegression;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

@interface NormalBayesClassifier : StatModel
{
    Ptr<cv::ml::NormalBayesClassifier> _nativePtrNormalBayesClassifier; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::NormalBayesClassifier>)arg1;
+ (id)create;
+ (id)load:(id)arg1 nodeName:(id)arg2;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::NormalBayesClassifier>)arg1;
- (float)predictProb:(id)arg1 outputs:(id)arg2 outputProbs:(id)arg3 flags:(int)arg4;
- (float)predictProb:(id)arg1 outputs:(id)arg2 outputProbs:(id)arg3;
- (Ptr<cv::ml::NormalBayesClassifier>)nativePtrNormalBayesClassifier;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

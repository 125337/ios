@interface StatModel : Algorithm
{
    Ptr<cv::ml::StatModel> _nativePtrStatModel; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::StatModel>)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::StatModel>)arg1;
- (int)getVarCount;
- (BOOL)empty;
- (BOOL)isTrained;
- (BOOL)isClassifier;
- (BOOL)train:(id)arg1 flags:(int)arg2;
- (BOOL)train:(id)arg1;
- (BOOL)train:(id)arg1 layout:(int)arg2 responses:(id)arg3;
- (float)calcError:(id)arg1 test:(BOOL)arg2 resp:(id)arg3;
- (float)predict:(id)arg1 results:(id)arg2 flags:(int)arg3;
- (float)predict:(id)arg1 results:(id)arg2;
- (float)predict:(id)arg1;
- (Ptr<cv::ml::StatModel>)nativePtrStatModel;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

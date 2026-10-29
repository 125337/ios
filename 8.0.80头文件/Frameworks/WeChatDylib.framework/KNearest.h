@interface KNearest : StatModel
{
    Ptr<cv::ml::KNearest> _nativePtrKNearest; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::KNearest>)arg1;
+ (id)create;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::KNearest>)arg1;
- (int)getDefaultK;
- (void)setDefaultK:(int)arg1;
- (BOOL)getIsClassifier;
- (void)setIsClassifier:(BOOL)arg1;
- (int)getEmax;
- (void)setEmax:(int)arg1;
- (int)getAlgorithmType;
- (void)setAlgorithmType:(int)arg1;
- (float)findNearest:(id)arg1 k:(int)arg2 results:(id)arg3 neighborResponses:(id)arg4 dist:(id)arg5;
- (float)findNearest:(id)arg1 k:(int)arg2 results:(id)arg3 neighborResponses:(id)arg4;
- (float)findNearest:(id)arg1 k:(int)arg2 results:(id)arg3;
- (Ptr<cv::ml::KNearest>)nativePtrKNearest;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

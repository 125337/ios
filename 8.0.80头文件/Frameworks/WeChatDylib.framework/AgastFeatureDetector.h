@interface AgastFeatureDetector : Feature2D
{
    Ptr<cv::AgastFeatureDetector> _nativePtrAgastFeatureDetector; // +0x8
}
+ (id)fromNative:(Ptr<cv::AgastFeatureDetector>)arg1;
+ (int)THRESHOLD;
+ (int)NONMAX_SUPPRESSION;
+ (id)create:(int)arg1 nonmaxSuppression:(BOOL)arg2 type:(int)arg3;
+ (id)create:(int)arg1 nonmaxSuppression:(BOOL)arg2;
+ (id)create:(int)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::AgastFeatureDetector>)arg1;
- (void)setThreshold:(int)arg1;
- (int)getThreshold;
- (void)setNonmaxSuppression:(BOOL)arg1;
- (BOOL)getNonmaxSuppression;
- (void)setType:(int)arg1;
- (int)getType;
- (id)getDefaultName;
- (Ptr<cv::AgastFeatureDetector>)nativePtrAgastFeatureDetector;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

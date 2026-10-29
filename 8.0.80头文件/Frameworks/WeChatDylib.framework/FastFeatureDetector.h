@interface FastFeatureDetector : Feature2D
{
    Ptr<cv::FastFeatureDetector> _nativePtrFastFeatureDetector; // +0x8
}
+ (id)fromNative:(Ptr<cv::FastFeatureDetector>)arg1;
+ (int)THRESHOLD;
+ (int)NONMAX_SUPPRESSION;
+ (int)FAST_N;
+ (id)create:(int)arg1 nonmaxSuppression:(BOOL)arg2 type:(int)arg3;
+ (id)create:(int)arg1 nonmaxSuppression:(BOOL)arg2;
+ (id)create:(int)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::FastFeatureDetector>)arg1;
- (void)setThreshold:(int)arg1;
- (int)getThreshold;
- (void)setNonmaxSuppression:(BOOL)arg1;
- (BOOL)getNonmaxSuppression;
- (void)setType:(int)arg1;
- (int)getType;
- (id)getDefaultName;
- (Ptr<cv::FastFeatureDetector>)nativePtrFastFeatureDetector;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

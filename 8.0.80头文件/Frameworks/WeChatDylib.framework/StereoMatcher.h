@interface StereoMatcher : Algorithm
{
    Ptr<cv::StereoMatcher> _nativePtrStereoMatcher; // +0x8
}
+ (id)fromNative:(Ptr<cv::StereoMatcher>)arg1;
+ (int)DISP_SHIFT;
+ (int)DISP_SCALE;
- (id)initWithNativePtr:(Ptr<cv::StereoMatcher>)arg1;
- (void)compute:(id)arg1 right:(id)arg2 disparity:(id)arg3;
- (int)getMinDisparity;
- (void)setMinDisparity:(int)arg1;
- (int)getNumDisparities;
- (void)setNumDisparities:(int)arg1;
- (int)getBlockSize;
- (void)setBlockSize:(int)arg1;
- (int)getSpeckleWindowSize;
- (void)setSpeckleWindowSize:(int)arg1;
- (int)getSpeckleRange;
- (void)setSpeckleRange:(int)arg1;
- (int)getDisp12MaxDiff;
- (void)setDisp12MaxDiff:(int)arg1;
- (Ptr<cv::StereoMatcher>)nativePtrStereoMatcher;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

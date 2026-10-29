@interface StereoSGBM : StereoMatcher
{
    Ptr<cv::StereoSGBM> _nativePtrStereoSGBM; // +0x8
}
+ (id)fromNative:(Ptr<cv::StereoSGBM>)arg1;
+ (int)MODE_SGBM;
+ (int)MODE_HH;
+ (int)MODE_SGBM_3WAY;
+ (int)MODE_HH4;
+ (id)create:(int)arg1 numDisparities:(int)arg2 blockSize:(int)arg3 P1:(int)arg4 P2:(int)arg5 disp12MaxDiff:(int)arg6 preFilterCap:(int)arg7 uniquenessRatio:(int)arg8 speckleWindowSize:(int)arg9 speckleRange:(int)arg10 mode:(int)arg11;
+ (id)create:(int)arg1 numDisparities:(int)arg2 blockSize:(int)arg3 P1:(int)arg4 P2:(int)arg5 disp12MaxDiff:(int)arg6 preFilterCap:(int)arg7 uniquenessRatio:(int)arg8 speckleWindowSize:(int)arg9 speckleRange:(int)arg10;
+ (id)create:(int)arg1 numDisparities:(int)arg2 blockSize:(int)arg3 P1:(int)arg4 P2:(int)arg5 disp12MaxDiff:(int)arg6 preFilterCap:(int)arg7 uniquenessRatio:(int)arg8 speckleWindowSize:(int)arg9;
+ (id)create:(int)arg1 numDisparities:(int)arg2 blockSize:(int)arg3 P1:(int)arg4 P2:(int)arg5 disp12MaxDiff:(int)arg6 preFilterCap:(int)arg7 uniquenessRatio:(int)arg8;
+ (id)create:(int)arg1 numDisparities:(int)arg2 blockSize:(int)arg3 P1:(int)arg4 P2:(int)arg5 disp12MaxDiff:(int)arg6 preFilterCap:(int)arg7;
+ (id)create:(int)arg1 numDisparities:(int)arg2 blockSize:(int)arg3 P1:(int)arg4 P2:(int)arg5 disp12MaxDiff:(int)arg6;
+ (id)create:(int)arg1 numDisparities:(int)arg2 blockSize:(int)arg3 P1:(int)arg4 P2:(int)arg5;
+ (id)create:(int)arg1 numDisparities:(int)arg2 blockSize:(int)arg3 P1:(int)arg4;
+ (id)create:(int)arg1 numDisparities:(int)arg2 blockSize:(int)arg3;
+ (id)create:(int)arg1 numDisparities:(int)arg2;
+ (id)create:(int)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::StereoSGBM>)arg1;
- (int)getPreFilterCap;
- (void)setPreFilterCap:(int)arg1;
- (int)getUniquenessRatio;
- (void)setUniquenessRatio:(int)arg1;
- (int)getP1;
- (void)setP1:(int)arg1;
- (int)getP2;
- (void)setP2:(int)arg1;
- (int)getMode;
- (void)setMode:(int)arg1;
- (Ptr<cv::StereoSGBM>)nativePtrStereoSGBM;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

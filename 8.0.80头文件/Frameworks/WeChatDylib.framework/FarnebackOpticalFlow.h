@interface FarnebackOpticalFlow : DenseOpticalFlow
{
    Ptr<cv::FarnebackOpticalFlow> _nativePtrFarnebackOpticalFlow; // +0x8
}
+ (id)fromNative:(Ptr<cv::FarnebackOpticalFlow>)arg1;
+ (id)create:(int)arg1 pyrScale:(double)arg2 fastPyramids:(BOOL)arg3 winSize:(int)arg4 numIters:(int)arg5 polyN:(int)arg6 polySigma:(double)arg7 flags:(int)arg8;
+ (id)create:(int)arg1 pyrScale:(double)arg2 fastPyramids:(BOOL)arg3 winSize:(int)arg4 numIters:(int)arg5 polyN:(int)arg6 polySigma:(double)arg7;
+ (id)create:(int)arg1 pyrScale:(double)arg2 fastPyramids:(BOOL)arg3 winSize:(int)arg4 numIters:(int)arg5 polyN:(int)arg6;
+ (id)create:(int)arg1 pyrScale:(double)arg2 fastPyramids:(BOOL)arg3 winSize:(int)arg4 numIters:(int)arg5;
+ (id)create:(int)arg1 pyrScale:(double)arg2 fastPyramids:(BOOL)arg3 winSize:(int)arg4;
+ (id)create:(int)arg1 pyrScale:(double)arg2 fastPyramids:(BOOL)arg3;
+ (id)create:(int)arg1 pyrScale:(double)arg2;
+ (id)create:(int)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::FarnebackOpticalFlow>)arg1;
- (int)getNumLevels;
- (void)setNumLevels:(int)arg1;
- (double)getPyrScale;
- (void)setPyrScale:(double)arg1;
- (BOOL)getFastPyramids;
- (void)setFastPyramids:(BOOL)arg1;
- (int)getWinSize;
- (void)setWinSize:(int)arg1;
- (int)getNumIters;
- (void)setNumIters:(int)arg1;
- (int)getPolyN;
- (void)setPolyN:(int)arg1;
- (double)getPolySigma;
- (void)setPolySigma:(double)arg1;
- (int)getFlags;
- (void)setFlags:(int)arg1;
- (Ptr<cv::FarnebackOpticalFlow>)nativePtrFarnebackOpticalFlow;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

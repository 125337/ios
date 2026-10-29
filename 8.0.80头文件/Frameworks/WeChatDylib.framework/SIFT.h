@interface SIFT : Feature2D
{
    Ptr<cv::SIFT> _nativePtrSIFT; // +0x8
}
+ (id)fromNative:(Ptr<cv::SIFT>)arg1;
+ (id)create:(int)arg1 nOctaveLayers:(int)arg2 contrastThreshold:(double)arg3 edgeThreshold:(double)arg4 sigma:(double)arg5;
+ (id)create:(int)arg1 nOctaveLayers:(int)arg2 contrastThreshold:(double)arg3 edgeThreshold:(double)arg4;
+ (id)create:(int)arg1 nOctaveLayers:(int)arg2 contrastThreshold:(double)arg3;
+ (id)create:(int)arg1 nOctaveLayers:(int)arg2;
+ (id)create:(int)arg1;
+ (id)create;
+ (id)create:(int)arg1 nOctaveLayers:(int)arg2 contrastThreshold:(double)arg3 edgeThreshold:(double)arg4 sigma:(double)arg5 descriptorType:(int)arg6;
- (id)initWithNativePtr:(Ptr<cv::SIFT>)arg1;
- (id)getDefaultName;
- (Ptr<cv::SIFT>)nativePtrSIFT;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

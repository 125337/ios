@interface KAZE : Feature2D
{
    Ptr<cv::KAZE> _nativePtrKAZE; // +0x8
}
+ (id)fromNative:(Ptr<cv::KAZE>)arg1;
+ (id)create:(BOOL)arg1 upright:(BOOL)arg2 threshold:(float)arg3 nOctaves:(int)arg4 nOctaveLayers:(int)arg5 diffusivity:(int)arg6;
+ (id)create:(BOOL)arg1 upright:(BOOL)arg2 threshold:(float)arg3 nOctaves:(int)arg4 nOctaveLayers:(int)arg5;
+ (id)create:(BOOL)arg1 upright:(BOOL)arg2 threshold:(float)arg3 nOctaves:(int)arg4;
+ (id)create:(BOOL)arg1 upright:(BOOL)arg2 threshold:(float)arg3;
+ (id)create:(BOOL)arg1 upright:(BOOL)arg2;
+ (id)create:(BOOL)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::KAZE>)arg1;
- (void)setExtended:(BOOL)arg1;
- (BOOL)getExtended;
- (void)setUpright:(BOOL)arg1;
- (BOOL)getUpright;
- (void)setThreshold:(double)arg1;
- (double)getThreshold;
- (void)setNOctaves:(int)arg1;
- (int)getNOctaves;
- (void)setNOctaveLayers:(int)arg1;
- (int)getNOctaveLayers;
- (void)setDiffusivity:(int)arg1;
- (int)getDiffusivity;
- (id)getDefaultName;
- (Ptr<cv::KAZE>)nativePtrKAZE;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

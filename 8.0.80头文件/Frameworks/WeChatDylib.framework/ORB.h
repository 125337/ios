@interface ORB : Feature2D
{
    Ptr<cv::ORB> _nativePtrORB; // +0x8
}
+ (id)fromNative:(Ptr<cv::ORB>)arg1;
+ (id)create:(int)arg1 scaleFactor:(float)arg2 nlevels:(int)arg3 edgeThreshold:(int)arg4 firstLevel:(int)arg5 WTA_K:(int)arg6 scoreType:(int)arg7 patchSize:(int)arg8 fastThreshold:(int)arg9;
+ (id)create:(int)arg1 scaleFactor:(float)arg2 nlevels:(int)arg3 edgeThreshold:(int)arg4 firstLevel:(int)arg5 WTA_K:(int)arg6 scoreType:(int)arg7 patchSize:(int)arg8;
+ (id)create:(int)arg1 scaleFactor:(float)arg2 nlevels:(int)arg3 edgeThreshold:(int)arg4 firstLevel:(int)arg5 WTA_K:(int)arg6 scoreType:(int)arg7;
+ (id)create:(int)arg1 scaleFactor:(float)arg2 nlevels:(int)arg3 edgeThreshold:(int)arg4 firstLevel:(int)arg5 WTA_K:(int)arg6;
+ (id)create:(int)arg1 scaleFactor:(float)arg2 nlevels:(int)arg3 edgeThreshold:(int)arg4 firstLevel:(int)arg5;
+ (id)create:(int)arg1 scaleFactor:(float)arg2 nlevels:(int)arg3 edgeThreshold:(int)arg4;
+ (id)create:(int)arg1 scaleFactor:(float)arg2 nlevels:(int)arg3;
+ (id)create:(int)arg1 scaleFactor:(float)arg2;
+ (id)create:(int)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::ORB>)arg1;
- (void)setMaxFeatures:(int)arg1;
- (int)getMaxFeatures;
- (void)setScaleFactor:(double)arg1;
- (double)getScaleFactor;
- (void)setNLevels:(int)arg1;
- (int)getNLevels;
- (void)setEdgeThreshold:(int)arg1;
- (int)getEdgeThreshold;
- (void)setFirstLevel:(int)arg1;
- (int)getFirstLevel;
- (void)setWTA_K:(int)arg1;
- (int)getWTA_K;
- (void)setScoreType:(int)arg1;
- (int)getScoreType;
- (void)setPatchSize:(int)arg1;
- (int)getPatchSize;
- (void)setFastThreshold:(int)arg1;
- (int)getFastThreshold;
- (id)getDefaultName;
- (Ptr<cv::ORB>)nativePtrORB;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

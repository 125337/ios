@interface MSER : Feature2D
{
    Ptr<cv::MSER> _nativePtrMSER; // +0x8
}
+ (id)fromNative:(Ptr<cv::MSER>)arg1;
+ (id)create:(int)arg1 min_area:(int)arg2 max_area:(int)arg3 max_variation:(double)arg4 min_diversity:(double)arg5 max_evolution:(int)arg6 area_threshold:(double)arg7 min_margin:(double)arg8 edge_blur_size:(int)arg9;
+ (id)create:(int)arg1 min_area:(int)arg2 max_area:(int)arg3 max_variation:(double)arg4 min_diversity:(double)arg5 max_evolution:(int)arg6 area_threshold:(double)arg7 min_margin:(double)arg8;
+ (id)create:(int)arg1 min_area:(int)arg2 max_area:(int)arg3 max_variation:(double)arg4 min_diversity:(double)arg5 max_evolution:(int)arg6 area_threshold:(double)arg7;
+ (id)create:(int)arg1 min_area:(int)arg2 max_area:(int)arg3 max_variation:(double)arg4 min_diversity:(double)arg5 max_evolution:(int)arg6;
+ (id)create:(int)arg1 min_area:(int)arg2 max_area:(int)arg3 max_variation:(double)arg4 min_diversity:(double)arg5;
+ (id)create:(int)arg1 min_area:(int)arg2 max_area:(int)arg3 max_variation:(double)arg4;
+ (id)create:(int)arg1 min_area:(int)arg2 max_area:(int)arg3;
+ (id)create:(int)arg1 min_area:(int)arg2;
+ (id)create:(int)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::MSER>)arg1;
- (void)detectRegions:(id)arg1 msers:(id)arg2 bboxes:(id)arg3;
- (void)setDelta:(int)arg1;
- (int)getDelta;
- (void)setMinArea:(int)arg1;
- (int)getMinArea;
- (void)setMaxArea:(int)arg1;
- (int)getMaxArea;
- (void)setPass2Only:(BOOL)arg1;
- (BOOL)getPass2Only;
- (id)getDefaultName;
- (Ptr<cv::MSER>)nativePtrMSER;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

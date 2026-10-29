@interface StereoBM : StereoMatcher
{
    Ptr<cv::StereoBM> _nativePtrStereoBM; // +0x8
}
+ (id)fromNative:(Ptr<cv::StereoBM>)arg1;
+ (int)PREFILTER_NORMALIZED_RESPONSE;
+ (int)PREFILTER_XSOBEL;
+ (id)create:(int)arg1 blockSize:(int)arg2;
+ (id)create:(int)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::StereoBM>)arg1;
- (int)getPreFilterType;
- (void)setPreFilterType:(int)arg1;
- (int)getPreFilterSize;
- (void)setPreFilterSize:(int)arg1;
- (int)getPreFilterCap;
- (void)setPreFilterCap:(int)arg1;
- (int)getTextureThreshold;
- (void)setTextureThreshold:(int)arg1;
- (int)getUniquenessRatio;
- (void)setUniquenessRatio:(int)arg1;
- (int)getSmallerBlockSize;
- (void)setSmallerBlockSize:(int)arg1;
- (id)getROI1;
- (void)setROI1:(id)arg1;
- (id)getROI2;
- (void)setROI2:(id)arg1;
- (Ptr<cv::StereoBM>)nativePtrStereoBM;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

@interface GFTTDetector : Feature2D
{
    Ptr<cv::GFTTDetector> _nativePtrGFTTDetector; // +0x8
}
+ (id)fromNative:(Ptr<cv::GFTTDetector>)arg1;
+ (id)create:(int)arg1 qualityLevel:(double)arg2 minDistance:(double)arg3 blockSize:(int)arg4 useHarrisDetector:(BOOL)arg5 k:(double)arg6;
+ (id)create:(int)arg1 qualityLevel:(double)arg2 minDistance:(double)arg3 blockSize:(int)arg4 useHarrisDetector:(BOOL)arg5;
+ (id)create:(int)arg1 qualityLevel:(double)arg2 minDistance:(double)arg3 blockSize:(int)arg4;
+ (id)create:(int)arg1 qualityLevel:(double)arg2 minDistance:(double)arg3;
+ (id)create:(int)arg1 qualityLevel:(double)arg2;
+ (id)create:(int)arg1;
+ (id)create;
+ (id)create:(int)arg1 qualityLevel:(double)arg2 minDistance:(double)arg3 blockSize:(int)arg4 gradiantSize:(int)arg5 useHarrisDetector:(BOOL)arg6 k:(double)arg7;
+ (id)create:(int)arg1 qualityLevel:(double)arg2 minDistance:(double)arg3 blockSize:(int)arg4 gradiantSize:(int)arg5 useHarrisDetector:(BOOL)arg6;
+ (id)create:(int)arg1 qualityLevel:(double)arg2 minDistance:(double)arg3 blockSize:(int)arg4 gradiantSize:(int)arg5;
- (id)initWithNativePtr:(Ptr<cv::GFTTDetector>)arg1;
- (void)setMaxFeatures:(int)arg1;
- (int)getMaxFeatures;
- (void)setQualityLevel:(double)arg1;
- (double)getQualityLevel;
- (void)setMinDistance:(double)arg1;
- (double)getMinDistance;
- (void)setBlockSize:(int)arg1;
- (int)getBlockSize;
- (void)setHarrisDetector:(BOOL)arg1;
- (BOOL)getHarrisDetector;
- (void)setK:(double)arg1;
- (double)getK;
- (id)getDefaultName;
- (Ptr<cv::GFTTDetector>)nativePtrGFTTDetector;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

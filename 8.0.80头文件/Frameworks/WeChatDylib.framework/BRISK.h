@interface BRISK : Feature2D
{
    Ptr<cv::BRISK> _nativePtrBRISK; // +0x8
}
+ (id)fromNative:(Ptr<cv::BRISK>)arg1;
+ (id)create:(int)arg1 octaves:(int)arg2 patternScale:(float)arg3;
+ (id)create:(int)arg1 octaves:(int)arg2;
+ (id)create:(int)arg1;
+ (id)create;
+ (id)create:(id)arg1 numberList:(id)arg2 dMax:(float)arg3 dMin:(float)arg4 indexChange:(id)arg5;
+ (id)create:(id)arg1 numberList:(id)arg2 dMax:(float)arg3 dMin:(float)arg4;
+ (id)create:(id)arg1 numberList:(id)arg2 dMax:(float)arg3;
+ (id)create:(id)arg1 numberList:(id)arg2;
+ (id)create:(int)arg1 octaves:(int)arg2 radiusList:(id)arg3 numberList:(id)arg4 dMax:(float)arg5 dMin:(float)arg6 indexChange:(id)arg7;
+ (id)create:(int)arg1 octaves:(int)arg2 radiusList:(id)arg3 numberList:(id)arg4 dMax:(float)arg5 dMin:(float)arg6;
+ (id)create:(int)arg1 octaves:(int)arg2 radiusList:(id)arg3 numberList:(id)arg4 dMax:(float)arg5;
+ (id)create:(int)arg1 octaves:(int)arg2 radiusList:(id)arg3 numberList:(id)arg4;
- (id)initWithNativePtr:(Ptr<cv::BRISK>)arg1;
- (id)getDefaultName;
- (void)setThreshold:(int)arg1;
- (int)getThreshold;
- (void)setOctaves:(int)arg1;
- (int)getOctaves;
- (Ptr<cv::BRISK>)nativePtrBRISK;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

@interface DescriptorMatcher : Algorithm
{
    Ptr<cv::DescriptorMatcher> _nativePtrDescriptorMatcher; // +0x8
}
+ (id)fromNative:(Ptr<cv::DescriptorMatcher>)arg1;
+ (id)create2:(id)arg1;
+ (id)create:(int)arg1;
- (id)initWithNativePtr:(Ptr<cv::DescriptorMatcher>)arg1;
- (void)add:(id)arg1;
- (id)getTrainDescriptors;
- (void)clear;
- (BOOL)empty;
- (BOOL)isMaskSupported;
- (void)train;
- (void)match:(id)arg1 trainDescriptors:(id)arg2 matches:(id)arg3 mask:(id)arg4;
- (void)match:(id)arg1 trainDescriptors:(id)arg2 matches:(id)arg3;
- (void)knnMatch:(id)arg1 trainDescriptors:(id)arg2 matches:(id)arg3 k:(int)arg4 mask:(id)arg5 compactResult:(BOOL)arg6;
- (void)knnMatch:(id)arg1 trainDescriptors:(id)arg2 matches:(id)arg3 k:(int)arg4 mask:(id)arg5;
- (void)knnMatch:(id)arg1 trainDescriptors:(id)arg2 matches:(id)arg3 k:(int)arg4;
- (void)radiusMatch:(id)arg1 trainDescriptors:(id)arg2 matches:(id)arg3 maxDistance:(float)arg4 mask:(id)arg5 compactResult:(BOOL)arg6;
- (void)radiusMatch:(id)arg1 trainDescriptors:(id)arg2 matches:(id)arg3 maxDistance:(float)arg4 mask:(id)arg5;
- (void)radiusMatch:(id)arg1 trainDescriptors:(id)arg2 matches:(id)arg3 maxDistance:(float)arg4;
- (void)match:(id)arg1 matches:(id)arg2 masks:(id)arg3;
- (void)match:(id)arg1 matches:(id)arg2;
- (void)knnMatch:(id)arg1 matches:(id)arg2 k:(int)arg3 masks:(id)arg4 compactResult:(BOOL)arg5;
- (void)knnMatch:(id)arg1 matches:(id)arg2 k:(int)arg3 masks:(id)arg4;
- (void)knnMatch:(id)arg1 matches:(id)arg2 k:(int)arg3;
- (void)radiusMatch:(id)arg1 matches:(id)arg2 maxDistance:(float)arg3 masks:(id)arg4 compactResult:(BOOL)arg5;
- (void)radiusMatch:(id)arg1 matches:(id)arg2 maxDistance:(float)arg3 masks:(id)arg4;
- (void)radiusMatch:(id)arg1 matches:(id)arg2 maxDistance:(float)arg3;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (id)clone:(BOOL)arg1;
- (id)clone;
- (Ptr<cv::DescriptorMatcher>)nativePtrDescriptorMatcher;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

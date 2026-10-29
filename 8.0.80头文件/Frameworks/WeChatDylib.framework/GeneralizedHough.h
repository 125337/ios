@interface GeneralizedHough : Algorithm
{
    Ptr<cv::GeneralizedHough> _nativePtrGeneralizedHough; // +0x8
}
+ (id)fromNative:(Ptr<cv::GeneralizedHough>)arg1;
- (id)initWithNativePtr:(Ptr<cv::GeneralizedHough>)arg1;
- (void)setTemplate:(id)arg1 templCenter:(id)arg2;
- (void)setTemplate:(id)arg1;
- (void)setTemplate:(id)arg1 dx:(id)arg2 dy:(id)arg3 templCenter:(id)arg4;
- (void)setTemplate:(id)arg1 dx:(id)arg2 dy:(id)arg3;
- (void)detect:(id)arg1 positions:(id)arg2 votes:(id)arg3;
- (void)detect:(id)arg1 positions:(id)arg2;
- (void)detect:(id)arg1 dx:(id)arg2 dy:(id)arg3 positions:(id)arg4 votes:(id)arg5;
- (void)detect:(id)arg1 dx:(id)arg2 dy:(id)arg3 positions:(id)arg4;
- (void)setCannyLowThresh:(int)arg1;
- (int)getCannyLowThresh;
- (void)setCannyHighThresh:(int)arg1;
- (int)getCannyHighThresh;
- (void)setMinDist:(double)arg1;
- (double)getMinDist;
- (void)setDp:(double)arg1;
- (double)getDp;
- (void)setMaxBufferSize:(int)arg1;
- (int)getMaxBufferSize;
- (Ptr<cv::GeneralizedHough>)nativePtrGeneralizedHough;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

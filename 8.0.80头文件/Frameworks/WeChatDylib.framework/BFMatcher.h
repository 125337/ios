@interface BFMatcher : DescriptorMatcher
{
    Ptr<cv::BFMatcher> _nativePtrBFMatcher; // +0x8
}
+ (id)fromNative:(Ptr<cv::BFMatcher>)arg1;
+ (id)createBFMatcher:(int)arg1 crossCheck:(BOOL)arg2;
+ (id)createBFMatcher:(int)arg1;
+ (id)createBFMatcher;
- (id)initWithNativePtr:(Ptr<cv::BFMatcher>)arg1;
- (id)initWithNormType:(int)arg1 crossCheck:(BOOL)arg2;
- (id)initWithNormType:(int)arg1;
- (id)init;
- (Ptr<cv::BFMatcher>)nativePtrBFMatcher;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

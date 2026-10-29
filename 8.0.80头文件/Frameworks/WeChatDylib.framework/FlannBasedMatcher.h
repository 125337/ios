@interface FlannBasedMatcher : DescriptorMatcher
{
    Ptr<cv::FlannBasedMatcher> _nativePtrFlannBasedMatcher; // +0x8
}
+ (id)fromNative:(Ptr<cv::FlannBasedMatcher>)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::FlannBasedMatcher>)arg1;
- (id)initWithIndexParams;
- (Ptr<cv::FlannBasedMatcher>)nativePtrFlannBasedMatcher;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

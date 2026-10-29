@interface BackgroundSubtractor : Algorithm
{
    Ptr<cv::BackgroundSubtractor> _nativePtrBackgroundSubtractor; // +0x8
}
+ (id)fromNative:(Ptr<cv::BackgroundSubtractor>)arg1;
- (id)initWithNativePtr:(Ptr<cv::BackgroundSubtractor>)arg1;
- (void)apply:(id)arg1 fgmask:(id)arg2 learningRate:(double)arg3;
- (void)apply:(id)arg1 fgmask:(id)arg2;
- (void)getBackgroundImage:(id)arg1;
- (Ptr<cv::BackgroundSubtractor>)nativePtrBackgroundSubtractor;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

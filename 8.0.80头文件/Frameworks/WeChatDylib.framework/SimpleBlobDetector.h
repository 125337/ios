@interface SimpleBlobDetector : Feature2D
{
    Ptr<cv::SimpleBlobDetector> _nativePtrSimpleBlobDetector; // +0x8
}
+ (id)fromNative:(Ptr<cv::SimpleBlobDetector>)arg1;
+ (id)create:(id)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::SimpleBlobDetector>)arg1;
- (id)getDefaultName;
- (Ptr<cv::SimpleBlobDetector>)nativePtrSimpleBlobDetector;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

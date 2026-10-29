@interface Tracker : NSObject
{
    Ptr<cv::Tracker> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::Tracker>)arg1;
- (id)initWithNativePtr:(Ptr<cv::Tracker>)arg1;
- (void)init:(id)arg1 boundingBox:(id)arg2;
- (BOOL)update:(id)arg1 boundingBox:(id)arg2;
- (Ptr<cv::Tracker>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

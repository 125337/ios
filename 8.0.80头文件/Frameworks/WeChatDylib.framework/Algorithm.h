@interface Algorithm : NSObject
{
    Ptr<cv::Algorithm> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::Algorithm>)arg1;
- (id)initWithNativePtr:(Ptr<cv::Algorithm>)arg1;
- (void)clear;
- (BOOL)empty;
- (void)save:(id)arg1;
- (id)getDefaultName;
- (Ptr<cv::Algorithm>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

@interface TrackerDaSiamRPNParams : NSObject
{
    Ptr<cv::TrackerDaSiamRPN::Params> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::TrackerDaSiamRPN::Params>)arg1;
- (id)initWithNativePtr:(Ptr<cv::TrackerDaSiamRPN::Params>)arg1;
- (id)init;
- (id)model;
- (void)setModel:(id)arg1;
- (id)kernel_cls1;
- (void)setKernel_cls1:(id)arg1;
- (id)kernel_r1;
- (void)setKernel_r1:(id)arg1;
- (int)backend;
- (void)setBackend:(int)arg1;
- (int)target;
- (void)setTarget:(int)arg1;
- (Ptr<cv::TrackerDaSiamRPN::Params>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

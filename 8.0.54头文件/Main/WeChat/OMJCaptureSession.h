@interface OMJCaptureSession : NSObject
{
    XMJCaptureSessionOptions _options; // +0x8
    SharedPtr<XMJCaptureSession> _backCaptureSession; // +0x10
}
- (id)initWithDimensionLevel:(unsigned long long)arg1 frontCamera:(BOOL)arg2;
- (void)setupAndStartRunning;
- (void)stopRunning;
- (XMJCaptureSessionOptions)options;
- (void)setOptions:(XMJCaptureSessionOptions)arg1;
- (SharedPtr<XMJCaptureSession>)backCaptureSession;
- (void)setBackCaptureSession:(SharedPtr<XMJCaptureSession>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


@interface CameraDeviceAppleDelegate : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate>
{
    weak_ptr<liteav::video::CameraDeviceAppleCallback> callback_; // +0x8
    id /* block */ _metaOutputHandler; // +0x18
    NSObject<OS_dispatch_queue> * _captureDelegateQueue; // +0x20
}
- (id)init;
- (void)setCallback:(weak_ptr<liteav::video::CameraDeviceAppleCallback>)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (id /* block */)metaOutputHandler;
- (void)setMetaOutputHandler:(id /* block */)arg1;
- (id)captureDelegateQueue;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

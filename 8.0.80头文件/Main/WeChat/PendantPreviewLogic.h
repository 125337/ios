@interface PendantPreviewLogic : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, ICdnComMgrExt>
{
    BOOL _isFrontCamera; // +0x8
    BOOL _dropFirstFrame; // +0x9
    BOOL _reloadEffectFinish; // +0xa
    id <PendantPreviewLogicDelegate> _delegate; // +0x10
    NSString * _url; // +0x18
    AVCaptureDeviceInput * _deviceInput; // +0x20
    AVAssetWriterInput * _assetWriterInput; // +0x28
    AVCaptureVideoDataOutput * _dataOutput; // +0x30
    AVCaptureSession * _session; // +0x38
    AVCaptureDevice * _videoDevice; // +0x40
    AVCaptureConnection * _videoConnection; // +0x48
    NSObject<OS_dispatch_queue> * _bufferQueue; // +0x50
    XEffectEffectManager * _effectManager; // +0x58
    EmoticonLensPackage * _lensPackage; // +0x60
    NSRecursiveLock * _lock; // +0x68
}
- (id)initWithDelegate:(id)arg1;
- (void)resetEffectManager;
- (void)changePreviewType:(long long)arg1;
- (void)loadPendantResourceWithURL:(id)arg1;
- (id)cachePathForURLString:(id)arg1;
- (id)downloadPathForURLString:(id)arg1;
- (void)setLensPackage:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)startCamera;
- (void)stopCamera;
- (void)switchCamera;
- (id)deviceWithPosition:(long long)arg1;
- (BOOL)switchCameraToPosition:(long long)arg1;
- (void)setFPS:(long long)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)previewLayer;
- (void)clearAll;
- (void)applyPendantEffect:(id)arg1;
- (id)getCaptureImage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)deviceInput;
- (void)setDeviceInput:(id)arg1;
- (id)assetWriterInput;
- (void)setAssetWriterInput:(id)arg1;
- (id)dataOutput;
- (void)setDataOutput:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)videoDevice;
- (void)setVideoDevice:(id)arg1;
- (id)videoConnection;
- (void)setVideoConnection:(id)arg1;
- (id)bufferQueue;
- (void)setBufferQueue:(id)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (BOOL)dropFirstFrame;
- (void)setDropFirstFrame:(BOOL)arg1;
- (id)effectManager;
- (void)setEffectManager:(id)arg1;
- (BOOL)reloadEffectFinish;
- (void)setReloadEffectFinish:(BOOL)arg1;
- (id)lensPackage;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

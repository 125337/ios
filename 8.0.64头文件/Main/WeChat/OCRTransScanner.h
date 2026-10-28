@interface OCRTransScanner : MMObject <IOCRTransMgrExt, CameraScannerViewDelegate>
{
    CGRect _cropRect; // +0x8
    int _imageType; // +0x28
    unsigned int _sessionId; // +0x2c
    id <OCRTransScannerDelegate> _delegate; // +0x30
    unsigned long long _frameCount; // +0x38
    long long _orientation; // +0x40
    CGRect _cameraPhotoCropRect; // +0x48
    UploadDetectLogic * _uploadDetectLogic; // +0x68
    BOOL _enableUpload; // +0x70
    char * _sendImage; // +0x78
    unsigned int _scene; // +0x80
    UIImage * _sourceImage; // +0x88
    CameraScannerViewWrapper * _cameraScannerWrapper; // +0x90
}
- (id)initWithCameraScannerViewWrapper:(id)arg1;
- (void)dealloc;
- (CGRect)cropRect;
- (void)setCropRect:(CGRect)arg1;
- (void)start;
- (void)stop;
- (void)enableUpload:(BOOL)arg1;
- (void)fireWithScene:(unsigned int)arg1;
- (unsigned int)sendImage:(id)arg1 scene:(unsigned int)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (unsigned int)notifySendData:(id)arg1;
- (void)onSendTransImageData:(unsigned int)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (id)sourceImage;
- (void)setSourceImage:(id)arg1;
- (id)cameraScannerWrapper;
- (void)setCameraScannerWrapper:(id)arg1;
- (void).cxx_destruct;
@end

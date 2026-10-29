@interface TXCCustomVideoRenderer : TXCVideoBindableObject <TXIVideoRenderer>
{
    CIContext * _ciContext; // +0x8
    TXCDispatchQueue * _queue; // +0x10
    TXCVideoRenderConfig * _config; // +0x18
    id <TXCCustomVideoRendererDelegate> _delegate; // +0x20
    TXCGlFrameBuffer * _frameBuffer; // +0x28
    id <TXIGlContext> _context; // +0x30
    TXCVideoFrameCoords * _frameCoords; // +0x38
    TXCFramebufferDrawer * _drawer; // +0x40
    TXCRgbToYuvFilter * _rgbToYuvFilter; // +0x48
    TXCPixelBufferPool * _pbPool; // +0x50
    TXCVideoFrame * _tempNV12Fame; // +0x58
}
- (id)initWithQueue:(id)arg1 context:(id)arg2 config:(id)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)pbPool;
- (BOOL)createGlObjectsIfNeeded;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (id)dataFrameFromFrame:(id)arg1;
- (BOOL)isGLSupportFormat:(unsigned long long)arg1;
- (BOOL)canSkipFrame:(id)arg1;
- (BOOL)needTransform;
- (BOOL)isOutputDimensionsSwapped;
- (void)processInBackground:(id)arg1;
- (void)callbackFrame:(id)arg1;
- (id)queue;
- (id)config;
- (id)delegate;
- (id)frameBuffer;
- (void)setFrameBuffer:(id)arg1;
- (id)context;
- (id)frameCoords;
- (void)setFrameCoords:(id)arg1;
- (id)drawer;
- (void)setDrawer:(id)arg1;
- (id)rgbToYuvFilter;
- (void)setRgbToYuvFilter:(id)arg1;
- (void)setPbPool:(id)arg1;
- (id)tempNV12Fame;
- (void)setTempNV12Fame:(id)arg1;
- (void).cxx_destruct;
@end


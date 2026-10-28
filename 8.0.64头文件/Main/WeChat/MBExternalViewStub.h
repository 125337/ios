@interface MBExternalViewStub : UIView
{
    BOOL _firstFrame; // +0x8
    int _canvasId; // +0xc
    id /* block */ _oneTimeFrameCallback; // +0x10
    id /* block */ _frameCallback; // +0x18
    MagicBrushCore * _mb; // +0x20
    id <IMBExternalViewDelegate> _externalViewDelegate; // +0x28
    id /* block */ _whiteCheckCallback; // +0x30
    long long _dangerControl; // +0x38
    id <IMBExternalTextureDelegate> _externalTextureDelegate; // +0x40
    EAGLView * _eaglView; // +0x48
    id /* block */ _callback; // +0x50
    __CVBuffer * _pixelbuffer; // +0x58
    __CVBuffer * _copiedPixelBuffer; // +0x60
    id /* block */ _imageBlock; // +0x68
}
- (id)initWithExternalViewDelegate:(id)arg1;
- (void)setupCallback;
- (__CVBuffer *)copyPixelBuffer;
- (BOOL)setFlutterCanvasMaxFps:(BOOL)arg1 duration:(int)arg2;
- (void)dealloc;
- (void)registerPixelBufferCallback:(id /* block */)arg1;
- (void)unregisterPixelBufferCallback;
- (void)notifyTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)notifyTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)notifyTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)notifyTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onExternalTouchEvent:(id)arg1;
- (void)onExternalTouchEventForMB:(id)arg1;
- (void)takeSnapshot:(id /* block */)arg1;
- (BOOL)checkPixelBufferEnable;
- (id)imageFromPixelBuffer:(__CVBuffer *)arg1;
- (void)wrapWhiteCheckDelayForOneSecond;
- (void)doWhiteCheckAndCallback;
- (id)tryDetectCVPixelBufferEmpty:(__CVBuffer *)arg1;
- (id /* block */)oneTimeFrameCallback;
- (void)setOneTimeFrameCallback:(id /* block */)arg1;
- (id /* block */)frameCallback;
- (void)setFrameCallback:(id /* block */)arg1;
- (int)canvasId;
- (void)setCanvasId:(int)arg1;
- (id)mb;
- (void)setMb:(id)arg1;
- (id)externalViewDelegate;
- (void)setExternalViewDelegate:(id)arg1;
- (id /* block */)whiteCheckCallback;
- (void)setWhiteCheckCallback:(id /* block */)arg1;
- (long long)dangerControl;
- (void)setDangerControl:(long long)arg1;
- (id)externalTextureDelegate;
- (void)setExternalTextureDelegate:(id)arg1;
- (id)eaglView;
- (void)setEaglView:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (BOOL)firstFrame;
- (void)setFirstFrame:(BOOL)arg1;
- (__CVBuffer *)pixelbuffer;
- (void)setPixelbuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)copiedPixelBuffer;
- (void)setCopiedPixelBuffer:(__CVBuffer *)arg1;
- (id /* block */)imageBlock;
- (void)setImageBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

@interface WAEJTextureCapture : NSObject
{
    WAEJJavaScriptView * _scriptView; // +0x8
    WAEJCanvasContext * _canvas; // +0x10
    EJStatusHolder * _status; // +0x18
    BOOL _available; // +0x20
    BOOL _storage; // +0x21
    int _viewWidth; // +0x24
    int _viewHeight; // +0x28
    int _buffWidth; // +0x2c
    int _buffHeight; // +0x30
    unsigned int _presentCount; // +0x34
    unsigned int _flipCount; // +0x38
    unsigned int _captureCount; // +0x3c
    BOOL hook; // +0x40
    BOOL needSwitch; // +0x41
    BOOL ready; // +0x42
    BOOL offScreen; // +0x43
    BOOL _hooked; // +0x44
    BOOL _switchNeed; // +0x45
    BOOL _autoCapture; // +0x46
    unsigned int _frameBuffer; // +0x48
    unsigned int _renderBuffer; // +0x4c
    NSMutableDictionary * _delegates; // +0x50
    EJTextureHolder * _renderTexture; // +0x58
    EJTextureHolder * _flipTexture; // +0x60
    EAGLContext * _context; // +0x68
    EJTextureProgram * _program1; // +0x70
    EJTextureProgram * _program2; // +0x78
}
- (id)initWithCanvas:(id)arg1 canvas:(id)arg2;
- (void)dealloc;
- (BOOL)create;
- (void)destroy;
- (BOOL)checkAvailable;
- (BOOL)ready;
- (BOOL)hook;
- (BOOL)needSwitch;
- (__CVBuffer *)pixelBuffer;
- (unsigned int)realWidth;
- (unsigned int)realHeight;
- (BOOL)bindTexture:(unsigned int)arg1 height:(unsigned int)arg2;
- (BOOL)renderLayer:(id)arg1;
- (BOOL)renderStorage:(id)arg1;
- (BOOL)renderPresent:(int)arg1 height:(int)arg2;
- (BOOL)flip:(int)arg1 height:(int)arg2;
- (void)capture;
- (void)presentCapture:(int)arg1 height:(int)arg2;
- (void)recordCapture:(int)arg1 height:(int)arg2;
- (void)runOnMainThread:(id /* block */)arg1;
- (BOOL)addCaptureDelegate:(unsigned int)arg1 options:(id)arg2 delegate:(id)arg3;
- (BOOL)delCaptureDelegate:(unsigned int)arg1;
- (BOOL)offScreen;
- (void)setOffScreen:(BOOL)arg1;
- (int)buffWidth;
- (int)buffHeight;
- (BOOL)hooked;
- (void)setHooked:(BOOL)arg1;
- (BOOL)switchNeed;
- (void)setSwitchNeed:(BOOL)arg1;
- (BOOL)autoCapture;
- (void)setAutoCapture:(BOOL)arg1;
- (id)delegates;
- (void)setDelegates:(id)arg1;
- (id)renderTexture;
- (void)setRenderTexture:(id)arg1;
- (id)flipTexture;
- (void)setFlipTexture:(id)arg1;
- (id)context;
- (unsigned int)frameBuffer;
- (void)setFrameBuffer:(unsigned int)arg1;
- (unsigned int)renderBuffer;
- (void)setRenderBuffer:(unsigned int)arg1;
- (id)program1;
- (void)setProgram1:(id)arg1;
- (id)program2;
- (void)setProgram2:(id)arg1;
@end

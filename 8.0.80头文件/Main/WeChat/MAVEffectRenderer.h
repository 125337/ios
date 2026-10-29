@interface MAVEffectRenderer : NSObject
{
    MAVEffectManager * _effectManager; // +0x8
    MAVCopyRendererMetal * _screenRender; // +0x10
    int _width; // +0x18
    int _height; // +0x1c
    BOOL _sizeChanged; // +0x20
    NSMutableArray * _inputArray; // +0x28
    __CVBuffer * _outputTexture; // +0x30
    __CVBuffer * _outputPixelBuffer; // +0x38
    NSMutableArray * _textureRefCache; // +0x40
    MAVMetalContext * _context; // +0x48
}
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)getEffectManager;
- (void)setSize:(int)arg1 height:(int)arg2;
- (void)addInput:(__CVBuffer *)arg1;
- (void)addInput:(__CVBuffer *)arg1 rotate:(long long)arg2;
- (void)addInputWithInfo:(id)arg1;
- (void)render;
- (void)renderWithPts:(long long)arg1;
- (void)renderToScreen:(id)arg1;
- (void)renderToScreen:(id)arg1 WithPts:(long long)arg2;
- (void)createInput:(id)arg1;
- (__CVBuffer *)getPixelBuffer;
- (id)getTexture;
- (void)checkOutput;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMLayerCompositer : NSObject
{
    shared_ptr<WeVisionUtil::LayerCompositer> _nativeCompositer; // +0x8
    MMLayer * _canvas; // +0x18
    CGSize _canvasSize; // +0x20
}
- (id)init;
- (id)canvas;
- (id)createSubLayer;
- (void)renderToTexture:(unsigned int)arg1;
- (void)renderToCurrentFrameBuffer;
- (void)setCanvasSize:(CGSize)arg1;
- (void)setBackgroundColorWithR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
- (void)setBackgroundImage:(unsigned int)arg1;
- (CGSize)canvasSize;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


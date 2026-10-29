@interface TXCLcoalRenderCallbackAdapter : NSObject <TXILocalVideoRendererDelegate>
{
    weak_ptr<liteav::video::VideoRenderer::Client> _client; // +0x8
    void * _owner; // +0x18
    CGSize _renderSize; // +0x20
    CGSize _viewSizeInPixels; // +0x30
}
- (id)initWithClient:(shared_ptr<liteav::video::VideoRenderer::Client>)arg1 withOwner:(void *)arg2;
- (void)videoRenderer:(id)arg1 onSizeChange:(CGSize)arg2;
- (void)videoRenderer:(id)arg1 onSizeInPixelsChange:(CGSize)arg2;
- (void)videoRenderer:(id)arg1 onTouchPoint:(CGPoint)arg2;
- (void)videoRenderer:(id)arg1 onPinchScale:(double)arg2;
- (CGSize)viewSizeInPixels;
- (void)setViewSizeInPixels:(CGSize)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

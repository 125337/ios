@interface XImageView : UIView
{
    atomic<bool> _isMetalLayerActive; // +0x8
    BOOL _disableOpaqueRender; // +0x9
    XImageViewRenderer * _renderer; // +0x10
    XSampleBufferDisplayView * _sampleBufferDisplayView; // +0x18
    XImageMetalView * _metalView; // +0x20
    unsigned long long _videoContentMode; // +0x28
    CGSize _realSize; // +0x30
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)sampleBufferDisplayView;
- (void)setUpViews:(CGSize)arg1;
- (void)layoutSubviews;
- (BOOL)isSampleBufferDisplayViewAlive;
- (void)setVideoContentMode:(unsigned long long)arg1;
- (void)activeSampleBufferDisplayLayer;
- (void)activeMetalLayer;
- (id)metalLayer;
- (void)setDisableOpaqueRender:(BOOL)arg1;
- (CGSize)realSize;
- (void)setRealSize:(CGSize)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (void)setSampleBufferDisplayView:(id)arg1;
- (id)metalView;
- (void)setMetalView:(id)arg1;
- (unsigned long long)videoContentMode;
- (BOOL)disableOpaqueRender;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


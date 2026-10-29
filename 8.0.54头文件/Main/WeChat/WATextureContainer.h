@interface WATextureContainer : NSObject <FlutterTexture>
{
    unsigned int _lastPixelFormatType; // +0x8
    UIView<WANativeViewTextureInterface> * _nativeView; // +0x10
    long long _viewId; // +0x18
    WATexturePlugin * _plugin; // +0x20
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x28
    long long _textureId; // +0x30
    __CVBuffer * _availablePixelBuffer; // +0x38
    double _scaleX; // +0x40
    double _scaleY; // +0x48
    CIContext * _ciContext; // +0x50
    __CVBuffer * _ciContextOutBuffer; // +0x58
    CGSize _ciContextOutBufferSize; // +0x60
}
- (id)init;
- (void)destroy;
- (void)dealloc;
- (void)setNativeView:(id)arg1;
- (__CVBuffer *)copyPixelBuffer;
- (void)onTextureUnregistered:(id)arg1;
- (void)checkTextureAvailable;
- (void)checkContentMode:(CGSize)arg1;
- (void)updateTextureScaleX:(double)arg1 scaleY:(double)arg2;
- (id)nativeView;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)registrar;
- (void)setRegistrar:(id)arg1;
- (long long)textureId;
- (void)setTextureId:(long long)arg1;
- (__CVBuffer *)availablePixelBuffer;
- (void)setAvailablePixelBuffer:(__CVBuffer *)arg1;
- (unsigned int)lastPixelFormatType;
- (void)setLastPixelFormatType:(unsigned int)arg1;
- (double)scaleX;
- (void)setScaleX:(double)arg1;
- (double)scaleY;
- (void)setScaleY:(double)arg1;
- (id)ciContext;
- (void)setCiContext:(id)arg1;
- (__CVBuffer *)ciContextOutBuffer;
- (void)setCiContextOutBuffer:(__CVBuffer *)arg1;
- (CGSize)ciContextOutBufferSize;
- (void)setCiContextOutBufferSize:(CGSize)arg1;
- (void).cxx_destruct;
@end


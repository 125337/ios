@interface TXCMetalRenderer : NSObject <TXCMetalRenderer>
{
    id <TXCMetalRenderer> _rendererImpl; // +0x8
    TXCMetalContext * _context; // +0x10
    TXCMetalDisplayConfig * _displayConfig; // +0x18
}
- (id)initWithContext:(id)arg1;
- (unsigned long long)convertFormatToRenderType:(unsigned int)arg1;
- (unsigned long long)convertTextureFormatToRenderType:(unsigned long long)arg1;
- (unsigned long long)convertNativeFormatToRenderType:(int)arg1;
- (void)updateRenderWithRenderTypeIfNeed:(unsigned long long)arg1;
- (void)uploadNativePixelFrame:(const NativePixelFrame *)arg1;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (id)drawMetalTexture:(id)arg1 toTarget:(id)arg2 coordinate:(id)arg3;
- (unsigned long long)rendererType;
- (void)setDisplayConfig:(id)arg1;
- (void).cxx_destruct;
@end

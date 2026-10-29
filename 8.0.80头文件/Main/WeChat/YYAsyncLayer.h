@interface YYAsyncLayer : CALayer
{
    YYSentinel * _sentinel; // +0x8
    long long _displayMode; // +0x10
}
+ (CGContext *)_newImageContextWithOptions:(CGSize)arg1 opaque:(BOOL)arg2 scale:(double)arg3;
+ (void)_endImageContext:(CGContext *)arg1;
+ (void)_fillBackgroundColor:(CGColor *)arg1 size:(CGSize)arg2 inContext:(CGContext *)arg3;
- (id)init;
- (void)dealloc;
- (void)setNeedsDisplay;
- (BOOL)isShowingOnKeyWindow;
- (void)display;
- (void)setContents:(id)arg1;
- (void)clearContents;
- (void)_displayAsync:(BOOL)arg1;
- (void)_cancelAsyncDisplay;
- (void)_setLayerContents:(id)arg1;
- (long long)displayMode;
- (void)setDisplayMode:(long long)arg1;
- (void).cxx_destruct;
@end

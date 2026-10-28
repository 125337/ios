@interface YYAsyncLayer : CALayer
{
    YYSentinel * _sentinel; // +0x8
    BOOL _displaysAsynchronously; // +0x10
}
+ (id)defaultValueForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setNeedsDisplay;
- (BOOL)isShowingOnKeyWindow;
- (void)display;
- (void)setContents:(id)arg1;
- (void)clearContents;
- (void)_displayAsync:(BOOL)arg1;
- (CGContext *)_newImageContextWithOptions:(CGSize)arg1 opaque:(BOOL)arg2 scale:(double)arg3;
- (void)_endImageContext:(CGContext *)arg1;
- (void)_fillBackgroundColor:(CGColor *)arg1 size:(CGSize)arg2 inContext:(CGContext *)arg3;
- (void)_cancelAsyncDisplay;
- (void)_setLayerContents:(id)arg1;
- (BOOL)displaysAsynchronously;
- (void)setDisplaysAsynchronously:(BOOL)arg1;
- (void).cxx_destruct;
@end

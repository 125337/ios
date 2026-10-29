@interface YYTextAsyncLayer : CALayer
{
    _YYTextSentinel * _sentinel; // +0x8
    BOOL _displaysAsynchronously; // +0x10
}
+ (id)defaultValueForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)display;
- (void)_displayAsync:(BOOL)arg1;
- (void)_cancelAsyncDisplay;
- (BOOL)displaysAsynchronously;
- (void)setDisplaysAsynchronously:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface CTFrameWrap : NSObject
{
    __CTFrame * _frameRef; // +0x8
    CGSize _frameSize; // +0x10
}
- (id)initWithFrameRef:(__CTFrame *)arg1;
- (void)dealloc;
- (__CTFrame *)frameRef;
- (void)setFrameRef:(__CTFrame *)arg1;
- (CGSize)frameSize;
- (void)setFrameSize:(CGSize)arg1;
@end


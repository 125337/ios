@interface OMJCoordinatingDesc : NSObject
{
    unsigned long long _canvasOriginType; // +0x8
    CGSize _canvasSize; // +0x10
}
- (id)initWithCanvasSize:(CGSize)arg1 canvasOriginType:(unsigned long long)arg2;
- (CGSize)canvasSize;
- (unsigned long long)canvasOriginType;
@end


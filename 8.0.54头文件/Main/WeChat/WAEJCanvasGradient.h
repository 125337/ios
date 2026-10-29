@interface WAEJCanvasGradient : NSObject <EJFillable>
{
    int type; // +0x8
    struct p1; // +0xc
    struct p2; // +0x14
    float r1; // +0x1c
    float r2; // +0x20
    NSMutableArray * colorStops; // +0x28
    WAEJTexture * texture; // +0x30
}
- (id)initLinearGradientWithP1:(struct)arg1 p2:(struct)arg2;
- (id)initRadialGradientWithP1:(struct)arg1 r1:(float)arg2 p2:(struct)arg3 r2:(float)arg4;
- (void)dealloc;
- (void)addStopWithColor:(union)arg1 at:(float)arg2;
- (void)addStopWithRawColor:(union)arg1 at:(float)arg2;
- (id)texture;
- (void)rebuild;
- (id)getPixelsWithWidth:(int)arg1 forSortedStops:(id)arg2;
- (int)type;
- (struct)p1;
- (struct)p2;
- (float)r1;
- (float)r2;
- (id)colorStops;
@end


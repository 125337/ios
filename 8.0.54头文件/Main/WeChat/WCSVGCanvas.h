@interface WCSVGCanvas : NSObject
{
    long long _type; // +0x8
    NSMutableArray * _components; // +0x10
    WCSVGCanvas * _mask; // +0x18
    double _opacity; // +0x20
    WCSVGImageConfig * _associateImageConfig; // +0x28
    CGRect _bounds; // +0x30
}
- (id)initWithType:(long long)arg1;
- (void)setAssociateImageConfig:(id)arg1;
- (id)image;
- (void)drawInContext:(CGContext *)arg1 withBounds:(CGRect)arg2;
- (void)addMask:(id)arg1 toContext:(CGContext *)arg2;
- (void)drawAllComponentsInContext:(CGContext *)arg1;
- (id)maskImageFromImage:(id)arg1;
- (double)opacity;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)components;
- (void)setComponents:(id)arg1;
- (id)mask;
- (void)setMask:(id)arg1;
- (CGRect)bounds;
- (void)setBounds:(CGRect)arg1;
- (void)setOpacity:(double)arg1;
- (id)associateImageConfig;
- (void).cxx_destruct;
@end


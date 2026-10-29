@interface AgentMagicBrushCardSize : NSObject
{
    BOOL _autoHeight; // +0x8
    double _width; // +0x10
    double _height; // +0x18
}
+ (id)makeWithWidth:(double)arg1 height:(double)arg2 autoHeight:(BOOL)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (BOOL)autoHeight;
- (void)setAutoHeight:(BOOL)arg1;
@end

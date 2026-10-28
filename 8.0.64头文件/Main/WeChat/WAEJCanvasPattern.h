@interface WAEJCanvasPattern : NSObject <EJFillable>
{
    WAEJTexture * texture; // +0x8
    int repeat; // +0x10
}
- (id)initWithTexture:(id)arg1 repeat:(int)arg2;
- (void)dealloc;
- (id)texture;
- (int)repeat;
@end

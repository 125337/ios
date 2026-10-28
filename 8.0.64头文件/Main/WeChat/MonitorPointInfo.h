@interface MonitorPointInfo : NSObject
{
    CGPoint _normalizedCoordinate; // +0x8
    struct _argbColor; // +0x18
}
- (CGPoint)normalizedCoordinate;
- (void)setNormalizedCoordinate:(CGPoint)arg1;
- (struct)argbColor;
- (void)setArgbColor:(struct)arg1;
@end

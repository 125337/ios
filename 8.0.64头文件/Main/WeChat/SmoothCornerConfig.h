@interface SmoothCornerConfig : NSObject
{
    double _cornerRadius; // +0x8
    double _smoothRate; // +0x10
    unsigned long long _corners; // +0x18
}
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (double)smoothRate;
- (void)setSmoothRate:(double)arg1;
- (unsigned long long)corners;
- (void)setCorners:(unsigned long long)arg1;
@end

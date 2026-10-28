@interface MMLiveCommentPerformanceStateReport : NSObject
{
    long long _state; // +0x8
    unsigned long long _normalModeAllKeepSeconds; // +0x10
    unsigned long long _smoothModeAllKeepSeconds; // +0x18
}
+ (id)createDefaultStateReport:(long long)arg1;
- (void)increaseNormalModeAllKeepSeconds;
- (void)increaseSmoothModeAllKeepSeconds;
- (long long)state;
- (void)setState:(long long)arg1;
- (unsigned long long)normalModeAllKeepSeconds;
- (void)setNormalModeAllKeepSeconds:(unsigned long long)arg1;
- (unsigned long long)smoothModeAllKeepSeconds;
- (void)setSmoothModeAllKeepSeconds:(unsigned long long)arg1;
@end

@interface TRTCAudioVolumeEvaluateParams : NSObject <NSCopying>
{
    BOOL _enableVadDetection; // +0x8
    unsigned long long _interval; // +0x10
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (BOOL)enableVadDetection;
- (void)setEnableVadDetection:(BOOL)arg1;
@end


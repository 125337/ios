@interface CameraScanTrackedBox : NSObject
{
    BOOL _isValid; // +0x8
    long long _trackId; // +0x10
    double _confidence; // +0x18
    CGRect _normalizeRect; // +0x20
}
- (id)init;
- (CGRect)normalizeRect;
- (void)setNormalizeRect:(CGRect)arg1;
- (long long)trackId;
- (void)setTrackId:(long long)arg1;
- (double)confidence;
- (void)setConfidence:(double)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
@end

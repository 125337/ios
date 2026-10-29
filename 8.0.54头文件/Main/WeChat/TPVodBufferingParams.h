@interface TPVodBufferingParams : NSObject
{
    float _playSpeed; // +0x8
    long long _costTimeMs; // +0x10
}
- (id)init;
- (float)playSpeed;
- (void)setPlaySpeed:(float)arg1;
- (long long)costTimeMs;
- (void)setCostTimeMs:(long long)arg1;
@end


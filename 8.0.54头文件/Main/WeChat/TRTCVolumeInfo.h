@interface TRTCVolumeInfo : NSObject
{
    NSString * _userId; // +0x8
    unsigned long long _volume; // +0x10
    long long _vad; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (unsigned long long)volume;
- (void)setVolume:(unsigned long long)arg1;
- (long long)vad;
- (void)setVad:(long long)arg1;
- (void).cxx_destruct;
@end


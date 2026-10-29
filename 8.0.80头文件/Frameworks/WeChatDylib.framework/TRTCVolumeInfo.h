@interface TRTCVolumeInfo : NSObject
{
    float _pitch; // +0x8
    NSString * _userId; // +0x10
    unsigned long long _volume; // +0x18
    long long _vad; // +0x20
    NSArray * _spectrumData; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (unsigned long long)volume;
- (void)setVolume:(unsigned long long)arg1;
- (long long)vad;
- (void)setVad:(long long)arg1;
- (float)pitch;
- (void)setPitch:(float)arg1;
- (id)spectrumData;
- (void)setSpectrumData:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMLiveAudioVolumeInfo : NSObject
{
    long long _business; // +0x8
    long long _volume; // +0x10
}
+ (id)createAudioVolume:(long long)arg1 business:(long long)arg2;
- (id)description;
- (long long)business;
- (void)setBusiness:(long long)arg1;
- (long long)volume;
- (void)setVolume:(long long)arg1;
@end

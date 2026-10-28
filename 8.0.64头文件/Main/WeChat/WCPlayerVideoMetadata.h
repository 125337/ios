@interface WCPlayerVideoMetadata : NSObject
{
    int _level; // +0x8
    int _profile; // +0xc
    int _colorSpace; // +0x10
    int _codecId; // +0x14
    int _colorPrimaries; // +0x18
    int _audioSampleRate; // +0x1c
    int _audioChannels; // +0x20
    int _audioFormat; // +0x24
    double _duration; // +0x28
    NSString * _profileName; // +0x30
    NSString * _videoCodecID; // +0x38
    NSString * _videoCodecTag; // +0x40
    long long _videoBitRate; // +0x48
    NSString * _audioCodecID; // +0x50
    NSString * _audioCodecTag; // +0x58
    long long _audioBitRate; // +0x60
    CGSize _size; // +0x68
}
- (id)description;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (int)level;
- (void)setLevel:(int)arg1;
- (int)profile;
- (void)setProfile:(int)arg1;
- (id)profileName;
- (void)setProfileName:(id)arg1;
- (int)colorSpace;
- (void)setColorSpace:(int)arg1;
- (int)codecId;
- (void)setCodecId:(int)arg1;
- (int)colorPrimaries;
- (void)setColorPrimaries:(int)arg1;
- (id)videoCodecID;
- (void)setVideoCodecID:(id)arg1;
- (id)videoCodecTag;
- (void)setVideoCodecTag:(id)arg1;
- (long long)videoBitRate;
- (void)setVideoBitRate:(long long)arg1;
- (id)audioCodecID;
- (void)setAudioCodecID:(id)arg1;
- (id)audioCodecTag;
- (void)setAudioCodecTag:(id)arg1;
- (long long)audioBitRate;
- (void)setAudioBitRate:(long long)arg1;
- (int)audioSampleRate;
- (void)setAudioSampleRate:(int)arg1;
- (int)audioChannels;
- (void)setAudioChannels:(int)arg1;
- (int)audioFormat;
- (void)setAudioFormat:(int)arg1;
- (void).cxx_destruct;
@end

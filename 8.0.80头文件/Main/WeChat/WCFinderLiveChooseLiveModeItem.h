@interface WCFinderLiveChooseLiveModeItem : NSObject
{
    BOOL _isSelect; // +0x8
    unsigned long long _liveMode; // +0x10
    unsigned long long _videoSubType; // +0x18
    unsigned long long _audioSubType; // +0x20
    NSString * _title; // +0x28
    NSString * _subTitle; // +0x30
}
- (unsigned long long)liveMode;
- (void)setLiveMode:(unsigned long long)arg1;
- (unsigned long long)videoSubType;
- (void)setVideoSubType:(unsigned long long)arg1;
- (unsigned long long)audioSubType;
- (void)setAudioSubType:(unsigned long long)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMBGMSelectedMusicResult : NSObject
{
    BOOL _isMusicOn; // +0x8
    BOOL _isLyricOn; // +0x9
    BOOL _isOstOn; // +0xa
    BOOL _supportsTrim; // +0xb
    float _bgmVolume; // +0xc
    unsigned long long _musicStartTimeInMs; // +0x10
    unsigned long long _songDurationInMs; // +0x18
    unsigned long long _originalSongDurationInMs; // +0x20
    unsigned long long _musicSelectSource; // +0x28
    NSString * _musicFilePath; // +0x30
    id <MMBGMSelectedMusicDataProtocol> _musicData; // +0x38
}
- (id)genRecommendedMusicInfo;
- (id)genSelectedMusicInfo;
- (id)init;
- (void)setMusicData:(id)arg1;
- (void)p_resetPlaybackStateWithMusicData:(id)arg1;
- (BOOL)isMusicOn;
- (void)setIsMusicOn:(BOOL)arg1;
- (BOOL)isLyricOn;
- (void)setIsLyricOn:(BOOL)arg1;
- (BOOL)isOstOn;
- (void)setIsOstOn:(BOOL)arg1;
- (float)bgmVolume;
- (void)setBgmVolume:(float)arg1;
- (unsigned long long)musicStartTimeInMs;
- (void)setMusicStartTimeInMs:(unsigned long long)arg1;
- (unsigned long long)songDurationInMs;
- (void)setSongDurationInMs:(unsigned long long)arg1;
- (unsigned long long)originalSongDurationInMs;
- (void)setOriginalSongDurationInMs:(unsigned long long)arg1;
- (BOOL)supportsTrim;
- (void)setSupportsTrim:(BOOL)arg1;
- (unsigned long long)musicSelectSource;
- (void)setMusicSelectSource:(unsigned long long)arg1;
- (id)musicFilePath;
- (void)setMusicFilePath:(id)arg1;
- (id)musicData;
- (void).cxx_destruct;
@end

@interface EditVideoBGMSelectedMusicInfo : MMObject <NSCoding>
{
    BOOL _isMajorOwned; // +0x8
    BOOL _isAutoSelected; // +0x9
    int _isSearchMusic; // +0xc
    int _isFromMusicTag; // +0x10
    int _isMusicOn; // +0x14
    int _isOriginSoundOn; // +0x18
    float _bgmVolume; // +0x1c
    int _bgmType; // +0x20
    int _finderBgmItemType; // +0x24
    long long _requestId; // +0x28
    long long _musicIndex; // +0x30
    RecommendedMusicInfo * _musicInfo; // +0x38
    NSString * _musicFilePath; // +0x40
    NSString * _searchMusicTag; // +0x48
    unsigned long long _musicStartTimeInMs; // +0x50
    unsigned long long _songDurationInMs; // +0x58
    NSString * _bgmId; // +0x60
}
- (id)genBGMSelectedMusicResult;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasBgmMusic;
- (long long)requestId;
- (void)setRequestId:(long long)arg1;
- (long long)musicIndex;
- (void)setMusicIndex:(long long)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)musicFilePath;
- (void)setMusicFilePath:(id)arg1;
- (int)isSearchMusic;
- (void)setIsSearchMusic:(int)arg1;
- (int)isFromMusicTag;
- (void)setIsFromMusicTag:(int)arg1;
- (id)searchMusicTag;
- (void)setSearchMusicTag:(id)arg1;
- (int)isMusicOn;
- (void)setIsMusicOn:(int)arg1;
- (int)isOriginSoundOn;
- (void)setIsOriginSoundOn:(int)arg1;
- (unsigned long long)musicStartTimeInMs;
- (void)setMusicStartTimeInMs:(unsigned long long)arg1;
- (unsigned long long)songDurationInMs;
- (void)setSongDurationInMs:(unsigned long long)arg1;
- (float)bgmVolume;
- (void)setBgmVolume:(float)arg1;
- (int)bgmType;
- (void)setBgmType:(int)arg1;
- (id)bgmId;
- (void)setBgmId:(id)arg1;
- (BOOL)isMajorOwned;
- (void)setIsMajorOwned:(BOOL)arg1;
- (int)finderBgmItemType;
- (void)setFinderBgmItemType:(int)arg1;
- (BOOL)isAutoSelected;
- (void)setIsAutoSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

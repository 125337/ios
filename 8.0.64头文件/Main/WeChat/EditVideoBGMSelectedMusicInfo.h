@interface EditVideoBGMSelectedMusicInfo : MMObject <NSCoding>
{
    int _isSearchMusic; // +0x8
    int _isFromMusicTag; // +0xc
    int _isMusicOn; // +0x10
    int _isOriginSoundOn; // +0x14
    long long _requestId; // +0x18
    long long _musicIndex; // +0x20
    RecommendedMusicInfo * _musicInfo; // +0x28
    NSString * _musicFilePath; // +0x30
    NSString * _searchMusicTag; // +0x38
}
- (id)genBGMSelectedMusicResult;
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
- (void).cxx_destruct;
@end

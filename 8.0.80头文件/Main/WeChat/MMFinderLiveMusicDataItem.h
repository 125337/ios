@interface MMFinderLiveMusicDataItem : MMLiveMusicDataItem
{
    BOOL _playable; // +0x8
    BOOL _isInBgMusicList; // +0x9
    unsigned int _duration; // +0xc
    NSString * _musicName; // +0x10
    NSString * _musicAnchor; // +0x18
    NSString * _albumName; // +0x20
    NSString * _albumPicUrl; // +0x28
    NSString * _genre; // +0x30
    NSString * _publicTime; // +0x38
}
- (id)initWithFinderLiveMusicInfo:(id)arg1;
- (id)musicDurationString;
- (id)musicName;
- (void)setMusicName:(id)arg1;
- (id)musicAnchor;
- (void)setMusicAnchor:(id)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (id)albumPicUrl;
- (void)setAlbumPicUrl:(id)arg1;
- (id)genre;
- (void)setGenre:(id)arg1;
- (BOOL)playable;
- (void)setPlayable:(BOOL)arg1;
- (id)publicTime;
- (void)setPublicTime:(id)arg1;
- (BOOL)isInBgMusicList;
- (void)setIsInBgMusicList:(BOOL)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (void).cxx_destruct;
@end

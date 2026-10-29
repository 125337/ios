@interface MMFinderLiveKTVSongBasicInfo : NSObject
{
    int _duration; // +0x8
    int _hasNote; // +0xc
    int _hasSongFileid; // +0x10
    int _hasAdded; // +0x14
    NSString * _songId; // +0x18
    NSString * _songName; // +0x20
    NSString * _artistId; // +0x28
    NSString * _artistName; // +0x30
    NSString * _durationStr; // +0x38
    NSString * _coverName; // +0x40
}
+ (void)buildSongBasicInfo:(id)arg1 withBasicInfo:(id)arg2;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)songName;
- (void)setSongName:(id)arg1;
- (id)artistId;
- (void)setArtistId:(id)arg1;
- (id)artistName;
- (void)setArtistName:(id)arg1;
- (id)durationStr;
- (void)setDurationStr:(id)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (id)coverName;
- (void)setCoverName:(id)arg1;
- (int)hasNote;
- (void)setHasNote:(int)arg1;
- (int)hasSongFileid;
- (void)setHasSongFileid:(int)arg1;
- (int)hasAdded;
- (void)setHasAdded:(int)arg1;
- (void).cxx_destruct;
@end


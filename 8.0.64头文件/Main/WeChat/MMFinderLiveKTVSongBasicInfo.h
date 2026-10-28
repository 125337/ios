@interface MMFinderLiveKTVSongBasicInfo : NSObject
{
    BOOL _onlySingSegment; // +0x8
    int _duration; // +0xc
    int _hasNote; // +0x10
    int _hasSongFileid; // +0x14
    int _hasAdded; // +0x18
    NSString * _songId; // +0x20
    NSString * _songName; // +0x28
    NSString * _artistId; // +0x30
    NSString * _artistName; // +0x38
    NSString * _durationStr; // +0x40
    NSString * _coverName; // +0x48
    NSString * _liveRoomCover; // +0x50
    MMFinderLiveKtvSongSegmentInfo * _segment; // +0x58
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
- (id)liveRoomCover;
- (void)setLiveRoomCover:(id)arg1;
- (id)segment;
- (void)setSegment:(id)arg1;
- (BOOL)onlySingSegment;
- (void)setOnlySingSegment:(BOOL)arg1;
- (void).cxx_destruct;
@end

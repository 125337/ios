@interface MMFinderLiveKTVSongItem : NSObject
{
    BOOL _pause; // +0x8
    int _duration; // +0xc
    int _hasNote; // +0x10
    int _hasSongFileid; // +0x14
    int _hasAdded; // +0x18
    unsigned int _songAddTime; // +0x1c
    unsigned int _songPlayTime; // +0x20
    unsigned int _songFinishTime; // +0x24
    unsigned int _status; // +0x28
    unsigned int _score; // +0x2c
    int _songQuality; // +0x30
    int _accompanyQuality; // +0x34
    MMFinderLiveKTVSongBasicInfo * _basicInfo; // +0x38
    NSString * _songName; // +0x40
    NSString * _artistId; // +0x48
    NSString * _artistName; // +0x50
    NSString * _durationStr; // +0x58
    NSString * _coverName; // +0x60
    NSString * _songId; // +0x68
    NSString * _uniqueId; // +0x70
    FinderLiveContact * _liveContact; // +0x78
    WCFinderContact * _singlerContact; // +0x80
    NSString * _level; // +0x88
    NSString * _micSdkUserId; // +0x90
    MMFinderLiveKTVSongResourceInfo * _resourceInfo; // +0x98
    NSMutableArray * _resources; // +0xa0
    FinderLiveKtvSongReportInfo * _reportInfo; // +0xa8
}
+ (void)buildKTVSong:(id)arg1 withBasicInfo:(id)arg2;
+ (void)buildKTVSong:(id)arg1 withResourceInfo:(id)arg2;
+ (void)buildKTVSong:(id)arg1 withPlayInfo:(id)arg2;
+ (void)buildKTVSong:(id)arg1 withSongInfo:(id)arg2;
+ (void)buildKTVSong:(id)arg1 withSongId:(id)arg2 uniqueId:(id)arg3 sdkUserId:(id)arg4;
+ (BOOL)isSongItem:(id)arg1 uniqueEqual:(id)arg2;
- (BOOL)updateBasicInfo:(id)arg1;
- (BOOL)updateSingerContact:(id)arg1;
- (void)setLiveContact:(id)arg1;
- (void)updateResourceInfo:(id)arg1;
- (BOOL)isCriticalValid;
- (BOOL)hasResource:(unsigned int)arg1;
- (id)description;
- (id)basicInfo;
- (void)setBasicInfo:(id)arg1;
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
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (unsigned int)songAddTime;
- (void)setSongAddTime:(unsigned int)arg1;
- (unsigned int)songPlayTime;
- (void)setSongPlayTime:(unsigned int)arg1;
- (unsigned int)songFinishTime;
- (void)setSongFinishTime:(unsigned int)arg1;
- (id)liveContact;
- (id)singlerContact;
- (void)setSinglerContact:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (BOOL)pause;
- (void)setPause:(BOOL)arg1;
- (id)level;
- (void)setLevel:(id)arg1;
- (unsigned int)score;
- (void)setScore:(unsigned int)arg1;
- (id)micSdkUserId;
- (void)setMicSdkUserId:(id)arg1;
- (id)resourceInfo;
- (void)setResourceInfo:(id)arg1;
- (id)resources;
- (void)setResources:(id)arg1;
- (int)songQuality;
- (void)setSongQuality:(int)arg1;
- (int)accompanyQuality;
- (void)setAccompanyQuality:(int)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void).cxx_destruct;
@end


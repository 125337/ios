@interface ShakeMusicItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    int _musicID; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _type; // +0x10
    NSString * _musicName; // +0x18
    NSString * _singer; // +0x20
    NSString * _albumName; // +0x28
    NSString * _coverImageUrl; // +0x30
    NSString * _lyrics; // +0x38
    NSString * _musicUrl; // +0x40
    NSString * _musicLowBandUrl; // +0x48
    NSString * _webUrl; // +0x50
    NSString * _appId; // +0x58
    NSString * _songMid; // +0x60
    NSMutableArray * _music; // +0x68
}
+ (void)PBArrayAdd_musicName;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_coverImageUrl;
+ (void)PBArrayAdd_lyrics;
+ (void)PBArrayAdd_musicUrl;
+ (void)PBArrayAdd_musicLowBandUrl;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_songMid;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_music;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)musicName;
- (void)setMusicName:(id)arg1;
- (id)singer;
- (void)setSinger:(id)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (id)coverImageUrl;
- (void)setCoverImageUrl:(id)arg1;
- (id)lyrics;
- (void)setLyrics:(id)arg1;
- (id)musicUrl;
- (void)setMusicUrl:(id)arg1;
- (id)musicLowBandUrl;
- (void)setMusicLowBandUrl:(id)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (int)musicID;
- (void)setMusicID:(int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)songMid;
- (void)setSongMid:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)music;
- (void)setMusic:(id)arg1;
- (void).cxx_destruct;
@end


@interface SnsMusicItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    unsigned int _createTime; // +0x8
    NSString * _musicName; // +0x10
    NSString * _singer; // +0x18
    NSString * _albumName; // +0x20
    NSString * _coverImageUrl; // +0x28
    NSString * _lyrics; // +0x30
    NSString * _musicUrl; // +0x38
    NSString * _musicLowBandUrl; // +0x40
    NSString * _webUrl; // +0x48
    NSString * _musicID; // +0x50
    NSString * _tid; // +0x58
    NSString * _username; // +0x60
    NSString * _appId; // +0x68
    NSString * _coverHDImageUrl; // +0x70
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
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_coverHDImageUrl;
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
- (id)musicID;
- (void)setMusicID:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)coverHDImageUrl;
- (void)setCoverHDImageUrl:(id)arg1;
- (void).cxx_destruct;
@end

@interface QQMusicInfo : NSObject <PBCoding, NSCoding, NSCopying>
{
    unsigned int _type; // +0x8
    unsigned int _songId; // +0xc
    unsigned int _songPlayTime; // +0x10
    int _copyright; // +0x14
    unsigned int _offset; // +0x18
    unsigned int _songType; // +0x1c
    NSString * _songMid; // +0x20
    NSString * _songName; // +0x28
    NSString * _singerName; // +0x30
    NSString * _albumName; // +0x38
    NSString * _albumPic150X150; // +0x40
    NSString * _albumPic300X300; // +0x48
    NSString * _albumPic500X500; // +0x50
    NSString * _songPlayUrl; // +0x58
    NSString * _songPlayUrlHq; // +0x60
    NSString * _songPlayUrlSq; // +0x68
    NSString * _songPlayUrlStandard; // +0x70
    NSString * _songH5Url; // +0x78
    NSString * _songLyric; // +0x80
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_songId;
+ (void)PBArrayAdd_songMid;
+ (void)PBArrayAdd_songName;
+ (void)PBArrayAdd_singerName;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_albumPic150X150;
+ (void)PBArrayAdd_albumPic300X300;
+ (void)PBArrayAdd_albumPic500X500;
+ (void)PBArrayAdd_songPlayTime;
+ (void)PBArrayAdd_songPlayUrl;
+ (void)PBArrayAdd_songPlayUrlHq;
+ (void)PBArrayAdd_songPlayUrlSq;
+ (void)PBArrayAdd_songPlayUrlStandard;
+ (void)PBArrayAdd_songH5Url;
+ (void)PBArrayAdd_songLyric;
+ (void)PBArrayAdd_copyright;
+ (void)PBArrayAdd_offset;
+ (void)PBArrayAdd_songType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)songId;
- (void)setSongId:(unsigned int)arg1;
- (id)songMid;
- (void)setSongMid:(id)arg1;
- (id)songName;
- (void)setSongName:(id)arg1;
- (id)singerName;
- (void)setSingerName:(id)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (id)albumPic150X150;
- (void)setAlbumPic150X150:(id)arg1;
- (id)albumPic300X300;
- (void)setAlbumPic300X300:(id)arg1;
- (id)albumPic500X500;
- (void)setAlbumPic500X500:(id)arg1;
- (unsigned int)songPlayTime;
- (void)setSongPlayTime:(unsigned int)arg1;
- (id)songPlayUrl;
- (void)setSongPlayUrl:(id)arg1;
- (id)songPlayUrlHq;
- (void)setSongPlayUrlHq:(id)arg1;
- (id)songPlayUrlSq;
- (void)setSongPlayUrlSq:(id)arg1;
- (id)songPlayUrlStandard;
- (void)setSongPlayUrlStandard:(id)arg1;
- (id)songH5Url;
- (void)setSongH5Url:(id)arg1;
- (id)songLyric;
- (void)setSongLyric:(id)arg1;
- (int)copyright;
- (void)setCopyright:(int)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (unsigned int)songType;
- (void)setSongType:(unsigned int)arg1;
- (void).cxx_destruct;
@end


@interface MMMusicMVSongInfo : NSObject <PBCoding, NSCopying>
{
    unsigned int _duration; // +0x8
    NSString * _songName; // +0x10
    NSString * _singer; // +0x18
    NSString * _musicDataUrl; // +0x20
    NSString * _musicAppId; // +0x28
    NSString * _musicWebUrl; // +0x30
    NSString * _songId; // +0x38
    NSString * _musicID; // +0x40
    NSString * _lyric; // +0x48
    NSString * _albumName; // +0x50
    NSString * _albumUrl; // +0x58
    NSString * _genre; // +0x60
    double _publicTime; // +0x68
    NSString * _extraInfo; // +0x70
    NSString * _identification; // +0x78
    NSString * _customSongId; // +0x80
    NSString * _lowerQualityImagePath; // +0x88
    NSString * _musicOperationUrl; // +0x90
    NSString * _mid; // +0x98
}
+ (void)PBArrayAdd_songName;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_musicDataUrl;
+ (void)PBArrayAdd_musicAppId;
+ (void)PBArrayAdd_musicWebUrl;
+ (void)PBArrayAdd_songId;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_genre;
+ (void)PBArrayAdd_publicTime;
+ (void)PBArrayAdd_extraInfo;
+ (void)PBArrayAdd_identification;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_albumUrl;
+ (void)PBArrayAdd_lyric;
+ (void)PBArrayAdd_musicOperationUrl;
+ (void)PBArrayAdd_mid;
+ (void)initialize;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (id)initWithMusicInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isDetailInfoFulfilled;
- (id)toXML;
- (id)description;
- (id)songName;
- (void)setSongName:(id)arg1;
- (id)singer;
- (void)setSinger:(id)arg1;
- (id)musicDataUrl;
- (void)setMusicDataUrl:(id)arg1;
- (id)musicAppId;
- (void)setMusicAppId:(id)arg1;
- (id)musicWebUrl;
- (void)setMusicWebUrl:(id)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)musicID;
- (void)setMusicID:(id)arg1;
- (id)lyric;
- (void)setLyric:(id)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (id)albumUrl;
- (void)setAlbumUrl:(id)arg1;
- (id)genre;
- (void)setGenre:(id)arg1;
- (double)publicTime;
- (void)setPublicTime:(double)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)identification;
- (void)setIdentification:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (id)customSongId;
- (void)setCustomSongId:(id)arg1;
- (id)lowerQualityImagePath;
- (void)setLowerQualityImagePath:(id)arg1;
- (id)musicOperationUrl;
- (void)setMusicOperationUrl:(id)arg1;
- (id)mid;
- (void)setMid:(id)arg1;
- (void).cxx_destruct;
@end


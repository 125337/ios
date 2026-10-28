@interface TRKQrcLyric : NSObject
{
    BOOL _isValid; // +0x8
    NSString * _saveTime; // +0x10
    NSString * _version; // +0x18
    long long _lyricCount; // +0x20
    long long _lyricType; // +0x28
    NSArray * _sentences; // +0x30
    NSString * _title; // +0x38
    NSString * _artist; // +0x40
    NSString * _album; // +0x48
    NSString * _by; // +0x50
    long long _offset; // +0x58
    long long _hasSegment; // +0x60
    long long _lyricFinishTime; // +0x68
    Lyric * _lyric; // +0x70
}
- (id)initWithLyric:(id)arg1;
- (id)timeInfoArrayForScore;
- (id)saveTime;
- (void)setSaveTime:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (long long)lyricCount;
- (void)setLyricCount:(long long)arg1;
- (long long)lyricType;
- (void)setLyricType:(long long)arg1;
- (id)sentences;
- (void)setSentences:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)artist;
- (void)setArtist:(id)arg1;
- (id)album;
- (void)setAlbum:(id)arg1;
- (id)by;
- (void)setBy:(id)arg1;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (long long)hasSegment;
- (void)setHasSegment:(long long)arg1;
- (long long)lyricFinishTime;
- (void)setLyricFinishTime:(long long)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (id)lyric;
- (void)setLyric:(id)arg1;
- (void).cxx_destruct;
@end

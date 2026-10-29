@interface Lyric : NSObject <NSCopying>
{
    NSString * _saveTime; // +0x8
    NSString * _version; // +0x10
    long long _lyricCount; // +0x18
    long long _lyricType; // +0x20
    NSMutableArray * _sentencesArray; // +0x28
    NSString * _title; // +0x30
    NSString * _artist; // +0x38
    NSString * _album; // +0x40
    NSString * _by; // +0x48
    long long _offset; // +0x50
    long long _hasSegment; // +0x58
}
- (id)init;
- (long long)lyricFinishTime;
- (BOOL)isValid;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)saveTime;
- (void)setSaveTime:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (long long)lyricCount;
- (void)setLyricCount:(long long)arg1;
- (long long)lyricType;
- (void)setLyricType:(long long)arg1;
- (id)sentencesArray;
- (void)setSentencesArray:(id)arg1;
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
- (void).cxx_destruct;
@end


@interface WXMusicVideoObject : NSObject
{
    unsigned int _duration; // +0x8
    NSString * _musicUrl; // +0x10
    NSString * _musicDataUrl; // +0x18
    NSString * _singerName; // +0x20
    NSString * _songLyric; // +0x28
    NSData * _hdAlbumThumbData; // +0x30
    NSString * _hdAlbumThumbFileHash; // +0x38
    NSString * _albumName; // +0x40
    NSString * _musicGenre; // +0x48
    unsigned long long _issueDate; // +0x50
    NSString * _identification; // +0x58
    NSString * _musicOperationUrl; // +0x60
}
+ (id)object;
- (id)musicUrl;
- (void)setMusicUrl:(id)arg1;
- (id)musicDataUrl;
- (void)setMusicDataUrl:(id)arg1;
- (id)singerName;
- (void)setSingerName:(id)arg1;
- (id)songLyric;
- (void)setSongLyric:(id)arg1;
- (id)hdAlbumThumbData;
- (void)setHdAlbumThumbData:(id)arg1;
- (id)hdAlbumThumbFileHash;
- (void)setHdAlbumThumbFileHash:(id)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (id)musicGenre;
- (void)setMusicGenre:(id)arg1;
- (unsigned long long)issueDate;
- (void)setIssueDate:(unsigned long long)arg1;
- (id)identification;
- (void)setIdentification:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (id)musicOperationUrl;
- (void)setMusicOperationUrl:(id)arg1;
- (void).cxx_destruct;
@end


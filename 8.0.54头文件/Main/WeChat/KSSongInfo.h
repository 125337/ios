@interface KSSongInfo : NSObject
{
    BOOL _localFile; // +0x8
    unsigned int _databytesPerSecond; // +0xc
    NSString * _artist; // +0x10
    NSString * _title; // +0x18
    NSString * _songURL; // +0x20
    NSString * _songName; // +0x28
    NSString * _fileVid; // +0x30
    NSString * _fileExtension; // +0x38
    double _durion; // +0x40
    long long _fileSize; // +0x48
}
- (id)description;
- (id)artist;
- (void)setArtist:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)songURL;
- (void)setSongURL:(id)arg1;
- (id)songName;
- (void)setSongName:(id)arg1;
- (BOOL)localFile;
- (void)setLocalFile:(BOOL)arg1;
- (id)fileVid;
- (void)setFileVid:(id)arg1;
- (id)fileExtension;
- (void)setFileExtension:(id)arg1;
- (unsigned int)databytesPerSecond;
- (void)setDatabytesPerSecond:(unsigned int)arg1;
- (double)durion;
- (void)setDurion:(double)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (void).cxx_destruct;
@end


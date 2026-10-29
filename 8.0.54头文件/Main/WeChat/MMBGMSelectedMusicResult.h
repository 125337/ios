@interface MMBGMSelectedMusicResult : NSObject
{
    BOOL _isMusicOn; // +0x8
    BOOL _isLyricOn; // +0x9
    BOOL _isOstOn; // +0xa
    NSString * _musicFilePath; // +0x10
    id <MMBGMSelectedMusicDataProtocol> _musicData; // +0x18
}
- (id)genRecommendedMusicInfo;
- (id)genSelectedMusicInfo;
- (BOOL)isMusicOn;
- (void)setIsMusicOn:(BOOL)arg1;
- (BOOL)isLyricOn;
- (void)setIsLyricOn:(BOOL)arg1;
- (BOOL)isOstOn;
- (void)setIsOstOn:(BOOL)arg1;
- (id)musicFilePath;
- (void)setMusicFilePath:(id)arg1;
- (id)musicData;
- (void)setMusicData:(id)arg1;
- (void).cxx_destruct;
@end


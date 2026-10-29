@interface MMBGMSelectedBottomViewModel : NSObject
{
    BOOL _musicOn; // +0x8
    BOOL _ostOn; // +0x9
    BOOL _lyricOn; // +0xa
}
- (void)setMusicOn:(BOOL)arg1;
- (void)setLyricOn:(BOOL)arg1;
- (BOOL)isMusicOn;
- (BOOL)isOstOn;
- (void)setOstOn:(BOOL)arg1;
- (BOOL)isLyricOn;
@end


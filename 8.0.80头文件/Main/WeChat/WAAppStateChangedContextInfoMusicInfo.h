@interface WAAppStateChangedContextInfoMusicInfo : MMObject
{
    BOOL _canKeepAliveByAudioPlay; // +0x8
    BOOL _isPlayingMusic; // +0x9
    BOOL _isMusicInteruptedByOtherSource; // +0xa
}
- (id)description;
- (BOOL)canKeepAliveByAudioPlay;
- (void)setCanKeepAliveByAudioPlay:(BOOL)arg1;
- (BOOL)isPlayingMusic;
- (void)setIsPlayingMusic:(BOOL)arg1;
- (BOOL)isMusicInteruptedByOtherSource;
- (void)setIsMusicInteruptedByOtherSource:(BOOL)arg1;
@end

@interface ShakeMusicUtility : MMUserService <IMusicPlayerExt, MMServiceProtocol>
{
    MMMusicInfo * _lastPlayingMusic; // +0x8
    double _lastMusicOffset; // +0x10
}
+ (unsigned long long)getCopyRightWithShakeMusicInfo:(id)arg1;
+ (id)genReportSongId:(unsigned int)arg1;
- (void)recordPlayingMusicAndPause:(BOOL)arg1;
- (void)resumeLastPlayingMusic;
- (void)clearLastPlayingMusic;
- (BOOL)isLastPlayMusicExists;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (id)lastPlayingMusic;
- (void)setLastPlayingMusic:(id)arg1;
- (double)lastMusicOffset;
- (void)setLastMusicOffset:(double)arg1;
- (void).cxx_destruct;
@end


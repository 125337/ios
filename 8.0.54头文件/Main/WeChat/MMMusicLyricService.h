@interface MMMusicLyricService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _infoDic; // +0x8
    MMTimer * _timer; // +0x10
}
- (void)onServiceInit;
- (void)initLyricFor:(id)arg1 lyrics:(id)arg2;
- (id)getLyricResolverWithSongId:(id)arg1;
- (void)requestLyricNotifying:(id)arg1;
- (void)resignLyricNotifying:(id)arg1;
- (id)currentLyricStr:(id)arg1;
- (void)setManualOffsetControl:(id)arg1 enabled:(BOOL)arg2;
- (void)updateLyricIndexManually:(id)arg1 musicOffset:(double)arg2;
- (void)setupTimerIfNeeded;
- (void)stopTimer;
- (void)updateLyric;
- (void)updateLyricWithInfo:(id)arg1 musicOffset:(double)arg2;
- (void)notifyLyricChanged:(id)arg1;
- (id)infoDic;
- (void)setInfoDic:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end


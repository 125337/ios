@interface MusicSearchMgr : MusicSearchBaseMgr
- (id)init;
- (BOOL)checkSearchEnvironmentIsValid;
- (long long)recordTimeLimitInSecond;
- (void)outputPeakPower:(float)arg1;
- (void)onGetMusicItemSuccess:(id)arg1 fpId:(unsigned int)arg2;
- (void)onGetMusicItemFail:(int)arg1 sessionId:(unsigned int)arg2;
@end


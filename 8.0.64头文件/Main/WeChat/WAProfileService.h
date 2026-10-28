@interface WAProfileService : MMUserService <WAAppItemManagerExtension, MMServiceProtocol>
{
    unsigned int _lastStayDuration; // +0x8
    BOOL _localDataLoaded; // +0xc
    NSMutableDictionary * _dicUserName2LastForegroundTime; // +0x10
    NSMutableSet * _setAppID2PlayedAudio; // +0x18
    NSMutableDictionary * _userName2ProfileResponse; // +0x20
}
- (void)onServiceInit;
- (id)getEvaluteWordingForScore:(int)arg1;
- (void)loadCacheData;
- (void)saveResponse:(id)arg1 Response:(id)arg2;
- (void)onWeAppItemDeleted:(id)arg1;
- (BOOL)loadDataFromFile:(id)arg1 ToClass:(Class)arg2 ToData:(id *)arg3;
- (BOOL)saveDataToCacheFile:(id)arg1 Path:(id)arg2;
- (id)getLocalProfileInfoDictionaryForUserName:(id)arg1;
- (id)getLocalProfileInfoForUserName:(id)arg1;
- (void)updateGameUsedAudio:(id)arg1;
- (void)updateForegroundTimeForUserName:(id)arg1;
- (BOOL)canPopEvaluateDueToMinStayTime:(unsigned int)arg1 UserName:(id)arg2;
- (BOOL)updateProfileInfoForUserName:(id)arg1 parameter:(id)arg2;
- (void)onFetchProfileBaseInfo:(id)arg1;
- (BOOL)submitGameEvaluateResult:(BOOL)arg1 QuestionId:(id)arg2 ChoseOption:(unsigned int)arg3 AppId:(id)arg4 Config:(id)arg5;
- (void)onGameEvaluateResponse:(id)arg1;
- (BOOL)updateProfileEvaluateForUserName:(id)arg1 RatingValue:(double)arg2;
- (BOOL)skipProfileEvaluateForUserName:(id)arg1;
- (BOOL)updateProfileLikeStatusForUserName:(id)arg1 myselfLike:(BOOL)arg2;
- (BOOL)updateProfileEvaluateForUserName:(id)arg1 OperType:(int)arg2 RatingValue:(double)arg3;
- (void)onUpdateProfileEvaluate:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (id)dicUserName2LastForegroundTime;
- (void)setDicUserName2LastForegroundTime:(id)arg1;
- (id)setAppID2PlayedAudio;
- (void)setSetAppID2PlayedAudio:(id)arg1;
- (id)userName2ProfileResponse;
- (void)setUserName2ProfileResponse:(id)arg1;
- (BOOL)localDataLoaded;
- (void)setLocalDataLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end

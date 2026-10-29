@interface FTSWebSearchSugLatencyTracker : NSObject
+ (void)markInputDoneWithSearchId:(long long)arg1;
+ (void)markLocalStartWithSearchId:(long long)arg1;
+ (void)markCgiSendWithSearchId:(long long)arg1;
+ (void)markCgiRecvWithSearchId:(long long)arg1 isStick:(BOOL)arg2 timeout:(BOOL)arg3 sugCount:(long long)arg4;
+ (void)markParseDoneWithSearchId:(long long)arg1;
+ (void)reportSearchTimeWithSearchId:(long long)arg1 searchTimeMs:(unsigned long long)arg2;
+ (BOOL)isCurrentRound:(long long)arg1;
+ (int)elapsedMs;
+ (void)reportKey:(int)arg1 value:(int)arg2 anchor:(id)arg3;
@end

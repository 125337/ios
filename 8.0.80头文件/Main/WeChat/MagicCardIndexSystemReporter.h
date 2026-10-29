@interface MagicCardIndexSystemReporter : MMUserService <MMServiceProtocol>
+ (void)onServiceInit;
+ (void)onServiceClearData;
+ (void)dealloc;
+ (void)expt:(id)arg1 action:(unsigned long long)arg2 groupId:(int)arg3 extMap:(id)arg4;
+ (void)report:(id)arg1 bizSubScene:(id)arg2 cardId:(id)arg3 action:(unsigned long long)arg4 isNewImpl:(unsigned char)arg5 traceId:(id)arg6 extMap:(id)arg7;
+ (void)mediaEvent:(id)arg1 reportInfo:(id)arg2 extJson:(id)arg3 isNewImpl:(unsigned char)arg4;
+ (void)thumbPlayerEvent:(id)arg1 reportInfo:(id)arg2 extJson:(id)arg3;
+ (void)preDownloadEvent:(id)arg1 extJson:(id)arg2;
+ (id)addTimestampToJson:(id)arg1;
+ (void)jump:(unsigned long long)arg1 isNewImpl:(unsigned char)arg2 dicParam:(id)arg3;
+ (int)getImplType:(unsigned long long)arg1;
+ (id)getExptString:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)directionActionString:(unsigned long long)arg1;
+ (id)directionJumpToString:(unsigned long long)arg1;
+ (id)actionSampleDenominatorMap;
+ (BOOL)shouldSampleAction:(unsigned long long)arg1;
+ (void)reportSimply:(id)arg1 action:(unsigned long long)arg2 extraDict:(id)arg3;
@end

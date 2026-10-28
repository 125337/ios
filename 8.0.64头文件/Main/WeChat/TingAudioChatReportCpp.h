@interface TingAudioChatReportCpp : NSObject
+ (void)start:(id)arg1;
+ (void)mark:(id)arg1 allowDuplicate:(BOOL)arg2 ms:(unsigned long long)arg3;
+ (void)mark:(id)arg1 allowDuplicate:(BOOL)arg2;
+ (void)mark:(id)arg1;
+ (void)mark:(id)arg1 allowDuplicate:(BOOL)arg2 ms:(unsigned long long)arg3 sessionId:(id)arg4;
+ (void)markStr:(id)arg1 value:(id)arg2;
+ (void)markStr:(id)arg1 value:(id)arg2 sessionId:(id)arg3;
+ (void)end:(id)arg1;
+ (void)end:(id)arg1 result:(id)arg2;
@end

@interface ChatLogRawMediaInfo : NSObject
+ (id)getRelatedMemoryKV;
+ (void)saveRawReceiveSize:(unsigned long long)arg1;
+ (unsigned long long)rawReceiveSize;
+ (void)saveRawSendSize:(unsigned long long)arg1;
+ (unsigned long long)rawSendSize;
+ (void)saveCleanSessionId:(id)arg1;
+ (id)cleanSessionId;
+ (void)saveOverallSessionId:(id)arg1;
+ (id)overallSessionId;
+ (void)saveCleanContentJson:(id)arg1;
+ (id)cleanContentJson;
+ (void)saveRawSendSizeClean:(unsigned long long)arg1;
+ (unsigned long long)rawSendSizeClean;
+ (void)saveRawReceiveSizeClean:(unsigned long long)arg1;
+ (unsigned long long)rawReceiveSizeClean;
+ (void)setGetAllRawSend:(BOOL)arg1;
+ (BOOL)getAllRawSend;
+ (void)setGetAllRawReceive:(BOOL)arg1;
+ (BOOL)getAllRawReceive;
+ (unsigned long long)totalTaskSize;
+ (void)saveTotalTaskSize:(unsigned long long)arg1;
+ (unsigned long long)currentTaskSize;
+ (void)saveCurrentTaskSize:(unsigned long long)arg1;
+ (void)resetTheAnalyse;
+ (void)reportRawServiceInfo;
+ (void)analyseTaskInfo:(id)arg1 compress:(BOOL)arg2 costTime:(double)arg3;
@end

@interface WCCompressVideoLogic : NSObject
+ (void)startCompressVideoTask;
+ (void)startCompressVideoTaskInBGTask;
+ (void)stopCompressVideoTask;
+ (BOOL)isTaskRunning;
+ (void)saveCompressVideoSetToFile:(id)arg1;
+ (id)loadCompressVideoSetFromFile:(id)arg1;
+ (void)saveHardLinkCompressVideoSetToFileWithInodeNum:(id)arg1 compressVideoPathSet:(id)arg2;
+ (id)compressVideoMMKV;
+ (void)historyCompressedVideoData:(long long *)arg1 videoSize:(long long *)arg2;
+ (BOOL)isCompressVideoDirEmpty;
+ (BOOL)moveFromTmpToDiskUsageDir;
+ (BOOL)c2cConvertToH265Expt;
+ (unsigned long long)compressVideoIntervalByExpt;
+ (unsigned long long)compressVideoLimitByExpt;
+ (BOOL)skipConditionsForDebugExpt;
+ (BOOL)compressVideoExptFirstReceived;
+ (void)setCompressVideoExptFirstReceived;
+ (long long)getCompressEndDuration;
@end

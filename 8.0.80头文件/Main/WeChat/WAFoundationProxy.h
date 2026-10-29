@interface WAFoundationProxy : NSObject <IWAFoundationService>
+ (BOOL)getDiskSize:(unsigned long long *)arg1;
+ (BOOL)getFreeSize:(unsigned long long *)arg1;
+ (void)setWeAppScene:(id)arg1;
+ (void)setExistWeAppCount:(int)arg1;
+ (void)decreaseExistWeAppCount;
+ (void)addMatrixUserType:(unsigned int)arg1;
+ (void)removeMatrixUserType:(unsigned int)arg1;
+ (void)setMatrixCustomInfoWithKey:(id)arg1 value:(id)arg2;
+ (BOOL)StartHttpsDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4 withIsGzip:(BOOL)arg5 withFileType:(int)arg6;
+ (BOOL)StopHttpsDownloadTask:(id)arg1;
+ (BOOL)preDownloadVideoWithArgs:(id)arg1 complete:(id /* block */)arg2;
+ (void)handleWAVideoStartStreamPlaying:(id)arg1;
+ (id)sharedPreDownloadTaskInfos;
@end

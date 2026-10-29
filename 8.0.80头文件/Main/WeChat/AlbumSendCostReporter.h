@interface AlbumSendCostReporter : NSObject
+ (unsigned long long)p_nowMs;
+ (void)beginWithScene:(long long)arg1 assetCount:(unsigned long long)arg2 imgCount:(unsigned long long)arg3 videoCount:(unsigned long long)arg4 isOrigin:(BOOL)arg5;
+ (void)markOpt:(unsigned long long)arg1 effective:(BOOL)arg2;
+ (void)markStage:(unsigned long long)arg1;
+ (void)addUserInteractionCost:(unsigned long long)arg1;
+ (void)setDeferVideoCount:(unsigned long long)arg1;
+ (void)trackAssetIds:(id)arg1;
+ (void)increaseICloudVideoCountForAssetId:(id)arg1;
+ (void)setNotLocalVideoCount:(unsigned long long)arg1;
+ (void)abort;
+ (void)endAndReport;
@end

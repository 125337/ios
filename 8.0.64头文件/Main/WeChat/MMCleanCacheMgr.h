@interface MMCleanCacheMgr : NSObject
+ (id)getCacheClassification:(BOOL)arg1;
+ (unsigned long long)cleanWeAppCache;
+ (unsigned long long)preGetWeAppCacheSize;
+ (unsigned long long)cleanAppOtherCache;
+ (unsigned long long)preGetAppOtherCacheSize;
+ (unsigned long long)p_cleanTmpPath;
+ (unsigned long long)p_preGetTmpPathSize;
+ (unsigned long long)p_cleanCachesWebkit;
+ (unsigned long long)p_preGetWebkitCacheSize;
+ (unsigned long long)p_cleanCacheAudio;
+ (unsigned long long)p_preGetAudioCacheSize;
+ (unsigned long long)p_cleanCacheMap;
+ (unsigned long long)p_preGetMapCacheSize;
+ (unsigned long long)p_cleanAppGroupTmpPath;
+ (unsigned long long)p_preGetAppGroupTmpPathSize;
+ (unsigned long long)p_cleanMatrixCrashBlockLog;
+ (unsigned long long)p_preGetMatrixCrashBlockLogSize;
@end

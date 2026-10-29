@interface AlbumSendOptSwitch : NSObject
+ (BOOL)p_isEnabledWithExptKey:(id)arg1;
+ (BOOL)isSuspendUploadWhileInsertingEnabled;
+ (BOOL)isCachedVideoThumbEnabled;
+ (BOOL)isExportPrepareOffMainThreadEnabled;
+ (BOOL)isCompressProgressThrottleEnabled;
+ (BOOL)isSkipInvisibleSessionListReloadEnabled;
+ (BOOL)isConcurrentVideoInfoPrepareEnabled;
+ (BOOL)isPrecomputeMaskedThumbEnabled;
+ (BOOL)isBatchSessionRefreshEnabled;
+ (BOOL)isDeferVideoFetchEnabled;
+ (BOOL)isDeferImageCompressEnabled;
+ (BOOL)isDeferSelectFetchEnabled;
+ (unsigned long long)currentOptMask;
@end

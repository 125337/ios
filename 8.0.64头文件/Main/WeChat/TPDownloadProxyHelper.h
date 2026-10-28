@interface TPDownloadProxyHelper : NSObject
+ (id)getNativeLibVersion;
+ (id)getHLSOfflineExttagWithVid:(id)arg1 linkVid:(id)arg2 formatId:(int)arg3 randomNum:(long long)arg4;
+ (long long)verifyOfflineCacheSync:(id)arg1 fileFormat:(int)arg2 resourceId:(id)arg3 keyId:(id)arg4;
+ (id)getOfflineRecordVinfo:(id)arg1 withFormat:(id)arg2;
+ (void)setTPProxyAdapter:(id)arg1;
+ (long long)getOfflineRecordDurationWithVid:(id)arg1 format:(id)arg2;
+ (void)setIsReadyForOfflineDownload:(BOOL)arg1;
+ (BOOL)isMidReadyForOfflineDownload;
+ (id)getNativeInfo:(int)arg1;
@end

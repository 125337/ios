@interface NewLifeHelper : NSObject
+ (id)fixAbsolutePath:(id)arg1;
+ (id)getFixUrl:(id)arg1;
+ (id)getNewLifePrivateRootFolderPath;
+ (id)getNewLifeDraftFolderPath;
+ (id)getNewLifeStreamCacheFolderPath;
+ (id)getNewLifeShareCoverUrlKey:(id)arg1;
+ (id)getNewLifeAutoCleanCacheFolderPath;
+ (id)getUniqueDraftImagePath;
+ (id)getNewLifeDocumentsRootFolderPath;
+ (id)getNewLifeDatabaseFolderPath;
+ (id)getNewLifeUploadFolderPath;
+ (BOOL)saveImageAsPng:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (id)createNewLifeFeedCompressConfig:(unsigned long long)arg1;
+ (id)compressImage:(id)arg1 compressType:(unsigned long long)arg2 targetPath:(id)arg3;
+ (CGSize)chatImageSizeWithSize:(CGSize)arg1;
+ (id)countStringWithCount:(long long)arg1 isAuthor:(BOOL)arg2;
+ (int)getUptimeInMilliseconds;
+ (void)migratePictureLocationPermission;
+ (BOOL)isDiscoverSearchEnabled;
+ (void)setIlinkGetWifiInfoCallback;
+ (id)generatePostSessionId;
@end

@interface NewLifeHelper : NSObject
+ (id)fixAbsolutePath:(id)arg1;
+ (id)getFixUrl:(id)arg1;
+ (id)getNewLifePrivateRootFolderPath;
+ (id)getNewLifeDraftFolderPath;
+ (id)getNewLifeStreamCacheFolderPath;
+ (id)getNewLifeStreamCachePathForType:(unsigned int)arg1;
+ (void)saveNewLifeStreamCacheData:(id)arg1 ofType:(unsigned int)arg2;
+ (id)getNewLifeShareCoverUrlKey:(id)arg1;
+ (id)getNewLifeAutoCleanCacheFolderPath;
+ (id)getUniqueDraftImagePath;
+ (id)getNewLifeDocumentsRootFolderPath;
+ (id)getNewLifeDatabaseFolderPath;
+ (BOOL)saveImageAsPng:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (void)asyncProcessAssets:(id)arg1 completion:(id /* block */)arg2;
+ (id)createNewLifeFeedCompressConfig:(unsigned long long)arg1;
+ (id)compressImage:(id)arg1 compressType:(unsigned long long)arg2 targetPath:(id)arg3;
+ (id)compressImagesAtPath:(id)arg1 targetFolderPath:(id)arg2;
+ (void)wxamDealModel:(id)arg1 name:(id)arg2 targetFolderPath:(id)arg3;
+ (BOOL)wxamCompress:(id)arg1 targetPath:(id)arg2 useWxAM3:(BOOL)arg3;
+ (CGSize)chatImageSizeWithSize:(CGSize)arg1;
+ (id)countStringWithCount:(long long)arg1 isAuthor:(BOOL)arg2;
+ (int)getUptimeInMilliseconds;
+ (void)migratePictureLocationPermission;
+ (void)goToNewlifeFlutterFlow:(id)arg1 postScene:(unsigned int)arg2 completion:(id /* block */)arg3;
+ (BOOL)postJumpNewLifeFlutterFlow;
+ (BOOL)isDiscoverSearchEnabled;
+ (void)setIlinkGetWifiInfoCallback;
@end


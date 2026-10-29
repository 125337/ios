@interface GameVideoUtils : MMObject
+ (id)gameHaowanDataDir;
+ (id)postInfoFilePath;
+ (id)haowanPostDBPath;
+ (int)getVideoDurationOfPath:(id)arg1;
+ (int)getVideoDuration:(id)arg1;
+ (BOOL)isRetryEnabled;
+ (int)getMaxRetryCount;
+ (id)fileExtensionFromMimeType:(id)arg1;
+ (id)humanEasyTextOfDataSize:(unsigned long long)arg1;
+ (CGSize)readImageSizeWithoutLoadingDataForPath:(id)arg1;
+ (BOOL)readImagePropertiesWithoutLoadingDataForPath:(id)arg1 thenDo:(id /* block */)arg2;
+ (id)storeVideoToWebResource:(id)arg1;
+ (id)storeByCopyVideoToWebResource:(id)arg1 andThumbPath:(id)arg2;
+ (id)openWebViewWithUrl:(id)arg1;
+ (void)showViewController:(id)arg1;
+ (void)showViewControllerWithCreator:(id /* block */)arg1;
+ (id)relativePathForAbosultePath:(id)arg1;
+ (id)abosultePathForRelativePath:(id)arg1;
@end


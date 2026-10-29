@interface MMImagePickerCacheUtil : NSObject
+ (id)cacheRootDir;
+ (id)tempCacheDir;
+ (id)cacheFilePath;
+ (id)reportDatabaseFilePath;
+ (id)thumbImageCacheDir;
+ (id)thumbPathForAlbum:(id)arg1;
+ (id)thumbPathForAsset:(id)arg1;
+ (id)stripInternalExtToShareFile:(id)arg1;
@end

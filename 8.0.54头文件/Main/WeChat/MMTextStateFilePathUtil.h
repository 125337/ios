@interface MMTextStateFilePathUtil : NSObject
+ (id)getUserTextStateMediaDir;
+ (id)getUserTextStateMediaUploadMediaDir;
+ (id)getUserTextStateCacheDir;
+ (id)getPathForUploadTempCacheDir;
+ (id)getPathForUploadImageWithTid:(id)arg1;
+ (id)getPathForUploadVideoWithTid:(id)arg1;
+ (id)getPathForUploadThumbWithTid:(id)arg1;
+ (id)getPathForUploadWxamWithTid:(id)arg1;
+ (id)getTempPathForSightDataWithTid:(id)arg1;
+ (id)getPathForSightDataWithTid:(id)arg1;
+ (id)getPathForWxamDataWithTid:(id)arg1;
+ (id)getPathForPreviewWithTid:(id)arg1;
+ (id)getTmpPathForPreviewWithTid:(id)arg1;
+ (id)getPathForImageWithTid:(id)arg1;
+ (id)getTmpPathForImageWithTid:(id)arg1;
+ (id)getPathForLikedData;
+ (id)mediaPathAppendFileName:(id)arg1;
+ (id)getTextStateMediaFilePathWithTid:(id)arg1 ExtensionName:(id)arg2;
+ (id)hashPathForStirng:(id)arg1;
+ (id)getMediaFolderPath;
+ (BOOL)cleanTextStateMediaFileCacheSize;
+ (id)GetTextStateUserDir;
+ (id)GetTextStateDBPath;
+ (id)GetDBConfigPath;
@end


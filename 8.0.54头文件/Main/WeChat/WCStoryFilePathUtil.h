@interface WCStoryFilePathUtil : NSObject
+ (id)getUserWCStoryPostLimitPath;
+ (id)getUserWCStoryDBPath;
+ (id)getUserWCStoryUploadingTaskPath;
+ (id)getUserWCStoryTaskRetryPath;
+ (id)getUserWCStoryTaskFailPath;
+ (id)getUserWCStoryTaskDeletePath;
+ (id)getUserWCStoryCommentUploadingPath;
+ (id)getUserWCStoryCommentFailedPath;
+ (id)getStorySettingPath;
+ (id)getStoryBGMDir;
+ (id)getUserWCStoryMediaDir;
+ (id)getUserWCStoryUploadMediaDir;
+ (id)getPathForUploadVideoWithTid:(id)arg1;
+ (id)getPathForUploadThumbWithTid:(id)arg1;
+ (id)getTempPathForSightDataWithTid:(id)arg1;
+ (id)getPathForSightDataWithTid:(id)arg1;
+ (id)getPathForPreviewWithTid:(id)arg1;
+ (id)getTmpPathForPreviewWithTid:(id)arg1;
+ (id)getPathForMediaDataWithTid:(id)arg1;
+ (id)mediaPathAppendFileName:(id)arg1;
+ (id)getStoryMediaFilePathWithTid:(id)arg1 ExtensionName:(id)arg2;
+ (id)hashPathForStirng:(id)arg1;
+ (id)getMediaFolderPath;
+ (id)getPhotoComposeMovieWithMovieFileName:(id)arg1;
+ (unsigned long long)getStoryWCDBSize;
+ (unsigned long long)getStoryMeidaFileCacheSize;
+ (BOOL)cleanStoryWCDB;
+ (BOOL)cleanStoryMediaFileCacheSize;
@end


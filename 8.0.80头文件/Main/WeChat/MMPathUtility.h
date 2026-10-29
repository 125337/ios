@interface MMPathUtility : NSObject
+ (id)GetDocumentPath;
+ (id)GetLibraryCachePath;
+ (id)DiskUsageDir;
+ (id)DiskUsageStatusPath;
+ (id)DiskUsageScanStatPath;
+ (id)DiskUsageReportDataPath;
+ (id)DiskUsageFolderWrapCacheDataPath;
+ (id)DiskUsageFolderWrapCachePath;
+ (id)DiskUsageFolderWrapCachePathForKey:(id)arg1;
+ (id)DiskUsageCompressVideoTmpPath;
+ (id)DiskUsageCompressVideoPathDirPath;
+ (id)DiskUsageCompressVideoHardLinkPathDirPath;
+ (id)DiskUsageCompressVideoHardLinkPathTmpDirPath;
+ (id)DiskUsageCompressVideoTmpPathData;
+ (BOOL)HardLinkCompressFilePath:(id)arg1;
@end

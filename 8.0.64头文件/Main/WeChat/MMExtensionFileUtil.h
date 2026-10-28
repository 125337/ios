@interface MMExtensionFileUtil : NSObject
+ (BOOL)clearPostCacheWithSessionID:(id)arg1;
+ (id)getExtWCUploadTaskWithSessionID:(id)arg1 andTaskID:(unsigned long long)arg2;
+ (id)getAllExtWCUploadFailTaskFiles;
+ (id)getWCUploadTaskWithTaskFilePath:(id)arg1;
+ (BOOL)removeTimelineUploadTaskFileWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (id)getMessagePostMetaDataFilePathWithClientID:(id)arg1;
+ (BOOL)removeMessagePostMetaDataFilePathWithClientID:(id)arg1;
+ (id)getAllMessageFailSessionFile;
+ (id)getMessagePostTaskIdDataFailePathWithSessionID:(id)arg1 andTaskID:(id)arg2;
+ (BOOL)removeMessagePostTaskIdDataWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (BOOL)addMessageFailPostSessionDataToFile:(id)arg1 WithSessionID:(id)arg2 withTaskID:(unsigned long long)arg3;
+ (id)getAllExtFavImgTaskFiles;
+ (id)getAllExtFavUrlTaskFiles;
+ (id)getAllExtFavVideoTaskFiles;
+ (id)getAllExtFavFileTaskFiles;
+ (void)clearAllExtFavImgTaskFiles;
+ (void)clearAllExtFavUrlTaskFiles;
+ (void)clearAllExtFavVideoTaskFiles;
+ (void)clearAllExtFavFileTaskFiles;
+ (id)getAllExtIdKeyReportFiles;
+ (void)clearAllExtIdKeyReportFiles;
@end

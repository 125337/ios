@interface MSEFileUtil : NSObject
+ (id)getUploadDataPostCacheFilePathWithSessionID:(id)arg1;
+ (BOOL)addUploadDataToPostCacheFile:(id)arg1 withSessionID:(id)arg2;
+ (BOOL)clearPostCacheWithSessionID:(id)arg1;
+ (BOOL)addTimelineUploadTaskToFile:(id)arg1 withSessionID:(id)arg2 withTaskID:(unsigned long long)arg3;
+ (BOOL)removeTimelineUploadTaskFileWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (BOOL)addTimelineUploadFailTaskToFile:(id)arg1 withSessionID:(id)arg2 withTaskID:(unsigned long long)arg3;
+ (BOOL)removeTimelineUploadFailTaskFileWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (BOOL)addMessagePostMetaDataToFile:(id)arg1 withClientID:(id)arg2;
+ (BOOL)removeMessagePostMetaDataWithClientID:(id)arg1;
+ (BOOL)addMessagePostTaskIdDataToFile:(id)arg1 withSessionID:(id)arg2 withTaskID:(unsigned long long)arg3;
+ (BOOL)removeMessagePostTaskIdDataWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (BOOL)addMessageFailPostSessionDataToFile:(id)arg1 WithSessionID:(id)arg2 withTaskID:(unsigned long long)arg3;
+ (BOOL)removeMessageFailPostSessionDataWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
@end


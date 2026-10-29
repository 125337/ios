@interface WCFTaskHelper : NSObject
+ (id)hashKeyForURL:(id)arg1;
+ (id)keyForURL:(id)arg1;
+ (id)keyForURL:(id)arg1 imageIdentifier:(id)arg2;
+ (id)keyForMedia:(id)arg1 type:(long long)arg2;
+ (id)taskInfoWithMedia:(id)arg1 type:(long long)arg2 key:(id)arg3;
+ (id)generateDownloadHeadImageTaskInfo:(id)arg1 key:(id)arg2;
+ (id)genDownloadTaskInfos:(id)arg1 isThumb:(BOOL)arg2;
+ (void)setupMediaTask:(id)arg1;
+ (void)setupURLTask:(id)arg1;
@end


@interface EcsActionUtil : NSObject
+ (void)jumpShareTimelineWithInfo:(id)arg1 shareExtInfo:(id)arg2 currentVC:(id)arg3 callbackDelegate:(id)arg4;
+ (void)jumpShareVideoToTimelineWithInfo:(id)arg1 shareExtInfo:(id)arg2 currentVC:(id)arg3 callbackDelegate:(id)arg4;
+ (void)jumpShareImageToTimelineWithInfo:(id)arg1 shareExtInfo:(id)arg2 currentVC:(id)arg3 callbackDelegate:(id)arg4;
+ (id)arrMMImageForShareInfo:(id)arg1 shareExtInfo:(id)arg2;
+ (id)genWCTimelineExtBean:(id)arg1 shareExtInfo:(id)arg2;
+ (id)genUploadTaskWithVideoPath:(id)arg1 withThumbPath:(id)arg2;
+ (void)jumpShareH5ToTimelineWithInfo:(id)arg1 shareExtInfo:(id)arg2 currentVC:(id)arg3 callbackDelegate:(id)arg4;
+ (id)supportActionsWithEnv:(int)arg1;
+ (BOOL)isActionSupportWithEnv:(int)arg1 actionName:(id)arg2;
+ (id)supportSyncActionsWithEnv:(int)arg1;
+ (BOOL)isSyncActionSupportWithEnv:(int)arg1 actionName:(id)arg2;
+ (long long)legacySceneValueForJsEnv:(int)arg1;
@end

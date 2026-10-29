@interface WxaLiteAppStorage : NSObject
+ (id)sharedInstance;
- (BOOL)insertOrReplaceLiteAppInfo:(id)arg1;
- (BOOL)deleteLiteAppInfo:(id)arg1;
- (id)getLiteAppInfo:(id)arg1;
- (id)getAllLiteAppInfo;
- (BOOL)updateLiteAppInfoLastUseTime:(id)arg1 time:(long long)arg2;
- (BOOL)insertOrReplaceAuthInfo:(id)arg1;
- (BOOL)deleteAuthInfo:(id)arg1;
- (id)getAuthInfo:(id)arg1;
- (BOOL)insertOrReplaceBaselibInfo:(id)arg1;
- (BOOL)deleteBaselibInfo:(id)arg1;
- (id)getBaselibInfo:(id)arg1;
- (id)getBaselibInfoByType:(id)arg1;
- (id)getAllBaselibInfo;
- (id)getLatestBaselibInfo;
- (BOOL)insertOrReplaceConfigInfo:(id)arg1;
- (BOOL)deleteConfigInfo:(id)arg1;
- (id)getConfigInfo:(id)arg1;
- (id)getAllConfigInfo;
- (BOOL)insertOrReplaceSamplingConfigInfo:(id)arg1;
- (BOOL)deleteSamplingConfigInfo:(id)arg1;
- (id)getSamplingConfigInfo:(id)arg1;
- (id)getAllSamplingConfigInfo;
- (BOOL)insertOrReplaceTriggerActionsInfo:(id)arg1;
- (BOOL)deleteTriggerActionsInfoByAppId:(id)arg1;
- (id)getTriggerActionsInfoByEventName:(id)arg1;
@end

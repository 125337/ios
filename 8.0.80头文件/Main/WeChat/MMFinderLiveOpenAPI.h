@interface MMFinderLiveOpenAPI : NSObject
+ (void)getLiveStatusWithUserName:(id)arg1 liveID:(id)arg2 successfulBlock:(id /* block */)arg3 failedBlock:(id /* block */)arg4;
+ (void)getLiveStatusWithUserName:(id)arg1 liveID:(id)arg2 scene:(unsigned int)arg3 disableLocalCache:(BOOL)arg4 successfulBlock:(id /* block */)arg5 failedBlock:(id /* block */)arg6;
+ (void)showLiveRoomWithExportObject:(id)arg1 fromVC:(id)arg2 customParam:(id)arg3 completation:(id /* block */)arg4;
+ (void)showLiveRoomWithUserName:(id)arg1 fromVC:(id)arg2 customParam:(id)arg3 completation:(id /* block */)arg4;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportId:(id)arg2 feedNonceId:(id)arg3 fromVC:(id)arg4 timeout:(double)arg5 customParam:(id)arg6 replayEntryType:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportIdArray:(id)arg2 selectedIdIndex:(int)arg3 feedNonceId:(id)arg4 fromVC:(id)arg5 timeout:(double)arg6 customParam:(id)arg7 replayEntryType:(id)arg8 successBlock:(id /* block */)arg9 failBlock:(id /* block */)arg10;
+ (void)realShowLiveRoomWithUserName:(id)arg1 feedExportId:(id)arg2 feedNonceId:(id)arg3 fromVC:(id)arg4 verifyInfo:(id)arg5 scenenote:(id)arg6 timeout:(double)arg7 showRecommend:(BOOL)arg8 customParam:(id)arg9 replayEntryType:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
+ (void)invokeToOpenLive:(id /* block */)arg1 dataItem:(id)arg2;
+ (void)showLiveRoomWithUserName:(id)arg1 feedExportIdArray:(id)arg2 selectedIdIndex:(int)arg3 feedNonceId:(id)arg4 fromVC:(id)arg5 verifyInfo:(id)arg6 scenenote:(id)arg7 timeout:(double)arg8 customParam:(id)arg9 replayEntryType:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
+ (void)getTemplateLiveUrlWithEncryptedID:(id)arg1 nonceID:(id)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
+ (void)getFinderLiveMicInfoWithEncryptedId:(id)arg1 nonceId:(id)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
@end

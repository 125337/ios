@interface WCFinderOpenAPI : NSObject
+ (void)getLiveNoticeStateWithAnchorUserName:(id)arg1 noticeId:(id)arg2 successfulBlock:(id /* block */)arg3 failedBlock:(id /* block */)arg4;
+ (void)reserveLiveNoticeWithAnchorUsername:(id)arg1 noticeId:(id)arg2 reserveOperation:(BOOL)arg3 timeout:(double)arg4 scene:(unsigned int)arg5 noticeBussinessDic:(id)arg6 gMsgID:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
+ (void)getLiveNoticeInfoWithNoticeId:(id)arg1 verifyInfo:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
+ (void)handleReservationWithLiveNoticeResponse:(id)arg1 preferEnterLive:(BOOL)arg2 commentScene:(id)arg3 entryScene:(int)arg4 cardType:(int)arg5 sceneNote:(id)arg6 fromVC:(id)arg7 noticeBussinessDic:(id)arg8 gMsgID:(id)arg9 successBlock:(id /* block */)arg10 failureBlock:(id /* block */)arg11;
+ (void)handleStartedLiveReservationWithLiveNoticeResponse:(id)arg1 commentScene:(id)arg2 entryScene:(int)arg3 cardType:(int)arg4 sceneNote:(id)arg5 fromVC:(id)arg6 noticeBussinessDic:(id)arg7 gMsgID:(id)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
+ (void)handleConcertLiveReservationWithLiveNoticeResponse:(id)arg1 commentScene:(id)arg2 entryScene:(int)arg3 cardType:(int)arg4 sceneNote:(id)arg5 fromVC:(id)arg6 noticeBussinessDic:(id)arg7 successBlock:(id /* block */)arg8 failureBlock:(id /* block */)arg9;
+ (void)reportConcertLiveReservationWithLiveNoticeResponse:(id)arg1 commentScene:(id)arg2 entryScene:(int)arg3 cardType:(int)arg4 sceneNote:(id)arg5 fromVC:(id)arg6 noticeBussinessDic:(id)arg7;
+ (void)handleGenericLiveReservationWithLiveNoticeResponse:(id)arg1 commentScene:(id)arg2 entryScene:(int)arg3 cardType:(int)arg4 sceneNote:(id)arg5 fromVC:(id)arg6 noticeBussinessDic:(id)arg7 gMsgID:(id)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
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
+ (BOOL)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2 extraParams:(id)arg3;
+ (void)pushFinderProfileWithExportUserName:(id)arg1 currentNavController:(id)arg2 cardType:(int)arg3 enterScene:(int)arg4 functionalParams:(id)arg5 reportExtraInfo:(id)arg6;
+ (void)pushFinderProfileWithUserName:(id)arg1 currentNavController:(id)arg2 cardType:(int)arg3 enterScene:(int)arg4 functionalParams:(id)arg5 reportExtraInfo:(id)arg6;
+ (void)pushFinderFeedWithFeedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(int)arg5 functionalParams:(id)arg6 reportExtraInfo:(id)arg7;
+ (void)pushFinderFeedWithEncrytedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(int)arg5 functionalParams:(id)arg6 reportExtraInfo:(id)arg7;
+ (void)pushFinderFeedWithEncrytedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(int)arg5 requestScene:(int)arg6 functionalParams:(id)arg7 reportExtraInfo:(id)arg8;
+ (void)getFinderContactWithUsername:(id)arg1 commentScene:(int)arg2 successfulBlock:(id /* block */)arg3 failedBlock:(id /* block */)arg4;
@end

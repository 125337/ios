@interface MMFinderLiveNoticeHelper : NSObject
+ (void)showMyLiveNoticeListFromViewController:(id)arg1;
+ (void)getLiveNoticeStateWithAnchorUserName:(id)arg1 noticeId:(id)arg2 successfulBlock:(id /* block */)arg3 failedBlock:(id /* block */)arg4;
+ (void)reserveLiveNoticeWithAnchorUsername:(id)arg1 noticeId:(id)arg2 reserveOperation:(BOOL)arg3 timeout:(double)arg4 scene:(unsigned int)arg5 noticeBussinessDic:(id)arg6 gMsgID:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
+ (void)getLiveNoticeInfoWithNoticeId:(id)arg1 verifyInfo:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
+ (void)showLiveNoticeFromJSAPIWithNoticeId:(id)arg1 finderUserName:(id)arg2 verifyInfo:(id)arg3 preferEnterLive:(BOOL)arg4 reserveLiveScene:(unsigned int)arg5 commentScene:(id)arg6 entryScene:(int)arg7 cardType:(int)arg8 sceneNote:(id)arg9 fromVC:(id)arg10 noticeBussinessDic:(id)arg11 gMsgID:(id)arg12 successBlock:(id /* block */)arg13 failureBlock:(id /* block */)arg14;
+ (void)showLiveNoticeFromJSAPIWithLiveNoticeResponse:(id)arg1 preferEnterLive:(BOOL)arg2 reserveLiveScene:(unsigned int)arg3 commentScene:(id)arg4 entryScene:(int)arg5 cardType:(int)arg6 sceneNote:(id)arg7 fromVC:(id)arg8 noticeBussinessDic:(id)arg9 gMsgID:(id)arg10 successBlock:(id /* block */)arg11 failureBlock:(id /* block */)arg12;
+ (void)handleStartedLiveReservationWithLiveNoticeResponse:(id)arg1 reserveLiveScene:(unsigned int)arg2 commentScene:(id)arg3 entryScene:(int)arg4 cardType:(int)arg5 sceneNote:(id)arg6 fromVC:(id)arg7 noticeBussinessDic:(id)arg8 gMsgID:(id)arg9 successBlock:(id /* block */)arg10 failureBlock:(id /* block */)arg11;
+ (void)handleConcertLiveReservationWithLiveNoticeResponse:(id)arg1 reserveLiveScene:(unsigned int)arg2 commentScene:(id)arg3 entryScene:(int)arg4 cardType:(int)arg5 sceneNote:(id)arg6 fromVC:(id)arg7 noticeBussinessDic:(id)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
+ (void)handleGenericLiveReservationWithLiveNoticeResponse:(id)arg1 reserveLiveScene:(unsigned int)arg2 commentScene:(id)arg3 entryScene:(int)arg4 cardType:(int)arg5 sceneNote:(id)arg6 fromVC:(id)arg7 noticeBussinessDic:(id)arg8 gMsgID:(id)arg9 successBlock:(id /* block */)arg10 failureBlock:(id /* block */)arg11;
+ (id)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 actionBlock:(id /* block */)arg6 unLikeBlock:(id /* block */)arg7;
+ (void)showLiveNoticeListWithFinderUserName:(id)arg1 reserveLiveScene:(unsigned int)arg2 fromVC:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
+ (void)showLiveNoticeListWithFinderUserName:(id)arg1 reserveLiveScene:(unsigned int)arg2 fromVC:(id)arg3 needSync:(BOOL)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
+ (void)showLiveNoticeListWithFinderUserName:(id)arg1 reserveLiveScene:(unsigned int)arg2 fromVC:(id)arg3 needSync:(BOOL)arg4 noticeListReportSourceType:(long long)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
+ (void)showLiveNoticeListWithNoticeListInfo:(id)arg1 reserveLiveScene:(unsigned int)arg2 anchorContact:(id)arg3 fromVC:(id)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
+ (void)showLiveNoticeListWithNoticeListInfo:(id)arg1 reserveLiveScene:(unsigned int)arg2 anchorContact:(id)arg3 fromVC:(id)arg4 needSync:(BOOL)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
+ (void)showLiveNoticeListWithNoticeListInfo:(id)arg1 reserveLiveScene:(unsigned int)arg2 anchorContact:(id)arg3 fromVC:(id)arg4 needSync:(BOOL)arg5 noticeListReportSourceType:(long long)arg6 successBlock:(id /* block */)arg7 failureBlock:(id /* block */)arg8;
+ (id)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 showHideButton:(BOOL)arg6 reportScene:(int)arg7 actionBlock:(id /* block */)arg8 unLikeBlock:(id /* block */)arg9;
+ (id)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 showHideButton:(BOOL)arg6 showColumnView:(BOOL)arg7 reportScene:(int)arg8 actionBlock:(id /* block */)arg9 unLikeBlock:(id /* block */)arg10;
+ (id)showLiveNoticeDetailSheetWithParams:(id)arg1;
+ (void)bindNoticeSheetToFeedHalfScreen:(id)arg1 feedHostVC:(id)arg2;
+ (void)_handleStandardActionForParams:(id)arg1 tapNoticeInfo:(id)arg2 tapAnchorContact:(id)arg3;
+ (void)_confirmCancelReserveForParams:(id)arg1 tapNoticeInfo:(id)arg2 tapAnchorContact:(id)arg3;
+ (void)_doReserveForParams:(id)arg1 tapNoticeInfo:(id)arg2 tapAnchorContact:(id)arg3 opType:(unsigned long long)arg4;
+ (void)_handleStandardHideForParams:(id)arg1 tapNoticeInfo:(id)arg2 tapAnchorContact:(id)arg3;
+ (void)provideLiveNoticeDetailsViewControllerWithParams:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
+ (void)pushLiveNoticeDetailsWithParams:(id)arg1 fromVC:(id)arg2;
@end

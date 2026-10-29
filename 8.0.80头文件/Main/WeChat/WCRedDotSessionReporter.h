@interface WCRedDotSessionReporter : NSObject
+ (id)getRenderFailLRUCache;
+ (void)reportRedDotRenderFailCtrlInfo:(id)arg1 showInfo:(id)arg2 params:(id)arg3;
+ (void)reportRedDotAbandonCtrlInfo:(id)arg1 params:(id)arg2;
+ (void)reportRedDotBanWhenReceivedCtrlInfo:(id)arg1 params:(id)arg2;
+ (void)reportRedDotHitSimulLimitWhenReceivedCtrlInfo:(id)arg1 params:(id)arg2;
+ (void)reportRedDotAbortSimulLimitWhenReceivedCtrlInfo:(id)arg1 params:(id)arg2;
+ (void)reportRedDotCgiWithEventId:(id)arg1 ctrlInfo:(id)arg2 params:(id)arg3;
+ (void)reportRedDotCgiWithEventId:(id)arg1 ctrlInfo:(id)arg2 showInfo:(id)arg3 params:(id)arg4;
+ (id)getSDKReportParamsWithCtrlInfo:(id)arg1;
+ (BOOL)getViewId:(id *)arg1 andCgiBizId:(id *)arg2 ctrlInfo:(id)arg3;
+ (BOOL)getViewId:(id *)arg1 andCgiBizId:(id *)arg2 ctrlInfo:(id)arg3 showInfo:(id)arg4;
+ (void)reportRedDotEventReplace20411:(id)arg1;
@end

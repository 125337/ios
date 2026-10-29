@interface WCSnsAskXiaoWeiReporter : NSObject
+ (void)reportAskXiaoWeiBtnExpWithParams:(id)arg1;
+ (void)reportAskXiaoWeiBtnClkWithParams:(id)arg1;
+ (void)reportLongPressMenuEntryExpWithParams:(id)arg1;
+ (void)reportLongPressMenuEntryClkWithParams:(id)arg1;
+ (void)reportBrowseLongPressAskXiaoWeiExpWithParams:(id)arg1;
+ (void)reportBrowseLongPressAskXiaoWeiClkWithParams:(id)arg1;
+ (void)reportTextFillEventWithParams:(id)arg1;
+ (void)reportPublishEventWithParams:(id)arg1;
+ (id)commonParamsWithPublisherType:(unsigned long long)arg1 picCnt:(unsigned long long)arg2 isVisScopeSet:(BOOL)arg3 hasContent:(BOOL)arg4 hasLocation:(BOOL)arg5 hasMention:(BOOL)arg6 publishSessionId:(id)arg7 snsPublishSessionId:(id)arg8 snsEditId:(id)arg9;
+ (void)_reportEventId:(id)arg1 params:(id)arg2;
@end

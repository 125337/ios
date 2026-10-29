@interface MessageVoiceTransReporter : NSObject
+ (void)reportQuickTransTipExposureWithMessage:(id)arg1 isDialectTip:(BOOL)arg2;
+ (void)reportQuickTransTipClickWithMessage:(id)arg1 isDialectTip:(BOOL)arg2;
+ (void)reportFeedbackTipExposureWithMessage:(id)arg1;
+ (void)reportFeedbackTipClickWithMessage:(id)arg1;
+ (void)recordTriggerWithMessage:(id)arg1 resultType:(unsigned long long)arg2 triggerScene:(unsigned long long)arg3;
+ (void)recordTimings:(id)arg1 withMessage:(id)arg2;
+ (void)recordResultEndWithMessage:(id)arg1;
+ (void)reportResultSuccessWithMessage:(id)arg1 translateInfo:(id)arg2;
+ (void)reportResultFailureWithMessage:(id)arg1 translateInfo:(id)arg2;
+ (void)clearResultTrackingWithMessage:(id)arg1;
+ (void)reportViewId:(id)arg1 eventId:(id)arg2 messageWrap:(id)arg3 includeCurrentUsername:(BOOL)arg4 dedupeExposure:(BOOL)arg5;
+ (id)baseParamsWithMessage:(id)arg1 includeCurrentUsername:(BOOL)arg2;
+ (id)sendUsernameForMessage:(id)arg1;
+ (BOOL)markExposureIfNeededForViewId:(id)arg1 messageWrap:(id)arg2;
+ (unsigned long long)codePointCountOfString:(id)arg1;
+ (id)resultStateKeyForMessage:(id)arg1;
+ (id)resultStateMap;
@end

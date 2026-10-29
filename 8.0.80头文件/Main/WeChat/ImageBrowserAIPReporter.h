@interface ImageBrowserAIPReporter : NSObject
+ (void)resolveSubjectTypeWithImageBrowserIntentType:(long long)arg1 context:(id)arg2;
+ (void)markBottomButtonVisibleWithContext:(id)arg1;
+ (void)reportBottomButtonClickWithContext:(id)arg1;
+ (void)reportSuggestionExpWithContext:(id)arg1 l1Text:(id)arg2 l2Text:(id)arg3;
+ (void)reportSuggestionClkWithContext:(id)arg1 l1Text:(id)arg2 l2Text:(id)arg3;
+ (void)reportShareMenuExposureWithContext:(id)arg1;
+ (void)reportShareMenuClickWithContext:(id)arg1;
+ (void)reportXiaoweiLaunchSuccessWithContext:(id)arg1;
+ (id)xiaoweiSrcInfoParamsWithContext:(id)arg1;
+ (id)imageAiCdnUrlForMessage:(id)arg1;
+ (id)menuReportExtraParamsWithContext:(id)arg1;
+ (void)flushPendingEventsWithContext:(id)arg1;
+ (void)reportViewId:(id)arg1 eventId:(id)arg2 context:(id)arg3;
+ (void)reportSuggestionViewEventWithContext:(id)arg1 eventId:(id)arg2 l1Text:(id)arg3 l2Text:(id)arg4;
+ (void)enqueueSuggestionEventToTarget:(id)arg1 l1Text:(id)arg2 l2Text:(id)arg3;
+ (BOOL)canReportWithContext:(id)arg1;
+ (id)baseParamsWithContext:(id)arg1;
+ (id)suggestionListJSONString:(id)arg1;
@end

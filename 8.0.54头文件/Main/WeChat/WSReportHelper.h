@interface WSReportHelper : NSObject
+ (void)ReportWSLoadH5Fail;
+ (void)ReportUnRecognizedJSApi;
+ (void)ReportWSLoadRecommendH5Fail;
+ (void)ReportAccessTopicSearchDownloadH5;
+ (void)reportPreviewWebviewAction:(unsigned long long)arg1 biz:(unsigned long long)arg2 timecost:(unsigned long long)arg3;
+ (void)reportRtnBackEvent:(int)arg1 scene:(unsigned int)arg2 ishomepage:(BOOL)arg3 query:(id)arg4;
+ (void)reportVoiceSearchEvent:(int)arg1 sessionid:(id)arg2 subSessionid:(id)arg3 query:(id)arg4 scene:(unsigned int)arg5 isNavVoice:(BOOL)arg6;
+ (void)reportVoiceSearchEvent:(int)arg1 sessionid:(id)arg2 subSessionid:(id)arg3 query:(id)arg4 scene:(unsigned int)arg5 isNavVoice:(BOOL)arg6 exposeId:(id)arg7;
+ (void)report15808Log:(unsigned int)arg1 actionType:(int)arg2;
+ (BOOL)IsWebRecommendPublishId:(id)arg1;
+ (void)ReportWebRecommendFeedsForSystemError:(id)arg1 nsUrl:(id)arg2;
+ (void)ReportWebRecommendFeedsLoadSuccess;
+ (void)ReportWebRecommendFeedsWKWebViewTerminateForeground:(id)arg1;
+ (void)ReportWebRecommendFeedsWKWebViewTerminateBackground:(id)arg1;
@end


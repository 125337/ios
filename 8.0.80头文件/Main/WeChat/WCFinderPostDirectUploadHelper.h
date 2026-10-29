@interface WCFinderPostDirectUploadHelper : NSObject
+ (BOOL)isDirectUploadEnabled;
+ (BOOL)isCompressionModelEnabled;
+ (BOOL)isSelectedVideoPath:(id)arg1 sameAsOriginFilePath:(id)arg2;
+ (BOOL)isCompositionTaskEligibleForDirectUpload:(id)arg1;
+ (void)fillDirectUploadInfoForPublisherPostInfo:(id)arg1 compositionTask:(id)arg2 userInfo:(id)arg3;
+ (id)buildContextWithPublisherPostInfo:(id)arg1 selectedVideoPath:(id)arg2;
+ (BOOL)shouldSampleUploadSpeedWithContext:(id)arg1 experimentGroup:(unsigned long long)arg2;
+ (id)sampleUploadSpeedWithCdnComMgr:(id)arg1 networkStatus:(id)arg2 taskId:(id)arg3 experimentGroup:(unsigned long long)arg4;
+ (id)evaluateDecisionWithContext:(id)arg1 taskId:(id)arg2;
+ (void)logModelPredictionWithDecision:(id)arg1 stage:(id)arg2;
+ (id)evaluateDecisionWithPublisherPostInfo:(id)arg1 compositionTask:(id)arg2 selectedVideoPath:(id)arg3;
+ (void)observeEncodingPlanForTask:(id)arg1 publisherPostInfo:(id)arg2 context:(id)arg3 decision:(id)arg4;
+ (BOOL)revalidateDirectUploadExecutionWithPostSession:(id)arg1;
+ (void)materializeDecision:(id)arg1 postSession:(id)arg2;
@end

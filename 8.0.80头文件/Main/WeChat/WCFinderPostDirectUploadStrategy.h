@interface WCFinderPostDirectUploadStrategy : NSObject
+ (void)estimateOriginUploadWithContext:(id)arg1 decision:(id)arg2;
+ (id)unavailablePredictionWithStatus:(unsigned long long)arg1 reason:(id)arg2 modelVersion:(id)arg3 input:(id)arg4;
+ (id)compressionInputWithContext:(id)arg1;
+ (id)invalidCompressionInputField:(id)arg1;
+ (BOOL)isSupportedReencodingInput:(id)arg1;
+ (id)predictCompressionWithContext:(id)arg1;
+ (unsigned long long)recommendActionWithContext:(id)arg1 decision:(id)arg2;
+ (BOOL)isServerCompatibleWithSnapshot:(id)arg1 config:(id)arg2 outReason:(unsigned long long *)arg3;
+ (unsigned long long)predictActionWithContext:(id)arg1 config:(id)arg2 isWifi:(BOOL)arg3 decision:(id)arg4;
+ (void)applyExperimentGroupMappingWithConfig:(id)arg1 predictedAction:(unsigned long long)arg2 decision:(id)arg3;
+ (id)evaluateWithContext:(id)arg1 config:(id)arg2 networkType:(unsigned int)arg3 isWifi:(BOOL)arg4;
@end

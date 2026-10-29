@interface ScanAIIntentV3PreQualityPolicy : NSObject <ScanAIIntentQualityPolicy>
- (id)qualityContextForFrame:(id)arg1 mode:(long long)arg2;
- (BOOL)shouldRunInferenceWithContext:(id)arg1;
- (BOOL)shouldKeepWinner:(id)arg1 candidates:(id)arg2 context:(id)arg3;
- (BOOL)qualityWouldKeepWinner:(id)arg1 candidates:(id)arg2 context:(id)arg3;
@end

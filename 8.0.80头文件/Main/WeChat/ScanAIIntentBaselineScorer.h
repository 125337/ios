@interface ScanAIIntentBaselineScorer : NSObject
+ (double)intentTypeScoreForType:(long long)arg1;
+ (long long)stableOrderForType:(long long)arg1;
+ (BOOL)evaluation:(id)arg1 ranksBeforeEvaluation:(id)arg2;
@end

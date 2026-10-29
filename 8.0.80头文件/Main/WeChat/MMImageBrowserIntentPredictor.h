@interface MMImageBrowserIntentPredictor : NSObject
{
    MMImageBrowserIntentXNetApplication * _xnetApplication; // +0x8
    NSObject<OS_dispatch_queue> * _predictionQueue; // +0x10
}
+ (long long)intentForLabelType:(unsigned long long)arg1;
+ (float)modelScoreThreshold;
+ (BOOL)isTextPriorityLabelType:(unsigned long long)arg1;
+ (long long)priorityForModelLabelType:(unsigned long long)arg1 containsTextCandidate:(BOOL)arg2;
+ (BOOL)resolvePrioritizedScoreForScores:(id)arg1 scoreIndex:(unsigned long long *)arg2 highestScore:(float *)arg3;
+ (long long)intentForScores:(id)arg1 scoreIndex:(unsigned long long *)arg2 highestScore:(float *)arg3;
+ (id)nameForIntentType:(long long)arg1;
- (id)init;
- (long long)predictIntentForImage:(id)arg1;
- (void)predictIntentForImage:(id)arg1 requestId:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
@end

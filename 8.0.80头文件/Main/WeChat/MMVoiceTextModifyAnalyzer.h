@interface MMVoiceTextModifyAnalyzer : NSObject
+ (id)toneTable;
+ (id)punctuationTable;
+ (void)_accumulateForChar:(unsigned short)arg1 appendToneList:(id)arg2 appendPunctuationList:(id)arg3 addToTotalModifyCnt:(long long *)arg4;
+ (void)analyzeFromSnapshot:(id)arg1 toCurrent:(id)arg2 appendToneList:(id)arg3 appendPunctuationList:(id)arg4 addToTotalModifyCnt:(long long *)arg5;
@end

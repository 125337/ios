@interface MMDictationHotwordReporter : NSObject
+ (BOOL)isEnabled;
+ (id)inputBoxTextSnapshots;
+ (id)normalizedContextKey:(id)arg1;
+ (void)recordASREndInputBoxText:(id)arg1 contextKey:(id)arg2;
+ (void)reportSentText:(id)arg1 contextKey:(id)arg2;
+ (void)clearContextKey:(id)arg1;
+ (void)reportASREndInputBoxText:(id)arg1 sentText:(id)arg2;
@end

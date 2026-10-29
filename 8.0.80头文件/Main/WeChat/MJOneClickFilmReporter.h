@interface MJOneClickFilmReporter : NSObject
+ (void)reportEvent:(id)arg1 viewID:(id)arg2 pageID:(id)arg3 context:(id)arg4 extraParams:(id)arg5;
+ (void)reportViewClick:(id)arg1 context:(id)arg2;
+ (void)beginStage:(unsigned long long)arg1 composeType:(unsigned long long)arg2 context:(id)arg3;
+ (void)beginStage:(unsigned long long)arg1 composeType:(unsigned long long)arg2 atTime:(unsigned long long)arg3 context:(id)arg4;
+ (id)eventForStage:(unsigned long long)arg1;
+ (void)finishStage:(unsigned long long)arg1 result:(unsigned long long)arg2 context:(id)arg3;
+ (void)finishStage:(unsigned long long)arg1 result:(unsigned long long)arg2 atTime:(unsigned long long)arg3 context:(id)arg4;
+ (void)finishInitialCreationWithResult:(unsigned long long)arg1 context:(id)arg2;
+ (void)loadingDidShowWithContext:(id)arg1;
+ (void)finishLoadingWithReason:(unsigned long long)arg1 context:(id)arg2;
+ (void)pageDidShowWithContext:(id)arg1;
+ (void)finishPageWithReason:(unsigned long long)arg1 context:(id)arg2;
@end

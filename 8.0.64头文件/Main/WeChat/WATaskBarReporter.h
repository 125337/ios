@interface WATaskBarReporter : NSObject
+ (void)reportWATaskBarAppear:(id)arg1;
+ (void)reportWATaskBarClose:(id)arg1;
+ (void)reportWATaskBarFeedAppear:(id)arg1;
+ (void)reportWATaskBarClick:(id)arg1;
+ (void)reportWATaskBarFeedAddDelete:(id)arg1;
+ (unsigned long long)bizNameToItemType:(id)arg1;
+ (id)getTaskBizKeyFromWeApp:(id)arg1 debugType:(unsigned int)arg2;
@end

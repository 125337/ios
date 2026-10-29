@interface MMScreenShotAIEntryProvider : NSObject <MMScreenShotEntryProvider>
+ (id)makeEntry;
+ (void)showWithImage:(id)arg1 context:(id)arg2 pageParams:(id)arg3;
+ (void)reportEvent:(id)arg1 context:(id)arg2 pageParams:(id)arg3;
+ (id)sourceParamsWithContext:(id)arg1 pageParams:(id)arg2;
+ (id)pageInfoParams;
@end

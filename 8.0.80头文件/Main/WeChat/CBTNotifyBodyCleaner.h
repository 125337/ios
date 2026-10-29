@interface CBTNotifyBodyCleaner : NSObject
+ (id)cleanNotifyBodyFromMarkdown:(id)arg1 fallback:(id)arg2;
+ (id)stripPattern:(id)arg1 fromString:(id)arg2;
+ (id)stripPattern:(id)arg1 fromString:(id)arg2 replacement:(id)arg3;
@end

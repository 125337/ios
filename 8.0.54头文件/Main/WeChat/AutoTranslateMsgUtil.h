@interface AutoTranslateMsgUtil : NSObject
+ (void)increaseAutoTranslateCount:(id)arg1;
+ (BOOL)isAutoTranslateTriggerPoint:(id)arg1;
+ (void)resetAutoTranslateCount:(id)arg1;
+ (void)setAutoTranslateEntryExpose:(id)arg1;
+ (BOOL)isAutoTranslateEntryExpose:(id)arg1;
+ (BOOL)canShowAutoTranslateEntry:(id)arg1;
+ (BOOL)isAutoTranslateEnable:(id)arg1;
+ (void)openAutoTranslate:(id)arg1 fromLocalId:(unsigned int)arg2;
+ (void)resetAutoTranslate:(id)arg1 fromLocalId:(unsigned int)arg2;
+ (unsigned int)getAutoTranslateLocalId:(id)arg1;
+ (void)closeAutoTranslate:(id)arg1;
@end


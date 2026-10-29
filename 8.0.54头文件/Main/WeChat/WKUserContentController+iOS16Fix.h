@interface WKUserContentController (iOS16Fix)
+ (void)load;
+ (BOOL)iOS16FixEnable;
+ (HashTable *)atomStringHashTableWith:(unsigned long long)arg1 offset:(int)arg2 arch:(long long)arg3;
+ (HashTable *)atomStringTable;
+ (void)removeAtomString:(id)arg1;
+ (void)setFixIOS16Enable:(BOOL)arg1;
+ (void)cleanAtomStringTable;
- (void)mm_addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)mm_addScriptMessageHandlerWithReply:(id)arg1 contentWorld:(id)arg2 name:(id)arg3;
- (void)mm_removeScriptMessageHandlerForName:(id)arg1;
@end


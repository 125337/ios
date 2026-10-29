@interface NSObject (WCAop)
+ (unsigned long long)WCAop_hookSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 withTag:(id)arg3 usingBlock:(id)arg4;
+ (void)WCAop_removeBlockOfSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 withTag:(id)arg3;
- (unsigned long long)WCAop_hookSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 withTag:(id)arg3 usingBlock:(id)arg4;
- (void)WCAop_removeBlockOfSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 withTag:(id)arg3;
@end

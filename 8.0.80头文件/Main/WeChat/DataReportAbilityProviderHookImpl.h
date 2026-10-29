@interface DataReportAbilityProviderHookImpl : NSObject <AmoebaAbilityProviderHook>
- (BOOL)hookSelector:(SEL)arg1 forObj:(id)arg2 atPosition:(long long)arg3 withTag:(id)arg4 usingBlock:(id)arg5;
- (void)removeBlockOfSelector:(SEL)arg1 forObj:(id)arg2 atPosition:(long long)arg3 withTag:(id)arg4;
@end

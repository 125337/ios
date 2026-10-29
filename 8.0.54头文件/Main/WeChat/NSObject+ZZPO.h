@interface NSObject (ZZPO)
- (void)observerDeallocWithTag:(id)arg1 action:(id /* block */)arg2;
- (id)observerPropertyByName:(id)arg1 tag:(id)arg2 action:(id)arg3;
- (BOOL)_hookWithSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 tag:(id)arg3 action:(id)arg4;
- (void)_removeHookWithSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 tag:(id)arg3;
- (id)getPropertyInvocationByName:(id)arg1;
- (id)getInvocationForSelector:(SEL)arg1;
- (id)zz_poMap;
- (id)zz_aopMap;
@end


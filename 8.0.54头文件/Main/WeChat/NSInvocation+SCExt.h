@interface NSInvocation (SCExt)
+ (id)sc_invocationWithTarget:(id)arg1 selector:(SEL)arg2 arguments:(id)arg3;
- (BOOL)setArgumentsFromArgumentList:(char *)arg1;
- (id)sc_invoke;
- (id)sc_returnValueWithType:(long long)arg1;
@end


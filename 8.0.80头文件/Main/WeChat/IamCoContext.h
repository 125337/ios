@interface IamCoContext : NSObject
+ (BOOL)isRunInCoContext;
+ (id)currentContext;
+ (id)lastContext;
+ (void)push:(id)arg1;
+ (void)pop:(id)arg1;
+ (void)setContext:(id)arg1 atIndex:(unsigned long long)arg2;
@end

@interface WxpayCoreTrace : NSObject
+ (void)initialize;
+ (void)emit:(id)arg1;
+ (void)setSink:(id /* block */)arg1;
+ (void)begin;
+ (void)mark:(long long)arg1;
+ (void)end;
+ (id)elapsedForNode:(long long)arg1;
+ (void)resetForTest;
@end

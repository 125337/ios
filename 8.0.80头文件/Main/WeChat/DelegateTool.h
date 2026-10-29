@interface DelegateTool : NSObject
+ (id)createDelegate:(id)arg1;
+ (void)addEmptyImplementationsForProtocol:(id)arg1 toClass:(Class)arg2;
+ (void)addMethodImplementationsForProtocol:(id)arg1 isRequired:(BOOL)arg2 toClass:(Class)arg3;
+ (void)setImplementationForSelector:(SEL)arg1 onDelegate:(id)arg2 usingBlock:(id)arg3;
+ (void)releaseDelegate:(id)arg1;
+ (id)getDelegate:(id)arg1;
+ (void)retainDelegateHost:(id)arg1 toKey:(id)arg2;
@end

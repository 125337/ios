@interface AmoebaUIViewHookHelper : NSObject
+ (void)hookUIView:(id)arg1;
+ (void)unHookUIView:(id)arg1;
+ (void)hookUIScrollViewDelegate:(id)arg1;
+ (void)unHookUIScrollViewDelegate:(id)arg1;
+ (void)addInstanceMethodWithSelectors:(SEL)arg1 object:(id)arg2 fromClass:(Class)arg3 toClass:(Class)arg4;
+ (void * *)implementationOfMethodSelector:(SEL)arg1 fromClass:(Class)arg2;
+ (void)addInstanceMethodWithSelector:(SEL)arg1 fromClass:(Class)arg2 toClass:(Class)arg3;
+ (void)addInstanceMethodWithDestinationSelector:(SEL)arg1 sourceSelector:(SEL)arg2 fromClass:(Class)arg3 toClass:(Class)arg4;
+ (BOOL)isHookSwitch;
- (void)scrollViewDidScroll:(id)arg1;
@end

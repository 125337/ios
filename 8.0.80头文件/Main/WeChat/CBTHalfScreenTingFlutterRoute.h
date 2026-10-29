@interface CBTHalfScreenTingFlutterRoute : NSObject
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (id)p_reuseStates;
+ (id)p_reuseStateForKey:(id)arg1;
+ (BOOL)p_isInstanceAliveForReuseKey:(id)arg1;
+ (void)p_updateReuseState:(id)arg1 routeType:(long long)arg2 tingTextMode:(BOOL)arg3 questionText:(id)arg4 musicWrapData:(id)arg5;
+ (id)p_musicXmlFromData:(id)arg1;
+ (id)p_musicListBypassJson:(id)arg1 showCard:(BOOL)arg2;
+ (id)p_bypassCardItemWithMultimodalType:(int)arg1 cardwrapType:(int)arg2 bypassDetailJson:(id)arg3;
@end

@interface TXLiveJSAdapterManager : NSObject
+ (id)createLivePushJSAdapterWithId:(unsigned int)arg1 configs:(id)arg2 preview:(id)arg3 appId:(id)arg4 useSkyline:(BOOL)arg5 delegate:(id)arg6;
+ (id)createLivePlayJSAdapterWithId:(unsigned int)arg1 configs:(id)arg2 containerView:(id)arg3 appId:(id)arg4 useSkyline:(BOOL)arg5 delegate:(id)arg6;
@end

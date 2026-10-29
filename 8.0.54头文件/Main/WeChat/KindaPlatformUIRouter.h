@interface KindaPlatformUIRouter : NSObject <MMKPlatformUIRouter>
- (id)init;
- (void)gotoExternApp:(id)arg1 errcode:(int)arg2 returnKey:(id)arg3 universalLink:(id)arg4 contextID:(id)arg5 needToken:(int)arg6 needShowPage:(int)arg7 openApiParam:(id)arg8;
- (void)jointpayGotoExternApp:(id)arg1 errcode:(int)arg2 returnKey:(id)arg3 universalLink:(id)arg4 contextID:(id)arg5 needToken:(int)arg6 needShowPage:(int)arg7 openApiParam:(id)arg8;
- (void)openUrlScheme:(id)arg1;
@end


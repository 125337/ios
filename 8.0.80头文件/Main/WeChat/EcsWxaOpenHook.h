@interface EcsWxaOpenHook : NSObject
{
    id /* block */ _onWillOpenWxa; // +0x8
}
+ (void)registerPlugins:(id)arg1;
+ (id)pluginClasses;
- (id)plugins;
- (BOOL)hasPlugins;
- (id)handleWillOpenWxa:(id)arg1 extInfo:(id)arg2 handlerWrapper:(id)arg3 context:(id)arg4;
- (void)mergeResponse:(id)arg1 withResponse:(id)arg2;
- (id)init;
- (id /* block */)onWillOpenWxa;
- (void)setOnWillOpenWxa:(id /* block */)arg1;
- (void).cxx_destruct;
@end

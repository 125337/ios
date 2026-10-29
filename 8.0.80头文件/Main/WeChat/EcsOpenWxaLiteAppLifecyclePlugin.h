@interface EcsOpenWxaLiteAppLifecyclePlugin : NSObject <EcsOpenWxaHookPlugin>
+ (id)onWillOpenWxa:(id)arg1 extInfo:(id)arg2 context:(id)arg3;
+ (void)publishOverlayEventWithAppUuid:(unsigned int)arg1 pageId:(unsigned long long)arg2 type:(id)arg3;
+ (void)publishGlobalEventWithAppUuid:(unsigned int)arg1 pageId:(unsigned long long)arg2 name:(id)arg3;
@end

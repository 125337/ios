@interface AppSpecificLiteAppStoreAdapter : MMObject <MMLiteAppStoreExt>
{
    id <WAJSEventHandlerContextDelegate> _context; // +0x8
    NSString * _appId; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (id)context;
- (void)setContext:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end

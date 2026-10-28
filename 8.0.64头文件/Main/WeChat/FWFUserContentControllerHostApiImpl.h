@interface FWFUserContentControllerHostApiImpl : NSObject <FWFWKUserContentControllerHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)userContentControllerForIdentifier:(long long)arg1;
- (void)createFromWebViewConfigurationWithIdentifier:(long long)arg1 configurationIdentifier:(long long)arg2 error:(id *)arg3;
- (void)addScriptMessageHandlerForControllerWithIdentifier:(long long)arg1 handlerIdentifier:(long long)arg2 ofName:(id)arg3 error:(id *)arg4;
- (void)removeScriptMessageHandlerForControllerWithIdentifier:(long long)arg1 name:(id)arg2 error:(id *)arg3;
- (void)removeAllScriptMessageHandlersForControllerWithIdentifier:(long long)arg1 error:(id *)arg2;
- (void)addUserScriptForControllerWithIdentifier:(long long)arg1 userScript:(id)arg2 error:(id *)arg3;
- (void)removeAllUserScriptsForControllerWithIdentifier:(long long)arg1 error:(id *)arg2;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

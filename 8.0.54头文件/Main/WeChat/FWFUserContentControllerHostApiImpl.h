@interface FWFUserContentControllerHostApiImpl : NSObject <FWFWKUserContentControllerHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)userContentControllerForIdentifier:(id)arg1;
- (void)createFromWebViewConfigurationWithIdentifier:(id)arg1 configurationIdentifier:(id)arg2 error:(id *)arg3;
- (void)addScriptMessageHandlerForControllerWithIdentifier:(id)arg1 handlerIdentifier:(id)arg2 ofName:(id)arg3 error:(id *)arg4;
- (void)removeScriptMessageHandlerForControllerWithIdentifier:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (void)removeAllScriptMessageHandlersForControllerWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)addUserScriptForControllerWithIdentifier:(id)arg1 userScript:(id)arg2 error:(id *)arg3;
- (void)removeAllUserScriptsForControllerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end


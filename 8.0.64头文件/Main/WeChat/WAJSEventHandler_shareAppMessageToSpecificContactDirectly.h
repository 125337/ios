@interface WAJSEventHandler_shareAppMessageToSpecificContactDirectly : WAJSEventHandler_shareAppMessageDirectly
{
    NSDictionary * _dic; // +0x8
    BOOL _forNativeWeApp; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)doShareLogicWith:(id)arg1 forNativeWeApp:(BOOL)arg2;
- (void)transferOpenId:(id)arg1 appId:(id)arg2;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleShareTransID:(id)arg1;
- (void)shareWithParams:(id)arg1 username:(id)arg2;
- (BOOL)forNativeWeApp;
- (void)setForNativeWeApp:(BOOL)arg1;
- (void).cxx_destruct;
@end

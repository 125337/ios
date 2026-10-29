@interface LiteAppJsApiOpenUserProfile : LiteAppJsApi <IStrangerContactMgrExt>
{
    NSDictionary * _param; // +0x20
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)showErrorWhenNoContact;
- (id)param;
- (void)setParam:(id)arg1;
- (void).cxx_destruct;
@end

@interface ContactUpdateHelper : NSObject <IStrangerContactMgrExt>
{
    NSString * _m_moduleName; // +0x8
    NSString * _m_userName; // +0x10
    id /* block */ _m_block; // +0x18
}
- (void)dealloc;
- (id)initWithModuleName:(id)arg1;
- (void)startWithUserName:(id)arg1 onUpdate:(id /* block */)arg2;
- (BOOL)normalContactToBlock;
- (BOOL)strangerContactToBlock;
- (void)updateStangerContact;
- (void)clearBlock;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (id)m_moduleName;
- (void)setM_moduleName:(id)arg1;
- (id)m_userName;
- (void)setM_userName:(id)arg1;
- (id /* block */)m_block;
- (void)setM_block:(id /* block */)arg1;
- (void).cxx_destruct;
@end

@interface CBTCustAsstMgr : MMUserService <IContactMgrExt, IMsgExt, MMServiceProtocol>
{
    NSMutableArray * _custAsstCache; // +0x8
}
- (void)onNewContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (id)cachedCustAsstContacts;
- (id)serializedCustAsstList;
- (void)openBoxChatPageWithUsername:(id)arg1 fromViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)openBoxChatPageFromMsgBannerWithUsername:(id)arg1;
- (void)clearBoxSessionUnreadWithUsername:(id)arg1;
- (void)fullScan;
- (void)removeCustAsstFromCache:(id)arg1;
- (void)notifyFlutterCustAsstListChanged;
- (unsigned long long)indexOfCustAsstByUsername:(id)arg1;
- (id)searchCustAsstContactsWithKeyword:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)custAsstXMLValueForTag:(id)arg1 inXML:(id)arg2;
- (void).cxx_destruct;
@end

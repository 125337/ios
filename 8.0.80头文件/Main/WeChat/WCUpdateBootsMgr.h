@interface WCUpdateBootsMgr : MMUserService <INewSyncExt, IMsgExt, MMServiceProtocol>
- (void)onServiceInit;
- (void)onNewSyncIPXX:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
@end

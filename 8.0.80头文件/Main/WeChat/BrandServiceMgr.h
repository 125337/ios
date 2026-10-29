@interface BrandServiceMgr : MMUserService <MMServiceProtocol, IMsgExt>
{
    BrandServiceStorage * m_serviceStorage; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (long long)GetContinueLocationReportInterval;
- (void)MarkHasSetLocationForUser:(id)arg1;
- (BOOL)HasSetLocationForUser:(id)arg1;
- (void)ResetLocationForUser:(id)arg1;
- (id)pathForStorage;
- (void)loadStorage;
- (void)saveStorage;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void).cxx_destruct;
@end

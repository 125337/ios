@interface BrandPaySubcribeMgr : MMUserService <MPPageRelatedInfoMgrExt, IMsgExt, IExptServiceExt, MMServiceProtocol>
{
    BOOL _isPaySubscribeOpen; // +0x8
    MemoryMappedKV * _mappedKV; // +0x10
}
- (BOOL)isPaySubcribeOpen;
- (BOOL)isMPPagePaid:(id)arg1;
- (BOOL)isMPPagePaidWithPageIdentifier:(id)arg1;
- (BOOL)updateMPPageHasPaidWithFullUrl:(id)arg1;
- (BOOL)hasUserPaySubscribeEntry;
- (id)paySubscribeEntryUrl;
- (void)updateUserPaySubcribeEntryInfo:(BOOL)arg1 paySubscribeEntryUrl:(id)arg2;
- (BOOL)isShowRedDotWithPath:(unsigned long long)arg1;
- (void)diposeRedDotWithPath:(unsigned long long)arg1;
- (void)configueShowRedDot:(BOOL)arg1 path:(unsigned long long)arg2;
- (void)clearAllPayStatus;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)registerExtension;
- (void)unregisterExtension;
- (void)resetMappedKv;
- (id)mappedKV;
- (BOOL)updateMPPagePayStatusWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
- (BOOL)updateMPPageHasPaidWithPayInfoArr:(id)arg1;
- (void)onBatchUpdateMPPageRelatedInfoArr:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onExptItemListChange;
- (void)setMappedKV:(id)arg1;
- (BOOL)isPaySubscribeOpen;
- (void)setIsPaySubscribeOpen:(BOOL)arg1;
- (void).cxx_destruct;
@end

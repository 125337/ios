@interface MMCompatibleCGIMgr : MMUserService <MMServiceProtocol>
{
    MMCompatibleCGIDB * m_compatibleCGIDB; // +0x8
}
- (id)init;
- (void)initData;
- (void)onServiceClearData;
- (void)dealloc;
- (void)saveCompatibleCGIData:(id)arg1 compatibleCGIType:(unsigned int)arg2;
- (void)saveCompatibleCGIData:(id)arg1 compatibleCGIType:(unsigned int)arg2 pbUniqueID:(id)arg3;
- (void)reloadCompatibleCGIDataWithId:(id)arg1 handleblock:(id /* block */)arg2;
- (id)getPBRequestObject:(id)arg1;
- (id)getPBResponseObject:(id)arg1;
- (id)getPbUniqueIDWithPBCGIWrap:(id)arg1 andCompatibleCGIType:(unsigned int)arg2;
- (id)getPbUniqueIDWithCompatibleCGIType:(unsigned int)arg1 pbInfo:(id)arg2;
- (id)getCompatibleCGIDataWithId:(id)arg1;
- (unsigned int)getUiCgiWithCompatibleCGIType:(unsigned int)arg1;
- (id)getPbUniqueIDPrefixWithCompatibleCGIType:(unsigned int)arg1;
- (BOOL)checkHadCompatibleCGIDataWithId:(id)arg1;
- (void).cxx_destruct;
@end


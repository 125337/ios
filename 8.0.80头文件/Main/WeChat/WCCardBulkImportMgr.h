@interface WCCardBulkImportMgr : MMObject <PBMessageObserverDelegate>
{
    id <WCCardBulkImportMgrDelegate> _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)getBulkCard:(id)arg1;
- (void)importBulkCard:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetBulkCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleImportBulkCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end

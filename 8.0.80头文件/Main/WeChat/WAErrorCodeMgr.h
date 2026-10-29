@interface WAErrorCodeMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _arrRecord; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)addErrCodeRecord:(unsigned long long)arg1;
- (id)getAllErrCodeRecord;
- (void).cxx_destruct;
@end

@interface MagicSclFrameSetInfoDBService : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _db; // +0x8
    WCTTable * _frameSetInfoTable; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (BOOL)updateHeightForBizName:(id)arg1 frameSetName:(id)arg2 path:(id)arg3 newHeight:(int)arg4;
- (int)getHeightForBizName:(id)arg1 frameSetName:(id)arg2 path:(id)arg3;
- (void)reInit;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void).cxx_destruct;
@end


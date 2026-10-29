@interface MMPowerMgr : MMRootService <MMServiceProtocol>
{
    BOOL m_bTestCPUOrNot; // +0x8
}
- (void)onServiceInit;
- (void)markTestCPU:(BOOL)arg1;
- (void)costCPUALot;
@end

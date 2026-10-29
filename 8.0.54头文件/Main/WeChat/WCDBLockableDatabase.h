@interface WCDBLockableDatabase : WCTDatabase <WCDBLockable>
{
    WCDBLockGuard _lockGuard; // +0x8
}
- (id)initWithDatabase:(id)arg1;
- (void)lockGuard:(void *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


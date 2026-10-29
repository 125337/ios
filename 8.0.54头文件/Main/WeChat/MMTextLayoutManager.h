@interface MMTextLayoutManager : MMUserService <MMServiceProtocol>
{
    unsigned int _os; // +0x8
    MMTextLayoutABKey * _abkey; // +0x10
    NSMutableSet * _set; // +0x18
    long long _errorCount; // +0x20
    long long _total; // +0x28
    long long _lastTotal; // +0x30
    long long _profileCounter; // +0x38
    struct _stat; // +0x40
}
- (void)onServiceInit;
- (void)setup;
- (void)onServiceTerminate;
- (void)addString:(id)arg1 font:(id)arg2 fastSize:(CGSize)arg3 stat:(struct)arg4;
- (void)profileString:(id)arg1 font:(id)arg2 fastSize:(CGSize)arg3 stat:(struct)arg4;
- (void)addLog:(id)arg1 string:(id)arg2 offW:(double)arg3 offH:(double)arg4 fastSize:(CGSize)arg5;
- (void)addItem:(id)arg1;
- (BOOL)shoudDisableWithAvg:(double)arg1;
- (void)report;
- (void)disableByError;
- (id)abkey;
- (void)setAbkey:(id)arg1;
- (id)set;
- (void)setSet:(id)arg1;
- (long long)errorCount;
- (void)setErrorCount:(long long)arg1;
- (unsigned int)os;
- (void)setOs:(unsigned int)arg1;
- (struct)stat;
- (void)setStat:(struct)arg1;
- (long long)total;
- (void)setTotal:(long long)arg1;
- (long long)lastTotal;
- (void)setLastTotal:(long long)arg1;
- (long long)profileCounter;
- (void)setProfileCounter:(long long)arg1;
- (void).cxx_destruct;
@end


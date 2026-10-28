@interface JSC2Manager : MMRootService <MMServiceProtocol>
{
    vector<JSC2ReportKey, std::allocator<JSC2ReportKey>> _keys; // +0x8
}
+ (void)hook;
- (void)addReportKey:(unsigned long long)arg1;
- (void)report;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

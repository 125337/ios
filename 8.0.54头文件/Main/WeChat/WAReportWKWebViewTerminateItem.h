@interface WAReportWKWebViewTerminateItem : WAReportBaseItem
{
    long long _publicLibVersion; // +0x8
    unsigned long long _runningState; // +0x10
    long long _stackCount; // +0x18
    long long _stackIndex; // +0x20
    unsigned long long _tereminateType; // +0x28
    unsigned long long _memoryWarningType; // +0x30
    NSString * _stackTopPagePath; // +0x38
}
- (id)reportString;
- (long long)publicLibVersion;
- (void)setPublicLibVersion:(long long)arg1;
- (unsigned long long)runningState;
- (void)setRunningState:(unsigned long long)arg1;
- (long long)stackCount;
- (void)setStackCount:(long long)arg1;
- (long long)stackIndex;
- (void)setStackIndex:(long long)arg1;
- (unsigned long long)tereminateType;
- (void)setTereminateType:(unsigned long long)arg1;
- (unsigned long long)memoryWarningType;
- (void)setMemoryWarningType:(unsigned long long)arg1;
- (id)stackTopPagePath;
- (void)setStackTopPagePath:(id)arg1;
- (void).cxx_destruct;
@end


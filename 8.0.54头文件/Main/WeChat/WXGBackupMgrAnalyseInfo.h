@interface WXGBackupMgrAnalyseInfo : NSObject
{
    NSMutableDictionary * _allChatInfo; // +0x8
    unsigned long long _totalSessionCount; // +0x10
    unsigned long long _totalMsgCount; // +0x18
    unsigned long long _totalMediaCount; // +0x20
    unsigned long long _totalFilterMediaCount; // +0x28
    double _costTime; // +0x30
    unsigned long long _filterRequestCount; // +0x38
    double _filterRequestCostTime; // +0x40
    BackupAnalyseInfo * _analyseInfo; // +0x48
    double _startTime; // +0x50
    NSString * _briefString; // +0x58
}
- (id)init;
- (unsigned long long)totalMsgCount;
- (unsigned long long)totalMediaCount;
- (unsigned long long)totalFilterMediaCount;
- (double)costTime;
- (id)analyseInfo;
- (id)brief;
- (id)allChatInfo;
- (void)setAllChatInfo:(id)arg1;
- (unsigned long long)totalSessionCount;
- (void)setTotalSessionCount:(unsigned long long)arg1;
- (void)setTotalMsgCount:(unsigned long long)arg1;
- (void)setTotalMediaCount:(unsigned long long)arg1;
- (void)setTotalFilterMediaCount:(unsigned long long)arg1;
- (void)setCostTime:(double)arg1;
- (unsigned long long)filterRequestCount;
- (void)setFilterRequestCount:(unsigned long long)arg1;
- (double)filterRequestCostTime;
- (void)setFilterRequestCostTime:(double)arg1;
- (void)setAnalyseInfo:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)briefString;
- (void)setBriefString:(id)arg1;
- (void).cxx_destruct;
@end


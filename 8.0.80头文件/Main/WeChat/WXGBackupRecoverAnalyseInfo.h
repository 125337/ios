@interface WXGBackupRecoverAnalyseInfo : NSObject
{
    double _costTime; // +0x8
    unsigned long long _msgListCount; // +0x10
    unsigned long long _mediaCount; // +0x18
    unsigned long long _msgListSize; // +0x20
    unsigned long long _mediaSize; // +0x28
    unsigned long long _filterMediaCount; // +0x30
    unsigned long long _filterMediaSize; // +0x38
    unsigned long long _requestFilterMediaCount; // +0x40
    unsigned long long _requestFilterCount; // +0x48
    double _filterCostTime; // +0x50
    unsigned long long _minStartTime; // +0x58
    unsigned long long _maxEndTime; // +0x60
    NSMutableArray * _requestSessionInfo; // +0x68
    double _startTime; // +0x70
    NSString * _briefString; // +0x78
}
- (id)init;
- (id)brief;
- (double)costTime;
- (void)setCostTime:(double)arg1;
- (unsigned long long)msgListCount;
- (void)setMsgListCount:(unsigned long long)arg1;
- (unsigned long long)mediaCount;
- (void)setMediaCount:(unsigned long long)arg1;
- (unsigned long long)msgListSize;
- (void)setMsgListSize:(unsigned long long)arg1;
- (unsigned long long)mediaSize;
- (void)setMediaSize:(unsigned long long)arg1;
- (unsigned long long)filterMediaCount;
- (void)setFilterMediaCount:(unsigned long long)arg1;
- (unsigned long long)filterMediaSize;
- (void)setFilterMediaSize:(unsigned long long)arg1;
- (unsigned long long)requestFilterMediaCount;
- (void)setRequestFilterMediaCount:(unsigned long long)arg1;
- (unsigned long long)requestFilterCount;
- (void)setRequestFilterCount:(unsigned long long)arg1;
- (double)filterCostTime;
- (void)setFilterCostTime:(double)arg1;
- (unsigned long long)minStartTime;
- (void)setMinStartTime:(unsigned long long)arg1;
- (unsigned long long)maxEndTime;
- (void)setMaxEndTime:(unsigned long long)arg1;
- (id)requestSessionInfo;
- (void)setRequestSessionInfo:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)briefString;
- (void)setBriefString:(id)arg1;
- (void).cxx_destruct;
@end

@interface WAReportMemStatItem : WAReportBaseItem
{
    BOOL _isCache; // +0x8
    BOOL _isGame; // +0x9
    unsigned int _eventType; // +0xc
    unsigned int _openSeq; // +0x10
    unsigned int _openInterval; // +0x14
    unsigned int _waThreadMemUsed; // +0x18
    unsigned int _mainThreadMemUsed; // +0x1c
    unsigned int _lastKillReason; // +0x20
    long long _processMemUsed; // +0x28
    unsigned long long _coldLaunchInterAfterLastKillInMs; // +0x30
}
- (int)reportID;
- (id)reportString;
- (unsigned int)eventType;
- (void)setEventType:(unsigned int)arg1;
- (BOOL)isCache;
- (void)setIsCache:(BOOL)arg1;
- (unsigned int)openSeq;
- (void)setOpenSeq:(unsigned int)arg1;
- (unsigned int)openInterval;
- (void)setOpenInterval:(unsigned int)arg1;
- (long long)processMemUsed;
- (void)setProcessMemUsed:(long long)arg1;
- (unsigned int)waThreadMemUsed;
- (void)setWaThreadMemUsed:(unsigned int)arg1;
- (unsigned int)mainThreadMemUsed;
- (void)setMainThreadMemUsed:(unsigned int)arg1;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg1;
- (unsigned int)lastKillReason;
- (void)setLastKillReason:(unsigned int)arg1;
- (unsigned long long)coldLaunchInterAfterLastKillInMs;
- (void)setColdLaunchInterAfterLastKillInMs:(unsigned long long)arg1;
@end


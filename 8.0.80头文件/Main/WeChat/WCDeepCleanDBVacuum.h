@interface WCDeepCleanDBVacuum : NSObject <IDeepCleanClassProtocol>
{
    NSArray * m_vacuumInfos; // +0x8
    BOOL bCleanning; // +0x10
    BOOL bStop; // +0x11
    float progressLevel; // +0x14
    float lastProgress; // +0x18
    unsigned long long _freeSize; // +0x20
    unsigned long long _totalSize; // +0x28
}
- (id)initWithFreeSize:(unsigned long long)arg1;
- (void)refreshState;
- (id)vaccumInfos;
- (unsigned long long)getChatLogDBVacuumSize;
- (unsigned long long)getOtherDataDBVacuumSize;
- (void)stop;
- (unsigned long long)getClassSize;
- (void)cleanData;
- (float)progressLevel;
- (void)setProgressLevel:(float)arg1;
- (float)lastProgress;
- (void)setLastProgress:(float)arg1;
- (BOOL)bCleanning;
- (void)setBCleanning:(BOOL)arg1;
- (BOOL)bStop;
- (void)setBStop:(BOOL)arg1;
- (unsigned long long)freeSize;
- (void)setFreeSize:(unsigned long long)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

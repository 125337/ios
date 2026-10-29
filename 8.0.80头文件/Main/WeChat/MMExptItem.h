@interface MMExptItem : MMObject <PBCoding>
{
    unsigned int _exptId; // +0x8
    unsigned int _groupId; // +0xc
    unsigned int _exptSeq; // +0x10
    unsigned int _startTimeSec; // +0x14
    unsigned int _endTimeSec; // +0x18
    unsigned int _exptType; // +0x1c
    unsigned int _subType; // +0x20
    unsigned int _lastRptTimeSec; // +0x24
    unsigned int _fromSystem; // +0x28
    unsigned int _useFlag; // +0x2c
    NSDictionary * _exptArgs; // +0x30
    NSString * _exptCheckSum; // +0x38
    unsigned long long _bucketSrc; // +0x40
    NSString * _paramHashVal; // +0x48
}
+ (void)PBArrayAdd_exptId;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_exptSeq;
+ (void)PBArrayAdd_startTimeSec;
+ (void)PBArrayAdd_endTimeSec;
+ (void)PBArrayAdd_exptArgs;
+ (void)PBArrayAdd_exptType;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_exptCheckSum;
+ (void)PBArrayAdd_fromSystem;
+ (void)PBArrayAdd_bucketSrc;
+ (void)PBArrayAdd_paramHashVal;
+ (void)PBArrayAdd_useFlag;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)isReady;
- (BOOL)checkTypeToReport;
- (BOOL)needReport;
- (BOOL)isXLabExpt;
- (BOOL)isSessionConfig;
- (BOOL)isSessionUBAConfig;
- (BOOL)isSessionPageConfig;
- (BOOL)isSessionViewBlackListConfig;
- (BOOL)isSessionEdgeComputingScriptConfig;
- (BOOL)isSessionEdgeComputingSqlConfig;
- (BOOL)isNewEdgeComputingScriptConfig;
- (BOOL)isNewEdgeComputingSqlConfig;
- (id)toSessionConfig;
- (BOOL)needRptSessionDetail;
- (unsigned int)checkSessionPageId;
- (BOOL)parseJson:(id)arg1;
- (id)decompressJson:(id)arg1;
- (unsigned int)decodeReferenceInt:(id)arg1 andWidth:(unsigned int)arg2;
- (unsigned int)decodeReferenceLength:(id)arg1;
- (BOOL)isFromApp;
- (BOOL)isUseExptAppByUseFlag;
- (unsigned int)exptId;
- (void)setExptId:(unsigned int)arg1;
- (unsigned int)groupId;
- (void)setGroupId:(unsigned int)arg1;
- (unsigned int)exptSeq;
- (void)setExptSeq:(unsigned int)arg1;
- (unsigned int)startTimeSec;
- (void)setStartTimeSec:(unsigned int)arg1;
- (unsigned int)endTimeSec;
- (void)setEndTimeSec:(unsigned int)arg1;
- (id)exptArgs;
- (void)setExptArgs:(id)arg1;
- (unsigned int)exptType;
- (void)setExptType:(unsigned int)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (id)exptCheckSum;
- (void)setExptCheckSum:(id)arg1;
- (unsigned int)lastRptTimeSec;
- (void)setLastRptTimeSec:(unsigned int)arg1;
- (unsigned int)fromSystem;
- (void)setFromSystem:(unsigned int)arg1;
- (unsigned long long)bucketSrc;
- (void)setBucketSrc:(unsigned long long)arg1;
- (id)paramHashVal;
- (void)setParamHashVal:(id)arg1;
- (unsigned int)useFlag;
- (void)setUseFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

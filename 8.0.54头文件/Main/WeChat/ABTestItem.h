@interface ABTestItem : MMObject <PBCoding>
{
    BOOL _bNoReport; // +0x8
    unsigned int _uiSeq; // +0xc
    unsigned int _uiBeginTime; // +0x10
    unsigned int _uiEndTime; // +0x14
    unsigned int _uiPriorityLevel; // +0x18
    NSString * _nsLayerId; // +0x20
    NSString * _nsExpId; // +0x28
    NSDictionary * _dicExpArgs; // +0x30
    NSString * _nsBizId; // +0x38
}
+ (void)PBArrayAdd_nsLayerId;
+ (void)PBArrayAdd_nsExpId;
+ (void)PBArrayAdd_dicExpArgs;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_nsBizId;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)abtestRunning;
- (unsigned int)getPriorityLevel;
- (id)nsLayerId;
- (void)setNsLayerId:(id)arg1;
- (id)nsExpId;
- (void)setNsExpId:(id)arg1;
- (id)dicExpArgs;
- (void)setDicExpArgs:(id)arg1;
- (unsigned int)uiSeq;
- (void)setUiSeq:(unsigned int)arg1;
- (unsigned int)uiBeginTime;
- (void)setUiBeginTime:(unsigned int)arg1;
- (unsigned int)uiEndTime;
- (void)setUiEndTime:(unsigned int)arg1;
- (BOOL)bNoReport;
- (void)setBNoReport:(BOOL)arg1;
- (id)nsBizId;
- (void)setNsBizId:(id)arg1;
- (unsigned int)uiPriorityLevel;
- (void)setUiPriorityLevel:(unsigned int)arg1;
- (void).cxx_destruct;
@end


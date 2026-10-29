@interface ABTestExpKeyItem : MMObject <PBCoding>
{
    BOOL _bNoReport; // +0x8
    unsigned int _uiSeq; // +0xc
    unsigned int _uiBeginTime; // +0x10
    unsigned int _uiEndTime; // +0x14
    unsigned int _uiPriorityLevel; // +0x18
    unsigned int _uiMonitorHitId; // +0x1c
    unsigned int _uiMonitorHitKey; // +0x20
    NSString * _nsArgKey; // +0x28
    NSString * _nsValue; // +0x30
    NSString * _nsExpId; // +0x38
}
+ (void)PBArrayAdd_nsArgKey;
+ (void)PBArrayAdd_nsValue;
+ (void)PBArrayAdd_nsExpId;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_uiMonitorHitId;
+ (void)PBArrayAdd_uiMonitorHitKey;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isExpRunning;
- (BOOL)isExpired;
- (BOOL)isExpiredWithExpiredIds:(id)arg1;
- (BOOL)shouldBeReplaceByOther:(id)arg1;
- (id)nsArgKey;
- (void)setNsArgKey:(id)arg1;
- (id)nsValue;
- (void)setNsValue:(id)arg1;
- (id)nsExpId;
- (void)setNsExpId:(id)arg1;
- (unsigned int)uiSeq;
- (void)setUiSeq:(unsigned int)arg1;
- (unsigned int)uiBeginTime;
- (void)setUiBeginTime:(unsigned int)arg1;
- (unsigned int)uiEndTime;
- (void)setUiEndTime:(unsigned int)arg1;
- (unsigned int)uiPriorityLevel;
- (void)setUiPriorityLevel:(unsigned int)arg1;
- (BOOL)bNoReport;
- (void)setBNoReport:(BOOL)arg1;
- (unsigned int)uiMonitorHitId;
- (void)setUiMonitorHitId:(unsigned int)arg1;
- (unsigned int)uiMonitorHitKey;
- (void)setUiMonitorHitKey:(unsigned int)arg1;
- (void).cxx_destruct;
@end


@interface NewTipsInfo : MMObject <PBCoding>
{
    BOOL _disposed; // +0x8
    BOOL _hadBeginShow; // +0x9
    unsigned int _tipsId; // +0xc
    unsigned int _priority; // +0x10
    unsigned int _operate; // +0x14
    unsigned int _beginShowTime; // +0x18
    unsigned int _disappearTime; // +0x1c
    unsigned int _overdueTime; // +0x20
    unsigned int _minVersion; // +0x24
    unsigned int _maxVersion; // +0x28
    unsigned int _recieveTipsTime; // +0x2c
    unsigned int _realBeginShowTime; // +0x30
    unsigned int _tipsDisposeTime; // +0x34
    NSString * _uniqueId; // +0x38
    unsigned long long _tipsType; // +0x40
    NSString * _extInfo; // +0x48
    TipsReportInfo * _reportInfo; // +0x50
    NSMutableSet * _allowRegions; // +0x58
    NSMutableSet * _allowLanguage; // +0x60
    NSMutableDictionary * _dicShowInfo; // +0x68
}
+ (void)PBArrayAdd_tipsId;
+ (void)PBArrayAdd_priority;
+ (void)PBArrayAdd_operate;
+ (void)PBArrayAdd_uniqueId;
+ (void)PBArrayAdd_tipsType;
+ (void)PBArrayAdd_beginShowTime;
+ (void)PBArrayAdd_disappearTime;
+ (void)PBArrayAdd_overdueTime;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_minVersion;
+ (void)PBArrayAdd_maxVersion;
+ (void)PBArrayAdd_reportInfo;
+ (void)PBArrayAdd_disposed;
+ (void)PBArrayAdd_hadBeginShow;
+ (void)PBArrayAdd_recieveTipsTime;
+ (void)PBArrayAdd_realBeginShowTime;
+ (void)PBArrayAdd_tipsDisposeTime;
+ (void)PBArrayAdd_dicShowInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)reportInfo;
- (id)dicShowInfo;
- (id)removePathInfoWithKey:(id)arg1;
- (unsigned int)tipsId;
- (void)setTipsId:(unsigned int)arg1;
- (unsigned int)priority;
- (void)setPriority:(unsigned int)arg1;
- (unsigned int)operate;
- (void)setOperate:(unsigned int)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (unsigned long long)tipsType;
- (void)setTipsType:(unsigned long long)arg1;
- (unsigned int)beginShowTime;
- (void)setBeginShowTime:(unsigned int)arg1;
- (unsigned int)disappearTime;
- (void)setDisappearTime:(unsigned int)arg1;
- (unsigned int)overdueTime;
- (void)setOverdueTime:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void)setReportInfo:(id)arg1;
- (unsigned int)minVersion;
- (void)setMinVersion:(unsigned int)arg1;
- (unsigned int)maxVersion;
- (void)setMaxVersion:(unsigned int)arg1;
- (id)allowRegions;
- (void)setAllowRegions:(id)arg1;
- (id)allowLanguage;
- (void)setAllowLanguage:(id)arg1;
- (BOOL)disposed;
- (void)setDisposed:(BOOL)arg1;
- (BOOL)hadBeginShow;
- (void)setHadBeginShow:(BOOL)arg1;
- (unsigned int)recieveTipsTime;
- (void)setRecieveTipsTime:(unsigned int)arg1;
- (unsigned int)realBeginShowTime;
- (void)setRealBeginShowTime:(unsigned int)arg1;
- (unsigned int)tipsDisposeTime;
- (void)setTipsDisposeTime:(unsigned int)arg1;
- (void)setDicShowInfo:(id)arg1;
- (void).cxx_destruct;
@end

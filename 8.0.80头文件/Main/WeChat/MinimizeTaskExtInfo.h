@interface MinimizeTaskExtInfo : MMObject <PBCoding, WCTTableCoding>
{
    unsigned int _generateScene; // +0x8
    unsigned long long _generateType; // +0x10
    unsigned long long _bizScene; // +0x18
    NSString * _bizId; // +0x20
    NSString * _bizSubId; // +0x28
    NSString * _bizName; // +0x30
    NSString * _generateContextId; // +0x38
    NSString * _sceneNote; // +0x40
    unsigned long long _taskCreateTime; // +0x48
    unsigned long long _lastMinimizeTime; // +0x50
    unsigned long long _lastMaximizeTime; // +0x58
    NSString * _miniSessionId; // +0x60
    NSString * _aggreSessionId; // +0x68
}
+ (void)PBArrayAdd_generateType;
+ (void)PBArrayAdd_generateScene;
+ (void)PBArrayAdd_bizScene;
+ (void)PBArrayAdd_bizId;
+ (void)PBArrayAdd_bizSubId;
+ (void)PBArrayAdd_bizName;
+ (void)PBArrayAdd_taskCreateTime;
+ (void)PBArrayAdd_miniSessionId;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)archivedWCTValue;
- (unsigned long long)generateType;
- (void)setGenerateType:(unsigned long long)arg1;
- (unsigned int)generateScene;
- (void)setGenerateScene:(unsigned int)arg1;
- (unsigned long long)bizScene;
- (void)setBizScene:(unsigned long long)arg1;
- (id)bizId;
- (void)setBizId:(id)arg1;
- (id)bizSubId;
- (void)setBizSubId:(id)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)generateContextId;
- (void)setGenerateContextId:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (unsigned long long)taskCreateTime;
- (void)setTaskCreateTime:(unsigned long long)arg1;
- (unsigned long long)lastMinimizeTime;
- (void)setLastMinimizeTime:(unsigned long long)arg1;
- (unsigned long long)lastMaximizeTime;
- (void)setLastMaximizeTime:(unsigned long long)arg1;
- (id)miniSessionId;
- (void)setMiniSessionId:(id)arg1;
- (id)aggreSessionId;
- (void)setAggreSessionId:(id)arg1;
- (void).cxx_destruct;
@end

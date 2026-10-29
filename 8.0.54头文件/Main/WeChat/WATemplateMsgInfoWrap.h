@interface WATemplateMsgInfoWrap : MMObject <PBCoding>
{
    BOOL _globalSwitchOFF; // +0x8
    BOOL _globalAudioSwitchOFF; // +0x9
    NSMutableArray * _banAppIdList; // +0x10
    NSMutableArray * _msgRecordList; // +0x18
}
+ (void)PBArrayAdd_globalSwitchOFF;
+ (void)PBArrayAdd_banAppIdList;
+ (void)PBArrayAdd_globalAudioSwitchOFF;
+ (void)PBArrayAdd_msgRecordList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)globalSwitchOFF;
- (void)setGlobalSwitchOFF:(BOOL)arg1;
- (id)banAppIdList;
- (void)setBanAppIdList:(id)arg1;
- (BOOL)globalAudioSwitchOFF;
- (void)setGlobalAudioSwitchOFF:(BOOL)arg1;
- (id)msgRecordList;
- (void)setMsgRecordList:(id)arg1;
- (void).cxx_destruct;
@end


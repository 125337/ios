@interface IntelligentMessageDataPB : MMObject <PBCoding>
{
    unsigned int _currentIntelligentMsgVersion; // +0x8
    unsigned int _strartRepairIntelligentMsgCurrentVersion; // +0xc
    NSString * _lastUpdateModelId; // +0x10
    NSMutableDictionary * _modelKeyInfoDic; // +0x18
    NSMutableDictionary * _updateModelItemDic; // +0x20
    long long _faceClusterSequence; // +0x28
}
+ (void)PBArrayAdd_lastUpdateModelId;
+ (void)PBArrayAdd_modelKeyInfoDic;
+ (void)PBArrayAdd_updateModelItemDic;
+ (void)PBArrayAdd_faceClusterSequence;
+ (void)PBArrayAdd_currentIntelligentMsgVersion;
+ (void)PBArrayAdd_strartRepairIntelligentMsgCurrentVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)lastUpdateModelId;
- (void)setLastUpdateModelId:(id)arg1;
- (id)modelKeyInfoDic;
- (void)setModelKeyInfoDic:(id)arg1;
- (id)updateModelItemDic;
- (void)setUpdateModelItemDic:(id)arg1;
- (long long)faceClusterSequence;
- (void)setFaceClusterSequence:(long long)arg1;
- (unsigned int)currentIntelligentMsgVersion;
- (void)setCurrentIntelligentMsgVersion:(unsigned int)arg1;
- (unsigned int)strartRepairIntelligentMsgCurrentVersion;
- (void)setStrartRepairIntelligentMsgCurrentVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end


@interface EmoticonDownloadMd5ListObject : MMObject <PBCoding>
{
    BOOL _needRecordVersionKeyUpdate; // +0x8
    unsigned int _m_lastUpdateTime; // +0xc
    NSData * _reqBuff; // +0x10
    NSString * _versionKey; // +0x18
    NSMutableArray * _m_md5List; // +0x20
    unsigned long long _m_type; // +0x28
}
+ (void)PBArrayAdd_m_md5List;
+ (void)PBArrayAdd_m_lastUpdateTime;
+ (void)PBArrayAdd_reqBuff;
+ (void)PBArrayAdd_versionKey;
+ (void)initialize;
+ (id)GetEmoticonDownloadMd5ListObjectWithType:(unsigned long long)arg1;
+ (BOOL)IsEmoticonDownloadMd5ListExistWithType:(unsigned long long)arg1;
+ (void)RemoveEmoticonDownloadMd5ListWithType:(unsigned long long)arg1;
+ (BOOL)NeedRecoverForType:(unsigned long long)arg1;
+ (id)getEmoticonBackupRootDir;
+ (id)getEmoticonDownloadMd5ListPathWithType:(unsigned long long)arg1;
+ (unsigned int)extFlagForCustomEmoticonType:(unsigned long long)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)saveToFile;
- (BOOL)moreThanADaySinceLastUpdateTime;
- (void)updateLastUpdateTime;
- (void)addMd5ObjectList:(id)arg1;
- (void)addMd5ObjectList:(id)arg1 atFirst:(BOOL)arg2;
- (void)removeMd5:(id)arg1;
- (void)stickyMd5List:(id)arg1;
- (void)moveMd5List:(id)arg1 toMd5Position:(id)arg2;
- (void)clearMd5List;
- (id)completeMd5:(id)arg1;
- (void)failedMd5:(id)arg1;
- (void)checkComplete;
- (unsigned long long)checkCompleteAndReturnNeedMd5DownloadCount;
- (unsigned long long)totalCount;
- (unsigned long long)completeCount;
- (id)allValidEmojiInfoObjDic;
- (id)allEmojiInfoObjListWithValidOnly:(BOOL)arg1;
- (id)getMd5List;
- (id)getNextUncompleteMd5Object;
- (id)sortedAndUnionWithEmoticonWraps:(id)arg1;
- (unsigned long long)indexOfMd5ObjectWithMd5:(id)arg1;
- (BOOL)checkCompleteForMd5Object:(id)arg1;
- (void)setVersionKey:(id)arg1;
- (id)logPrefix;
- (id)reqBuff;
- (void)setReqBuff:(id)arg1;
- (id)versionKey;
- (id)m_md5List;
- (void)setM_md5List:(id)arg1;
- (unsigned int)m_lastUpdateTime;
- (void)setM_lastUpdateTime:(unsigned int)arg1;
- (unsigned long long)m_type;
- (void)setM_type:(unsigned long long)arg1;
- (BOOL)needRecordVersionKeyUpdate;
- (void)setNeedRecordVersionKeyUpdate:(BOOL)arg1;
- (void).cxx_destruct;
@end


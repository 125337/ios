@interface EmoticonDataDB : NSObject
{
    WCTDatabase * _m_emoticonDB; // +0x8
    WCTTable * _m_tableEmoticon; // +0x10
    WCTTable * _m_tableEmoticonPackage; // +0x18
    WCTTable * _tableEmoticonSetInfo; // +0x20
}
- (BOOL)addSetInfoWith:(id)arg1 title:(id)arg2 desc:(id)arg3 iconUrl:(id)arg4 panelUrl:(id)arg5;
- (BOOL)update:(id)arg1 title:(id)arg2;
- (BOOL)update:(id)arg1 desc:(id)arg2;
- (BOOL)update:(id)arg1 iconUrl:(id)arg2;
- (BOOL)update:(id)arg1 panelUrl:(id)arg2;
- (id)getSetInfoFor:(id)arg1;
- (id)getAllSetInfo;
- (BOOL)delAllSetInfo;
- (BOOL)delSetInfoFor:(id)arg1;
- (void)fillEmoticonSetInfoQueryProperty:(void *)arg1;
- (BOOL)addEmoticonPackage:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned int)arg4 downloadStatus:(unsigned int)arg5;
- (BOOL)update:(id)arg1 payStatus:(unsigned int)arg2;
- (BOOL)update:(id)arg1 downloadStatus:(unsigned int)arg2;
- (BOOL)update:(id)arg1 count:(unsigned int)arg2;
- (BOOL)update:(id)arg1 designerUin:(id)arg2;
- (BOOL)update:(id)arg1 designerIPSetKey:(id)arg2;
- (id)getEmoticonPackageByPid:(id)arg1;
- (id)getEmoticonPackageList;
- (id)getDistinctDesignerUin;
- (id)getNeedUpdateDesignerPids;
- (id)getDesignerPids:(id)arg1;
- (id)getDesignerUin:(id)arg1;
- (id)getDesignerIPSetKey:(id)arg1;
- (BOOL)deleteEmoticonPackageByPid:(id)arg1;
- (BOOL)isEmoticonPackageExist:(id)arg1;
- (BOOL)isEmoticonPackagePurchased:(id)arg1;
- (BOOL)isEmoticonPackageDownLoaded:(id)arg1;
- (BOOL)clearAllData;
- (BOOL)addPackageList:(id)arg1;
- (void)fillEmoticonPackageQueryProperty:(void *)arg1;
- (void)fillEmoticonListQueryPropery:(void *)arg1 isFullField:(BOOL)arg2;
- (void)convertEmotcion:(id)arg1 fromDBObject:(id)arg2 isFullField:(BOOL)arg3;
- (id)convertEmoticonsFromDBObjects:(id)arg1 isFullField:(BOOL)arg2;
- (id)GetEmoticonList;
- (BOOL)AddEmoticon:(id)arg1 Type:(unsigned int)arg2;
- (BOOL)AddEmoticon:(id)arg1 Type:(unsigned int)arg2 ProductId:(id)arg3 ExtInfo:(id)arg4 ExtFlag:(unsigned int)arg5 IndexInPack:(id)arg6;
- (BOOL)insertEmoticonWithMD5:(id)arg1 type:(unsigned int)arg2 productId:(id)arg3 extInfo:(id)arg4 extFlag:(unsigned int)arg5 indexInPack:(id)arg6;
- (BOOL)updateEmoticon:(id)arg1 productId:(id)arg2 extInfo:(id)arg3 extFlag:(id)arg4 indexInPack:(id)arg5;
- (BOOL)updateEmoticon:(id)arg1 usedTime:(unsigned int)arg2;
- (BOOL)updateEmoticon:(id)arg1 packageId:(id)arg2;
- (BOOL)updateEmoticon:(id)arg1 extFlag:(unsigned int)arg2 needOverWrite:(BOOL)arg3;
- (id)getSelfEmoticonList;
- (id)getCameraEmoticonList;
- (id)getEmoticonWrapByMd5:(id)arg1;
- (id)getEmoticonListByPackageId:(id)arg1;
- (id)getRecentUsedEmoticonList:(unsigned int)arg1;
- (id)deleteEmoticonByPid:(id)arg1;
- (BOOL)DeleteEmoticonByMD5:(id)arg1;
- (BOOL)IsEmoticonExist:(id)arg1;
- (BOOL)IsEmoticonExistInCustomListByMd5:(id)arg1;
- (BOOL)IsEmoticonExistInCameraListByMd5:(id)arg1;
- (id)lastestSentMd5InMd5list:(id)arg1;
- (id)FilterNotInDBList:(id)arg1;
- (id)GetEmoticonsOnProperty:(const void *)arg1 Where:(const void *)arg2 orders:(const void *)arg3 limit:(int)arg4;
- (id)DeleteEmoticonByPackageId:(id)arg1 WithoutExtFlag:(unsigned int)arg2;
- (void)reloadWithDBPath:(id)arg1 mmdbPath:(id)arg2;
- (void)dealloc;
- (void)close;
- (void)enableMigrate;
- (id)internalCreateEmoticonTable:(id)arg1 tableClass:(Class)arg2;
- (id)m_emoticonDB;
- (void)setM_emoticonDB:(id)arg1;
- (id)m_tableEmoticon;
- (void)setM_tableEmoticon:(id)arg1;
- (id)m_tableEmoticonPackage;
- (void)setM_tableEmoticonPackage:(id)arg1;
- (id)tableEmoticonSetInfo;
- (void)setTableEmoticonSetInfo:(id)arg1;
- (void).cxx_destruct;
@end


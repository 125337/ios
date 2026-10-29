@interface StoreEmotionSearchResMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>
+ (void)tryUpdateEmoticonResForSubType:(unsigned int)arg1;
+ (void)unZipResWithPath:(id)arg1 forSubType:(unsigned int)arg2 version:(unsigned int)arg3;
+ (id)dirPathAfterUnzipIfNeedUpdateForSubType:(unsigned int)arg1;
+ (unsigned int)getCurrentVersionForSubType:(unsigned int)arg1;
+ (void)resetResVersionForSubType:(unsigned int)arg1;
+ (id)MMKVVersionKeyForEmoticonResWithSubType:(unsigned int)arg1;
+ (id)dirPathOfEmoticonResForSubType:(unsigned int)arg1;
+ (unsigned int)defaultVersionForSubType:(unsigned int)arg1;
+ (void)deleteResForSubType:(unsigned int)arg1;
+ (id)unZipResIfTargetNotExistWithPath:(id)arg1 forSubType:(unsigned int)arg2;
+ (void)tryRepairNewEmoijRes;
+ (BOOL)checkConfigFileExistIfNeeded:(id)arg1 type:(unsigned int)arg2;
- (void)onServiceInit;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
@end

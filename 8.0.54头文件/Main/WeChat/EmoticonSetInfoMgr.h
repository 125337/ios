@interface EmoticonSetInfoMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * _oLock; // +0x8
    EmoticonDataDB * _oEmoticonPackageDB; // +0x10
    NSMutableDictionary * _setInfoDic; // +0x18
}
- (id)init;
- (void)onServiceInit;
- (BOOL)addSetInfoWith:(id)arg1 title:(id)arg2 desc:(id)arg3 iconUrl:(id)arg4 panelUrl:(id)arg5;
- (BOOL)update:(id)arg1 title:(id)arg2;
- (BOOL)update:(id)arg1 desc:(id)arg2;
- (BOOL)update:(id)arg1 iconUrl:(id)arg2;
- (BOOL)update:(id)arg1 panelUrl:(id)arg2;
- (id)getSetInfoFor:(id)arg1;
- (id)getAllSetInfo;
- (BOOL)delAllSetInfo;
- (BOOL)delSetInfoFor:(id)arg1;
- (void)cleanAllCachedSetInfos;
- (void)updateCachedSetInfo:(id)arg1;
- (id)getIconImageForSetKey:(id)arg1;
- (id)getPanelImageForSetKey:(id)arg1;
- (id)getImageForSetKey:(id)arg1 withType:(unsigned long long)arg2;
- (id)oLock;
- (void)setOLock:(id)arg1;
- (id)oEmoticonPackageDB;
- (void)setOEmoticonPackageDB:(id)arg1;
- (id)setInfoDic;
- (void)setSetInfoDic:(id)arg1;
- (void).cxx_destruct;
@end


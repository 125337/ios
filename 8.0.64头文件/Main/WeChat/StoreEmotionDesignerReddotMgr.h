@interface StoreEmotionDesignerReddotMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _modelMap; // +0x8
    NSRecursiveLock * _lock; // +0x10
    EmptyDesignerPagePidRecord * _emptyPageRecord; // +0x18
}
- (id)init;
- (void)loadDesignerReddotCache;
- (void)loadDesignerEmptyPageCache;
- (void)updatePids:(id)arg1 withDesignerUin:(id)arg2 needDiffPid:(BOOL)arg3;
- (void)updateDesigner:(id)arg1;
- (void)clearReddotWithDesignerUin:(id)arg1;
- (void)clearReddotWithDesignerUin:(id)arg1 andPid:(id)arg2;
- (void)clearExpiredReddot;
- (void)flushDesignerInfoAndPidsToFile:(id)arg1;
- (BOOL)validUin:(id)arg1;
- (void)recordEmptyDesignerPagePid:(id)arg1;
- (void)removeEmptyDesignerPageCache;
- (id)getPidsWithReddot:(id)arg1;
- (void)getPersonDesignerAndReddotStatus:(id)arg1 resultBlock:(id /* block */)arg2;
- (BOOL)isReddotTimeExpired:(unsigned int)arg1 currentTime:(unsigned int)arg2;
- (BOOL)isDesignerPageEmpty:(id)arg1;
- (void)checkDirtyData:(id)arg1;
- (id)modelMap;
- (void)setModelMap:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)emptyPageRecord;
- (void)setEmptyPageRecord:(id)arg1;
- (void).cxx_destruct;
@end

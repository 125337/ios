@interface NewSyncPluginMgr : MMUserService <INewSyncExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    NSMutableDictionary * m_dicSelectorList; // +0x8
    NSRecursiveLock * m_oMgrLock; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)InitSelectorList;
- (void)ResetNewSyncWrap:(unsigned int)arg1;
- (BOOL)IsSelectorSyncIng:(unsigned int)arg1;
- (BOOL)IsSelectorContinue:(unsigned int)arg1;
- (void)SetSyncIngFlag:(BOOL)arg1 Selector:(unsigned int)arg2;
- (unsigned int)GetSelectorByCgi:(unsigned int)arg1;
- (unsigned int)GetCgiBySelector:(unsigned int)arg1;
- (id)GetSyncWrapBySelector:(unsigned int)arg1;
- (void)SetSyncKeyMd5BySelector:(unsigned int)arg1 Md5:(id)arg2;
- (BOOL)IsMd5Different:(unsigned int)arg1 Md5:(id)arg2;
- (id)GetKeyBufferByType:(unsigned int)arg1;
- (void)MergeKeyBufferByType:(unsigned int)arg1 Buffer:(id)arg2;
- (void)CheckSelector:(unsigned int)arg1 Request:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncPlugin:(unsigned int)arg1;
- (id)m_dicSelectorList;
- (void)setM_dicSelectorList:(id)arg1;
- (void).cxx_destruct;
@end

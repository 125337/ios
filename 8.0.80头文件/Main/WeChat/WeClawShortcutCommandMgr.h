@interface WeClawShortcutCommandMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _shortcutCache; // +0x8
    NSMutableDictionary * _pendingEventMap; // +0x10
}
+ (BOOL)isEnabled;
- (void)onServiceInit;
- (id)p_mmkvKeyForUserName:(id)arg1;
- (void)p_saveToMMKVForUserName:(id)arg1;
- (id)p_loadFromMMKVForUserName:(id)arg1;
- (id)shortcutListForUserName:(id)arg1;
- (void)handleModContact:(id)arg1;
- (void)p_updateShortcutListFromExternalInfo:(id)arg1 forUserName:(id)arg2;
- (void)addShortcutCommand:(id)arg1 forUserName:(id)arg2;
- (void)setShortcutList:(id)arg1 forUserName:(id)arg2;
- (void)modShortcutCommand:(id)arg1 forUserName:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)p_retryFullSetForUserName:(id)arg1;
- (id)p_parseShortcutListFromJSON:(id)arg1;
- (id)shortcutCache;
- (void)setShortcutCache:(id)arg1;
- (id)pendingEventMap;
- (void)setPendingEventMap:(id)arg1;
- (void).cxx_destruct;
@end

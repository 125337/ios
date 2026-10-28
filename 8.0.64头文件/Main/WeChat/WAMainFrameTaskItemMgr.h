@interface WAMainFrameTaskItemMgr : MMUserService <WAAppItemManagerExtension, MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1 ignoreUsername:(id)arg2 debugMode:(unsigned int)arg3;
- (id)getSiderbarItemListWithLimit:(unsigned int)arg1 ignoreUsername:(id)arg2 debugMode:(unsigned int)arg3;
- (BOOL)updateMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned int)arg2;
- (BOOL)deleteMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned int)arg2 needNotify:(BOOL)arg3;
- (BOOL)deleteMainFrameTaskItemBeforeUpdateTime:(unsigned int)arg1;
- (void)notifyMainFrameTaskItemUpdated;
- (void)onWeAppItemDeleted:(id)arg1;
@end

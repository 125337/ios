@interface WAMainFrameTaskItemMgr : MMUserService <MMServiceProtocol>
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1 ignoreUsername:(id)arg2 debugMode:(unsigned int)arg3;
- (BOOL)updateMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned int)arg2;
- (BOOL)deleteMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned int)arg2 needNotify:(BOOL)arg3;
- (BOOL)deleteMainFrameTaskItemBeforeUpdateTime:(unsigned int)arg1;
- (void)notifyMainFrameTaskItemUpdated;
@end


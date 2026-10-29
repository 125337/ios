@interface WAJSEventHandler_operateRecentUsageList : WAJSEventHandler_BaseEvent <WAAppItemManagerExtension>
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (unsigned long long)operateRecentUsageListWithActionType:(unsigned long long)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3;
- (unsigned long long)deleteWeAppItem:(id)arg1;
- (unsigned long long)starWeAppItem:(id)arg1;
- (unsigned long long)unstarWeAppItem:(id)arg1;
- (void)onWeAppItemStared:(id)arg1 errCode:(int)arg2;
- (void)onWeAppItemUnStared:(id)arg1 errCode:(int)arg2;
- (void)onWeAppItemDeleted:(id)arg1;
@end


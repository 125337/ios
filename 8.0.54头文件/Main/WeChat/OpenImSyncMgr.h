@interface OpenImSyncMgr : NSObject <INewSyncPluginExt>
- (id)init;
- (void)NotifyCheckSelector;
- (void)NotifyCmd:(id)arg1;
- (id)handleModOpenIMChatRoomContact:(id)arg1;
- (id)HandleModOpenIMChatRoomMemberContact:(id)arg1;
@end


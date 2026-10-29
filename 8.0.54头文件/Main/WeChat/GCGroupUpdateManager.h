@interface GCGroupUpdateManager : MMUserService <MMServiceProtocol>
{
    int _previousSceneType; // +0x8
    GameLifeTabBarViewController * _willPushTabVc; // +0x10
    GetMyChatroomResponse * _lastestRoomResponse; // +0x18
    GCGroupServer * _groupServer; // +0x20
}
- (id)init;
- (BOOL)isVcTabBarVcAndSelectChatV2:(id)arg1;
- (int)getSceneType;
- (int)innerGetSceneType;
- (void)triggerGroupStatusUpdate:(id)arg1;
- (void)tabVcPushed:(id)arg1;
- (void)onChatRoomResponseUpdate:(id)arg1;
- (void)registerGroupUpdateExt:(id)arg1;
- (void)endUpdate;
- (id)willPushTabVc;
- (void)setWillPushTabVc:(id)arg1;
- (id)lastestRoomResponse;
- (void)setLastestRoomResponse:(id)arg1;
- (id)groupServer;
- (void)setGroupServer:(id)arg1;
- (int)previousSceneType;
- (void)setPreviousSceneType:(int)arg1;
- (void).cxx_destruct;
@end


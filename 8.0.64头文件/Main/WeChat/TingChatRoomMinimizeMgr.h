@interface TingChatRoomMinimizeMgr : TingPlayAppMinimieBase <TingChatRoomPluginListener>
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)arg1;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (BOOL)shouldTurnMinimizeActive;
- (void)onRoomMemberCountChanged:(id)arg1 count:(unsigned int)arg2;
- (void)onReceiveRoomMessage:(id)arg1 msgList:(id)arg2;
- (void)onRoomReconnect:(id)arg1;
- (void)onReceiveRecommendBubbleMsg:(id)arg1 msg:(id)arg2;
- (void)onRoomClosed;
@end

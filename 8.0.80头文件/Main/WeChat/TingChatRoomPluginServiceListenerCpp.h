@interface TingChatRoomPluginServiceListenerCpp : NSObject <TingChatRoomPluginServiceListener>
- (id)init;
- (void)dealloc;
- (void)onJoinChatRoomSuccess:(id)arg1;
- (void)onChatRoomFocusRequest;
- (void)onExitChatRoomSuccess;
@end

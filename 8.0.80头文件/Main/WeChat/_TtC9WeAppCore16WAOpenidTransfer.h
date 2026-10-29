@interface _TtC9WeAppCore16WAOpenidTransfer : NSObject
+ (void)batchTransferBetweenUsernameOpenGidWithAppid:(id)arg1 type:(unsigned int)arg2 chatRoomInfo:(id)arg3 needEncryptedData:(BOOL)arg4 handler:(id /* block */)arg5;
+ (void)batchGetWxaGroupOpenidWithAppid:(id)arg1 usernameList:(id)arg2 chatroomName:(id)arg3 singleChatname:(id)arg4 handler:(id /* block */)arg5;
+ (void)batchGetWxaUsernameWithAppid:(id)arg1 openidList:(id)arg2 handler:(id /* block */)arg3;
- (id)init;
@end

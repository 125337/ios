@interface W1wPersonalCgiMgr : NSObject
+ (id)generateReq;
+ (void)getMsgContactList:(id)arg1 completion:(id /* block */)arg2;
+ (void)getMsgSessionInfo:(id)arg1 to_username:(id)arg2 msg_session_id:(id)arg3 completion:(id /* block */)arg4;
@end

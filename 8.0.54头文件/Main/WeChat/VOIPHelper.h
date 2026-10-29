@interface VOIPHelper : NSObject
+ (void)EnableVoIPComLog;
+ (void)DisableVoIPComLog;
+ (void)APNSPushWithUsrInfo:(id)arg1 requestID:(id)arg2;
+ (void)DataNotifyWithData:(id)arg1;
+ (void)HandleExtNotifydata:(id)arg1 andRoomId:(unsigned long long)arg2 andRoomKey:(unsigned long long)arg3;
+ (void)NotifyWithData:(id)arg1;
+ (void)checkIfUInt64RoomIDOutOfInt32:(unsigned long long)arg1;
@end


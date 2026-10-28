@interface WCGroupUndoneBaseReport : NSObject
{
    unsigned int _eRole; // +0x8
    unsigned int _eMsgType; // +0xc
    NSString * _todoId; // +0x10
    NSString * _roomId; // +0x18
    NSString * _appId; // +0x20
    NSString * _appName; // +0x28
}
- (BOOL)isValid;
- (void)invalidate;
- (void)report;
- (void)setRoleByContact:(id)arg1;
- (id)todoId;
- (void)setTodoId:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned int)eRole;
- (void)setERole:(unsigned int)arg1;
- (unsigned int)eMsgType;
- (void)setEMsgType:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (void).cxx_destruct;
@end

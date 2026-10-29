@interface GroupChatSessionInfo : NSObject
{
    ChatBotVoIPSession * _session; // +0x8
    NSTimer * _destroyTimer; // +0x10
    NSString * _groupId; // +0x18
    NSString * _asstId; // +0x20
}
- (id)session;
- (void)setSession:(id)arg1;
- (id)destroyTimer;
- (void)setDestroyTimer:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)asstId;
- (void)setAsstId:(id)arg1;
- (void).cxx_destruct;
@end

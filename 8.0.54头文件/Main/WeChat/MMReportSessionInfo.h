@interface MMReportSessionInfo : MMObject <PBCoding>
{
    BOOL _bMuteChat; // +0x8
    BOOL _bTopChat; // +0x9
    BOOL _bNewChat; // +0xa
    BOOL _bHasReply; // +0xb
    unsigned int _unreadCount; // +0xc
    unsigned int _chatIndex; // +0x10
    unsigned int _enterTime; // +0x14
    unsigned int _leaveTime; // +0x18
    NSString * _username; // +0x20
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_unreadCount;
+ (void)PBArrayAdd_bMuteChat;
+ (void)PBArrayAdd_bTopChat;
+ (void)PBArrayAdd_chatIndex;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithSessionInfo:(id)arg1 withChatIndex:(unsigned int)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (BOOL)bMuteChat;
- (void)setBMuteChat:(BOOL)arg1;
- (BOOL)bTopChat;
- (void)setBTopChat:(BOOL)arg1;
- (unsigned int)chatIndex;
- (void)setChatIndex:(unsigned int)arg1;
- (BOOL)bNewChat;
- (void)setBNewChat:(BOOL)arg1;
- (unsigned int)enterTime;
- (void)setEnterTime:(unsigned int)arg1;
- (unsigned int)leaveTime;
- (void)setLeaveTime:(unsigned int)arg1;
- (BOOL)bHasReply;
- (void)setBHasReply:(BOOL)arg1;
- (void).cxx_destruct;
@end


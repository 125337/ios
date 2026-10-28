@interface ShakeMsgNotifyMgr : MMObject <IMsgExt>
{
    NSMutableArray * _messageQueue; // +0x8
    NSMutableArray * _unreadMsgQueue; // +0x10
    BOOL _messageLoaded; // +0x18
    id <ShakeMsgNotifyMgrDelegate> _delegate; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)tryLoadMessage;
- (void)saveMessage;
- (BOOL)hasUnreadMessages;
- (unsigned long long)getUnreadMessageCount;
- (id)getUnreadMessages;
- (id)getUnreadMsgPidDesc;
- (id)getLastestUnreadMessage;
- (id)getMessagesFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (void)markMessageListRead:(id)arg1;
- (void)deleteMessageItem:(id)arg1;
- (void)deleteAllMessages;
- (void)insertMsgItem:(id)arg1;
- (BOOL)hasSameMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

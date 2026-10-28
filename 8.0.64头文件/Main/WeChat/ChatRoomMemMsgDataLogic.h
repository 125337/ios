@interface ChatRoomMemMsgDataLogic : NSObject
{
    NSString * m_nsChatName; // +0x8
    NSString * m_nsMemName; // +0x10
    id <ChatRoomMemMsgDataLogicDelegate> m_delegate; // +0x18
    unsigned int m_uiFromID; // +0x20
    unsigned int m_uiCreateTime; // +0x24
    unsigned int m_uiLeftCount; // +0x28
}
- (id)initWithChat:(id)arg1 memName:(id)arg2 delegate:(id)arg3;
- (BOOL)isMsgMatch:(id)arg1;
- (void)getMsgsLimit:(int)arg1;
- (void).cxx_destruct;
@end

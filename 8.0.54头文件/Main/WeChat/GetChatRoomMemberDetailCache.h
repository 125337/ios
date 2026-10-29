@interface GetChatRoomMemberDetailCache : NSObject
{
    unsigned int _m_uiChatRoomClientVersion; // +0x8
    unsigned int _m_uiChatRoomServerVersion; // +0xc
    unsigned int _m_uiLastGetTime; // +0x10
    NSString * _m_nsUserName; // +0x18
}
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (unsigned int)m_uiChatRoomClientVersion;
- (void)setM_uiChatRoomClientVersion:(unsigned int)arg1;
- (unsigned int)m_uiChatRoomServerVersion;
- (void)setM_uiChatRoomServerVersion:(unsigned int)arg1;
- (unsigned int)m_uiLastGetTime;
- (void)setM_uiLastGetTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end


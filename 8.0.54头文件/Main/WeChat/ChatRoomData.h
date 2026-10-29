@interface ChatRoomData : NSObject
{
    NSMutableDictionary * m_dicData; // +0x8
    unsigned int m_maxMemberCount; // +0x10
    unsigned int m_chatRoomVersion; // +0x14
    unsigned int m_uiLocalMemberVersion; // +0x18
    BOOL isSimplify; // +0x1c
    NSRecursiveLock * _lock; // +0x20
    NSString * _joinChatRoomWord; // +0x28
    NSMutableArray * _inviterTraceTemplateList; // +0x30
}
+ (id)parseInviterName:(id)arg1;
+ (id)parseInviterTraceTemplate:(id)arg1;
+ (id)parseJoinChatRoomWord:(id)arg1;
- (id)init;
- (id)initWithNewChatRoomData:(id)arg1;
- (id)initWithNewOpenIMChatRoomData:(id)arg1;
- (void)merge:(id)arg1;
- (void)mergeOpenIMData:(id)arg1;
- (void)mergeOldDetail:(id)arg1;
- (id)getDataForUserName:(id)arg1 key:(id)arg2;
- (void)setDataForUserName:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setInviterNameForUserName:(id)arg1 value:(id)arg2;
- (void)setInviterTraceTemplateForUserName:(id)arg1 value:(id)arg2;
- (void)parseData:(id)arg1;
- (id)getDataXml;
- (id)getDataDescription;
- (void)updateChatRoomData:(XmlReaderNode_t *)arg1;
- (void)setDislayName:(id)arg1 forUserName:(id)arg2;
- (id)getDislayNameForUserName:(id)arg1;
- (id)getUsernameForDisplayName:(id)arg1;
- (id)getAllDisplayName;
- (id)getInviterNameForUsername:(id)arg1;
- (id)getInviterTraceTemplateForUsername:(id)arg1;
- (void)setShowDislayName:(BOOL)arg1;
- (BOOL)isShowDislayName;
- (unsigned int)getXmlNodeIntValue:(XmlReaderNode_t *)arg1 forName:(const char *)arg2;
- (void)updateJoinChatRoomWord:(XmlReaderNode_t *)arg1;
- (void)updateInviterTraceTemplateList:(XmlReaderNode_t *)arg1;
- (void)updateDicData:(XmlReaderNode_t *)arg1;
- (unsigned int)maxMemberCount;
- (void)setMaxMemberCount:(unsigned int)arg1;
- (unsigned int)chatRoomVersion;
- (void)setChatRoomVersion:(unsigned int)arg1;
- (unsigned int)localMemberVersion;
- (void)setLocalMemberVersion:(unsigned int)arg1;
- (BOOL)isSimplify;
- (void)setIsSimplify:(BOOL)arg1;
- (id)joinChatRoomWord;
- (void)setJoinChatRoomWord:(id)arg1;
- (id)inviterTraceTemplateList;
- (void)setInviterTraceTemplateList:(id)arg1;
- (void).cxx_destruct;
@end


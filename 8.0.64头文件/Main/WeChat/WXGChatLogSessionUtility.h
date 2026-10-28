@interface WXGChatLogSessionUtility : NSObject
{
    NSMutableArray * _allUserNames; // +0x8
    NSMutableArray * _singleChatSessions; // +0x10
    NSMutableArray * _chatRoomSessions; // +0x18
    NSMutableArray * _starSessions; // +0x20
    NSMutableArray * _chatOnlySessions; // +0x28
    NSMutableArray * _foldChatRoomSessions; // +0x30
    NSMutableArray * _topSessions; // +0x38
    NSMutableDictionary * _includeUsersMap; // +0x40
}
+ (id)getUserName;
+ (id)loadAllUserName;
+ (BOOL)p_isLocalizedContactThatCannotSync:(id)arg1;
- (void)loadAllTypeSessionWithIncludeUsers:(id)arg1;
- (void)loadAllTypeSessionOnMainThread;
- (id)getChatOnlySessions;
- (id)getAllSessions;
- (id)getStarSessions;
- (id)getSingleChatSessions;
- (id)getChatRoomSessions;
- (id)getFoldChatRoomSessions;
- (id)getTopSessions;
- (id)getUserIncludeMap;
- (id)allUserNames;
- (void)setAllUserNames:(id)arg1;
- (id)singleChatSessions;
- (void)setSingleChatSessions:(id)arg1;
- (id)chatRoomSessions;
- (void)setChatRoomSessions:(id)arg1;
- (id)starSessions;
- (void)setStarSessions:(id)arg1;
- (id)chatOnlySessions;
- (void)setChatOnlySessions:(id)arg1;
- (id)foldChatRoomSessions;
- (void)setFoldChatRoomSessions:(id)arg1;
- (id)topSessions;
- (void)setTopSessions:(id)arg1;
- (id)includeUsersMap;
- (void)setIncludeUsersMap:(id)arg1;
- (void).cxx_destruct;
@end

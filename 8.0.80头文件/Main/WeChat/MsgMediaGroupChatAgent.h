@interface MsgMediaGroupChatAgent : NSObject
{
    BOOL _isEditing; // +0x8
    NSString * _chatName; // +0x10
    NSMutableDictionary * _msgList; // +0x18
    NSMutableSet * _expandedFlags; // +0x20
    NSMutableDictionary * _currentIndexDict; // +0x28
}
- (id)initWithChatName:(id)arg1;
- (void)dealloc;
- (id)msgList;
- (id)expandedFlags;
- (id)currentIndexDict;
- (void)recordMsgs:(id)arg1;
- (long long)allMsgsCountForGroupKey:(id)arg1;
- (id)allMsgsForGroupKey:(id)arg1;
- (id)firstMessageForGroupKey:(id)arg1;
- (id)displayMsgsForGroupKey:(id)arg1;
- (id)firstDisplayMsgForGroupKey:(id)arg1;
- (BOOL)isFirstDisplayMsgInGroup:(id)arg1;
- (void)setExpand:(BOOL)arg1 forGroupKey:(id)arg2;
- (BOOL)isExpanded:(id)arg1;
- (void)setIsEditing:(BOOL)arg1;
- (void)updateCurrentIndex:(long long)arg1 forGroupKey:(id)arg2;
- (long long)currentIndex:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (BOOL)isEditing;
- (void)setMsgList:(id)arg1;
- (void)setExpandedFlags:(id)arg1;
- (void)setCurrentIndexDict:(id)arg1;
- (void).cxx_destruct;
@end

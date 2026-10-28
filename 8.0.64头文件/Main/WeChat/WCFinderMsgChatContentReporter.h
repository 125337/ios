@interface WCFinderMsgChatContentReporter : NSObject
{
    BOOL _fromPrivateMsgSessionList; // +0x8
    BOOL _shouldUpdateSessionInfo; // +0x9
    BOOL _needReport; // +0xa
    unsigned int _myAccountType; // +0xc
    unsigned int _newReceiveMsgCount; // +0x10
    unsigned int _newSendMsgCount; // +0x14
    unsigned int _openChatInfoCount; // +0x18
    int _userpageEnterType; // +0x1c
    int _sourceType; // +0x20
    int _fromFeedScene; // +0x24
    unsigned long long _fromCommentScene; // +0x28
    NSString * _talkerUsername; // +0x30
    NSString * _chatName; // +0x38
    NSString * _feedID; // +0x40
    NSString * _chatListSessionid; // +0x48
    NSNumber * _reddotCount; // +0x50
    unsigned long long _enterTimeInMs; // +0x58
    NSString * _sourceFeed; // +0x60
}
- (id)initWithCommentScene:(unsigned long long)arg1;
- (id)initWithCommentScene:(unsigned long long)arg1 sourceFeed:(id)arg2;
- (id)initWithChatListSessionId:(id)arg1 reddotCount:(id)arg2;
- (void)copyInfosFromReporter:(id)arg1;
- (id)chatSessionid;
- (void)enterViewController;
- (void)quitAndReport;
- (unsigned int)myAccountType;
- (void)setMyAccountType:(unsigned int)arg1;
- (unsigned long long)fromCommentScene;
- (void)setFromCommentScene:(unsigned long long)arg1;
- (id)talkerUsername;
- (void)setTalkerUsername:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)chatListSessionid;
- (void)setChatListSessionid:(id)arg1;
- (id)reddotCount;
- (void)setReddotCount:(id)arg1;
- (unsigned int)newReceiveMsgCount;
- (void)setNewReceiveMsgCount:(unsigned int)arg1;
- (unsigned int)newSendMsgCount;
- (void)setNewSendMsgCount:(unsigned int)arg1;
- (unsigned int)openChatInfoCount;
- (void)setOpenChatInfoCount:(unsigned int)arg1;
- (BOOL)fromPrivateMsgSessionList;
- (void)setFromPrivateMsgSessionList:(BOOL)arg1;
- (BOOL)shouldUpdateSessionInfo;
- (void)setShouldUpdateSessionInfo:(BOOL)arg1;
- (int)userpageEnterType;
- (void)setUserpageEnterType:(int)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (int)fromFeedScene;
- (void)setFromFeedScene:(int)arg1;
- (unsigned long long)enterTimeInMs;
- (void)setEnterTimeInMs:(unsigned long long)arg1;
- (BOOL)needReport;
- (void)setNeedReport:(BOOL)arg1;
- (id)sourceFeed;
- (void)setSourceFeed:(id)arg1;
- (void).cxx_destruct;
@end

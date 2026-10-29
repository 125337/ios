@interface EmoticonSearchInMessagePanelReporter : NSObject
{
    unsigned int _source; // +0x8
    unsigned int _sourceScene; // +0xc
    NSString * _searchID; // +0x10
    NSString * _sessionID; // +0x18
    NSString * _chatId; // +0x20
}
- (id)initWithChatId:(id)arg1;
- (id)initWithChatId:(id)arg1 sessionId:(id)arg2;
- (void)beginSession;
- (void)doReport:(id)arg1 actionType:(unsigned int)arg2 md5s:(id)arg3 total:(unsigned int)arg4 position:(unsigned int)arg5 maxIndex:(unsigned int)arg6;
- (void)doReportSearchEntranceClick:(unsigned int)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (void).cxx_destruct;
@end


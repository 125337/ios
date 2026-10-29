@interface ChatBotSocialHistoryWrap : NSObject
{
    unsigned int _latestTimestamp; // +0x8
    NSString * _singleChatUsername; // +0x10
    NSMutableArray * _sessionItems; // +0x18
}
- (id)singleChatUsername;
- (void)setSingleChatUsername:(id)arg1;
- (id)sessionItems;
- (void)setSessionItems:(id)arg1;
- (unsigned int)latestTimestamp;
- (void)setLatestTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end

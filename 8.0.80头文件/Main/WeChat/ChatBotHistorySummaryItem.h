@interface ChatBotHistorySummaryItem : ChatBotHistoryItem
{
    BOOL _isExpanded; // +0x20
    unsigned int _latestTimestamp; // +0x24
    NSString * _singleChatUsername; // +0x28
}
- (id)init;
- (void)setIsExpanded:(BOOL)arg1;
- (unsigned int)latestTimestamp;
- (void)setLatestTimestamp:(unsigned int)arg1;
- (id)singleChatUsername;
- (void)setSingleChatUsername:(id)arg1;
- (BOOL)isExpanded;
- (void).cxx_destruct;
@end

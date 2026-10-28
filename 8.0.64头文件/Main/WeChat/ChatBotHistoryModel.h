@interface ChatBotHistoryModel : NSObject
{
    BOOL _isExpanded; // +0x8
    unsigned int _latestTimestamp; // +0xc
    NSString * _singleChatUsername; // +0x10
    NSMutableArray * _rows; // +0x18
    long long _itemstatus; // +0x20
    NSMutableSet * _sessionIds; // +0x28
}
- (id)initWithHistoryWrap:(id)arg1 itemStatus:(long long)arg2 oldModel:(id)arg3;
- (void)setItemstatus:(long long)arg1;
- (void)setIsExpanded:(BOOL)arg1;
- (id)singleChatUsername;
- (void)setSingleChatUsername:(id)arg1;
- (unsigned int)latestTimestamp;
- (void)setLatestTimestamp:(unsigned int)arg1;
- (BOOL)isExpanded;
- (id)rows;
- (void)setRows:(id)arg1;
- (long long)itemstatus;
- (id)sessionIds;
- (void)setSessionIds:(id)arg1;
- (void).cxx_destruct;
@end

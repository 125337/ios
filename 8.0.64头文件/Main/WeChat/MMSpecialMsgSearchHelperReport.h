@interface MMSpecialMsgSearchHelperReport : MMObject
{
    unsigned int _action; // +0x8
    unsigned int _pageType; // +0xc
    unsigned int _resCount; // +0x10
    unsigned int _matchType; // +0x14
    NSString * _sessionId; // +0x18
    NSString * _query; // +0x20
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (unsigned int)pageType;
- (void)setPageType:(unsigned int)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned int)resCount;
- (void)setResCount:(unsigned int)arg1;
- (unsigned int)matchType;
- (void)setMatchType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

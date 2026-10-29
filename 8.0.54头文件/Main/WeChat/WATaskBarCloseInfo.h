@interface WATaskBarCloseInfo : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _actionType; // +0x10
    unsigned long long _duration; // +0x18
    unsigned long long _pageType; // +0x20
    unsigned long long _page; // +0x28
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (unsigned long long)page;
- (void)setPage:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


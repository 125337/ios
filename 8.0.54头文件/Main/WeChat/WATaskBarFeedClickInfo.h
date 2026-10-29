@interface WATaskBarFeedClickInfo : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _pageType; // +0x10
    unsigned long long _pageFeedIndex; // +0x18
    NSString * _contentId; // +0x20
    unsigned long long _page; // +0x28
    NSString * _iconAppId; // +0x30
    NSString * _extraData; // +0x38
    unsigned long long _isRefresh; // +0x40
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (unsigned long long)pageFeedIndex;
- (void)setPageFeedIndex:(unsigned long long)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (unsigned long long)page;
- (void)setPage:(unsigned long long)arg1;
- (id)iconAppId;
- (void)setIconAppId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (unsigned long long)isRefresh;
- (void)setIsRefresh:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


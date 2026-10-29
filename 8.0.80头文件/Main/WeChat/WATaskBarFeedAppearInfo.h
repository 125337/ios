@interface WATaskBarFeedAppearInfo : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _appearType; // +0x10
    unsigned long long _pageType; // +0x18
    NSString * _contentId; // +0x20
    unsigned long long _contentStatus; // +0x28
    unsigned long long _page; // +0x30
    NSString * _iconAppId; // +0x38
    NSString * _extraData; // +0x40
    unsigned long long _pageFeedIndex; // +0x48
    unsigned long long _isRefresh; // +0x50
    NSString * _userName; // +0x58
    unsigned long long _appServiceType; // +0x60
    NSString * _sugQuery; // +0x68
    NSString * _xiaoWeiEntryText; // +0x70
    NSString * _xiaoWeiExtraData; // +0x78
    NSString * _xiaoWeiBypass; // +0x80
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)appearType;
- (void)setAppearType:(unsigned long long)arg1;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (unsigned long long)contentStatus;
- (void)setContentStatus:(unsigned long long)arg1;
- (unsigned long long)page;
- (void)setPage:(unsigned long long)arg1;
- (id)iconAppId;
- (void)setIconAppId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (unsigned long long)pageFeedIndex;
- (void)setPageFeedIndex:(unsigned long long)arg1;
- (unsigned long long)isRefresh;
- (void)setIsRefresh:(unsigned long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)appServiceType;
- (void)setAppServiceType:(unsigned long long)arg1;
- (id)sugQuery;
- (void)setSugQuery:(id)arg1;
- (id)xiaoWeiEntryText;
- (void)setXiaoWeiEntryText:(id)arg1;
- (id)xiaoWeiExtraData;
- (void)setXiaoWeiExtraData:(id)arg1;
- (id)xiaoWeiBypass;
- (void)setXiaoWeiBypass:(id)arg1;
- (void).cxx_destruct;
@end

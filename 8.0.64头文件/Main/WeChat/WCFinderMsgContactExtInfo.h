@interface WCFinderMsgContactExtInfo : NSObject
{
    BOOL _isRequesting; // +0x8
    unsigned int _refreshInterval; // +0xc
    unsigned long long _lastRequestTime; // +0x10
    FinderPrivateMsgContactExtInfo * _respExtInfo; // +0x18
}
- (id)parseRankSignViewModel;
- (id)parseSignUIStateInfo;
- (id)parseBadgeLabelViewModel;
- (id)parseBuyBadgeInfo;
- (id)parseFrequentWatchBadgeInfo;
- (id)parseFollowerBadgeInfo;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (unsigned long long)lastRequestTime;
- (void)setLastRequestTime:(unsigned long long)arg1;
- (unsigned int)refreshInterval;
- (void)setRefreshInterval:(unsigned int)arg1;
- (id)respExtInfo;
- (void)setRespExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

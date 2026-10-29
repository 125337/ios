@interface WCFinderLiveNoticeInfoCache : NSObject
{
    NSString * _noticeId; // +0x8
    unsigned long long _refreshTime; // +0x10
    unsigned long long _state; // +0x18
}
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


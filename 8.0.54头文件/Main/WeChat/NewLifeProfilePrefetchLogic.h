@interface NewLifeProfilePrefetchLogic : NSObject
{
    BOOL _active; // +0x8
    unsigned int _checkInterval; // +0xc
    unsigned int _prefetchValidDuration; // +0x10
    unsigned int _mostRecentPrefetchTime; // +0x14
    NSString * _finderUsername; // +0x18
    FinderUserPageResponse * _response; // +0x20
    MMTimer * _timer; // +0x28
}
- (id)init;
- (void)updateCheckInterval:(unsigned int)arg1 prefetchValidDuration:(unsigned int)arg2;
- (void)updateFinderUsername:(id)arg1;
- (unsigned int)usedCheckInterval;
- (unsigned int)usedPrefetchValidDuration;
- (BOOL)isPrefetchEnabled;
- (void)startOrResumePrefetch;
- (void)pausePrefetch;
- (void)checkPrefetch;
- (void)resetTimer;
- (id)prefetchedResponse;
- (void)markPrefetchedResponseAsExpired;
- (unsigned int)checkInterval;
- (void)setCheckInterval:(unsigned int)arg1;
- (unsigned int)prefetchValidDuration;
- (void)setPrefetchValidDuration:(unsigned int)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (unsigned int)mostRecentPrefetchTime;
- (void)setMostRecentPrefetchTime:(unsigned int)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg1;
- (void).cxx_destruct;
@end


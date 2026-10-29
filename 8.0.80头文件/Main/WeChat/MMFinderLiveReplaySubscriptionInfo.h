@interface MMFinderLiveReplaySubscriptionInfo : NSObject
{
    BOOL _enableShowEntry; // +0x8
    BOOL _isAnchor; // +0x9
    BOOL _isSubscribed; // +0xa
    unsigned int _seq; // +0xc
    NSString * _entryWording; // +0x10
    unsigned long long _subscribedCount; // +0x18
}
+ (id)infoFromResp:(id)arg1;
- (BOOL)enableShowEntry;
- (void)setEnableShowEntry:(BOOL)arg1;
- (id)entryWording;
- (void)setEntryWording:(id)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (unsigned long long)subscribedCount;
- (void)setSubscribedCount:(unsigned long long)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (BOOL)isSubscribed;
- (void)setIsSubscribed:(BOOL)arg1;
- (void).cxx_destruct;
@end

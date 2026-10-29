@interface MMFinderLiveWatchMilestoneInfo : NSObject
{
    BOOL _canShareToComment; // +0x8
    unsigned long long _totalWatchDays; // +0x10
    unsigned long long _milestoneDays; // +0x18
    NSString * _cardTitlePrefixWording; // +0x20
    NSString * _cardTitleSuffixWording; // +0x28
    NSString * _cardBgUrl; // +0x30
    NSString * _cardDate; // +0x38
    NSString * _selfAvatarUrl; // +0x40
    NSString * _anchorAvatarUrl; // +0x48
    NSString * _anchorNickname; // +0x50
    WCFinderAuthInfo * _anchorAuthInfo; // +0x58
}
- (id)initWithCardInfo:(id)arg1 cardUserContact:(id)arg2 liveTaskId:(id)arg3;
- (unsigned long long)totalWatchDays;
- (void)setTotalWatchDays:(unsigned long long)arg1;
- (unsigned long long)milestoneDays;
- (void)setMilestoneDays:(unsigned long long)arg1;
- (id)cardTitlePrefixWording;
- (void)setCardTitlePrefixWording:(id)arg1;
- (id)cardTitleSuffixWording;
- (void)setCardTitleSuffixWording:(id)arg1;
- (id)cardBgUrl;
- (void)setCardBgUrl:(id)arg1;
- (id)cardDate;
- (void)setCardDate:(id)arg1;
- (id)selfAvatarUrl;
- (void)setSelfAvatarUrl:(id)arg1;
- (id)anchorAvatarUrl;
- (void)setAnchorAvatarUrl:(id)arg1;
- (id)anchorNickname;
- (void)setAnchorNickname:(id)arg1;
- (id)anchorAuthInfo;
- (void)setAnchorAuthInfo:(id)arg1;
- (BOOL)canShareToComment;
- (void)setCanShareToComment:(BOOL)arg1;
- (void).cxx_destruct;
@end

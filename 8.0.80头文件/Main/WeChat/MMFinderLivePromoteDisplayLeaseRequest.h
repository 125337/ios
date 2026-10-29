@interface MMFinderLivePromoteDisplayLeaseRequest : NSObject <NSCopying>
{
    BOOL _dismissCurrentPromotion; // +0x8
    BOOL _relinquishUponUpcomingPromotion; // +0x9
    BOOL _userDismissable; // +0xa
    unsigned long long _priority; // +0x10
    double _duration; // +0x18
    id _userInfo; // +0x20
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (BOOL)dismissCurrentPromotion;
- (void)setDismissCurrentPromotion:(BOOL)arg1;
- (BOOL)relinquishUponUpcomingPromotion;
- (void)setRelinquishUponUpcomingPromotion:(BOOL)arg1;
- (BOOL)userDismissable;
- (void)setUserDismissable:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

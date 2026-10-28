@interface TingMembershipManager : NSObject <TingMembershipListener>
- (id)init;
- (void)dealloc;
- (void)setNeedsUpdateMembershipInfo;
- (void)refreshMembershipInfoIfNeeded;
- (void)didWillEnterForegroundNotification:(id)arg1;
- (void)onMembershipStatusChanged:(int)arg1 toStatus:(int)arg2;
- (void)onMembershipInfoUpdated:(id)arg1;
@end

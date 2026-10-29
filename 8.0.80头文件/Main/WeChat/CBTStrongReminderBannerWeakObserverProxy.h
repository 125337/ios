@interface CBTStrongReminderBannerWeakObserverProxy : NSObject <CBTStrongReminderBannerObserverBase>
{
    id <CBTStrongReminderBannerObserverBase> _target; // +0x8
}
- (id)initWithTarget:(id)arg1;
- (void)onStateChanged:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end

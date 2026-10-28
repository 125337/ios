@interface MMLiveRewardGiftNotificationContainerView : MMUIView
{
    BOOL _expandForSubNotification; // +0x8
    id <MMLiveRewardGiftNotificationContainerViewDelegate> _containerDelegate; // +0x10
    unsigned long long _layoutMode; // +0x18
}
- (void)setExpandForSubNotification:(BOOL)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (unsigned long long)layoutMode;
- (void)setLayoutMode:(unsigned long long)arg1;
- (BOOL)expandForSubNotification;
- (void).cxx_destruct;
@end

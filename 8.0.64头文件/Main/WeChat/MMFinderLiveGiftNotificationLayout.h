@interface MMFinderLiveGiftNotificationLayout : NSObject
{
    BOOL _isOtherAnchor; // +0x8
    BOOL _isOtherRoomAudience; // +0x9
    NSString * _comboId; // +0x10
    NSString * _recipientUserName; // +0x18
    long long _notificationOrientation; // +0x20
    MMLiveRewardGiftNotificationContainerView * _notificationSuperView; // +0x28
    unsigned long long _layoutMode; // +0x30
    CGPoint _notificationOffset; // +0x38
}
- (id)comboId;
- (void)setComboId:(id)arg1;
- (id)recipientUserName;
- (void)setRecipientUserName:(id)arg1;
- (CGPoint)notificationOffset;
- (void)setNotificationOffset:(CGPoint)arg1;
- (long long)notificationOrientation;
- (void)setNotificationOrientation:(long long)arg1;
- (id)notificationSuperView;
- (void)setNotificationSuperView:(id)arg1;
- (BOOL)isOtherAnchor;
- (void)setIsOtherAnchor:(BOOL)arg1;
- (BOOL)isOtherRoomAudience;
- (void)setIsOtherRoomAudience:(BOOL)arg1;
- (unsigned long long)layoutMode;
- (void)setLayoutMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

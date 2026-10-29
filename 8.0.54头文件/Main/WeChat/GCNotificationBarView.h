@interface GCNotificationBarView : UIControl
{
    MMWebImageView * _leftIcon; // +0x8
    UILabel * _notificationLabel; // +0x10
    MMWebImageView * _rightIcon; // +0x18
    JumpInfo * _jumpInfo; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)configFromNotification:(id)arg1;
- (void)layoutLabel:(id)arg1 withText:(id)arg2 width:(double)arg3 lineHeight:(double)arg4;
- (void)configureWithNotification:(id)arg1;
- (id)leftIcon;
- (void)setLeftIcon:(id)arg1;
- (id)notificationLabel;
- (void)setNotificationLabel:(id)arg1;
- (id)rightIcon;
- (void)setRightIcon:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end


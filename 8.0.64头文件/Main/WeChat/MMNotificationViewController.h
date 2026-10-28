@interface MMNotificationViewController : MMWindowViewController
{
    MMNotificationView * _notificationView; // +0x80
    id <MMNotificationViewControllerDelegate> _delegate; // +0x88
    double _autoHideDuration; // +0x90
    MMTimer * _timer; // +0x98
}
- (id)initWithNotificationView:(id)arg1;
- (void)resetAutoHideTimer;
- (void)showNotification;
- (void)hideNotification;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)show;
- (void)hide;
- (void)layoutUI;
- (void)handlePanGesture:(id)arg1;
- (id)notificationView;
- (void)setNotificationView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)autoHideDuration;
- (void)setAutoHideDuration:(double)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

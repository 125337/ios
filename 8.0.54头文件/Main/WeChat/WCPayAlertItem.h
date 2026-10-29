@interface WCPayAlertItem : NSObject
{
    NSString * _alertTitle; // +0x8
    NSString * _leftButtonWording; // +0x10
    NSString * _rightButtonWording; // +0x18
    NSString * _rightButtonUrl; // +0x20
}
- (id)alertTitle;
- (void)setAlertTitle:(id)arg1;
- (id)leftButtonWording;
- (void)setLeftButtonWording:(id)arg1;
- (id)rightButtonWording;
- (void)setRightButtonWording:(id)arg1;
- (id)rightButtonUrl;
- (void)setRightButtonUrl:(id)arg1;
- (void).cxx_destruct;
@end


@interface WARemoteDebugMaskView : UIView
{
    BOOL _isShowing; // +0x8
    UILabel * _label; // +0x10
    UIButton * _stopButton; // +0x18
}
- (id)init;
- (void)showWithString:(id)arg1;
- (void)dismiss;
- (id)stopButton;
- (void)setStopButton:(id)arg1;
- (void).cxx_destruct;
@end

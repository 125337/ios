@interface AnimationStatusView : UIView
{
    MMUILabel * _statusView; // +0x8
    NSString * _nsWording; // +0x10
    NSString * _nsAppending; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)playAppending;
- (void)updateColor:(id)arg1;
- (void)updateWithWord:(id)arg1 Append:(id)arg2 Font:(double)arg3;
- (void)updateWithWord:(id)arg1 Font:(double)arg2;
- (void)startAnimation;
- (void)stopAnimation;
- (id)getText;
- (void).cxx_destruct;
@end

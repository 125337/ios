@interface FBSDKLoginTooltipView : FBSDKTooltipView
{
    BOOL _forceDisplay; // +0x8
    id <FBSDKLoginTooltipViewDelegate> _delegate; // +0x10
}
- (id)init;
- (void)presentInView:(id)arg1 withArrowPosition:(CGPoint)arg2 direction:(unsigned long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldForceDisplay;
- (void)setForceDisplay:(BOOL)arg1;
- (void).cxx_destruct;
@end

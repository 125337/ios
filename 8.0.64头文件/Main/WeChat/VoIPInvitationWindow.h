@interface VoIPInvitationWindow : MMWindow
{
    id <VoIPInvitationWindowDelegate> _delegate; // +0x10
}
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderJumpInfoButton : WCFinderJumpInfoView
{
    MMUIButton * _actionButton; // +0x8
}
- (id)init;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)changeToShow:(BOOL)arg1;
- (void)onActionButtonDidClick;
- (void)updateButton:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end

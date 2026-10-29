@interface WCFinderJumpInfoButton : WCFinderJumpInfoView <WCFinderJumpInfoInteractable>
{
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate; // +0x8
    MMUIButton * _actionButton; // +0x10
}
- (id)init;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)changeToShow:(BOOL)arg1;
- (void)onActionButtonDidClick;
- (id)actionButton;
- (id)interactDelegate;
- (void)setInteractDelegate:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end

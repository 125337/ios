@interface WCFinderJumpInfoButton : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoButtonDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _jumpInfo; // +0x18
    FinderJumpInfo_Style * _style; // +0x20
    MMUIButton * _actionButton; // +0x28
}
- (id)init;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)changeToShow:(BOOL)arg1;
- (id)jumpInfo;
- (int)showPosition;
- (void)onActionButtonDidClick;
- (void)updateButton:(id)arg1;
- (id)actionButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end


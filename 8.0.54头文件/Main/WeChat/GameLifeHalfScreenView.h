@interface GameLifeHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _isBlack; // +0x8
    BOOL _isAssociateWithWxGame; // +0x9
    BOOL _userDisAssociateWithWxGame; // +0xa
    id <GameLifeBlackHalfViewControllerDelegate> _delegate; // +0x10
}
- (id)initWithDetail:(unsigned int)arg1 isBlack:(BOOL)arg2 isAssociate:(BOOL)arg3;
- (void)addDetailView:(unsigned int)arg1 isBlack:(BOOL)arg2 isAssociate:(BOOL)arg3;
- (void)toggleButton:(id)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (id)colorForPageSheetCancelButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


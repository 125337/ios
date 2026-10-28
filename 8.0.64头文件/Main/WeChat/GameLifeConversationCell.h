@interface GameLifeConversationCell : MMBaseSessionTableViewCell
{
    GameLifeConversationCellViewModel * _viewModel; // +0x48
    id <GameLifeConversationCellDelegate> _gameLifeDelegate; // +0x50
}
- (id)initWithLayoutParam:(id)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithSessionCellData:(id)arg1;
- (void)layoutSubviews;
- (void)updateMsgLabelWithSessionCellData:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)gameLifeDelegate;
- (void)setGameLifeDelegate:(id)arg1;
- (void).cxx_destruct;
@end

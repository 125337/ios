@interface MsgPlayingMinimizeView : UIView <MiniAudioTaskContentViewDelegate>
{
    MiniAudioTaskContentView * _contentView; // +0x8
    id /* block */ _ClickCloseButtonAction; // +0x10
    id /* block */ _ClickContentAction; // +0x18
    MMHeadImageView * _headImageView; // +0x20
    UIImageView * _animateView; // +0x28
}
- (id)initWithUsrName:(id)arg1;
- (void)updateUsrName:(id)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)initSubviewWithUsrName:(id)arg1;
- (void)layoutUI;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (id)contentView;
- (id /* block */)ClickCloseButtonAction;
- (void)setClickCloseButtonAction:(id /* block */)arg1;
- (id /* block */)ClickContentAction;
- (void)setClickContentAction:(id /* block */)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)animateView;
- (void)setAnimateView:(id)arg1;
- (void).cxx_destruct;
@end


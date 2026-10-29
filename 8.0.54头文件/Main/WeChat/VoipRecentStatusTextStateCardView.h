@interface VoipRecentStatusTextStateCardView : VoipRecentStatusCardView <RichTextLayoutDelegate, VoipRecentStatusProperties>
{
    BOOL _isSoundBtnHidden; // +0x8
    BOOL _shouldPlaySound; // +0x9
    BOOL _isVisable; // +0xa
    BOOL _hasShownBefore; // +0xb
    id /* block */ _didClickSoundButtonCallback; // +0x10
    id /* block */ _didClickOpenPageButtonCallback; // +0x18
    UIView * _backgroundView; // +0x20
    VoipRecentStatusTextStatePublishIconButton * _textStatePublishIconButton; // +0x28
    VoipRecentStatusTextStatePublishSourceView * _textStatePublishSourceView; // +0x30
    RichTextView * _descriptionRichTextView; // +0x38
    UILabel * _positionLabel; // +0x40
    TextStateModel * _textStateModel; // +0x48
    UIView * _soundView; // +0x50
    UIImageView * _soundIconImageView; // +0x58
    UIView * _openPageHotView; // +0x60
    VoipRecentStatusFadeView * _topFadeView; // +0x68
    VoipRecentStatusFadeView * _bottomFadeView; // +0x70
    TextStateCardReporter * _reporter; // +0x78
}
- (id)initWithUserName:(id)arg1 textStateModel:(id)arg2;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)onClickOpenPageHotViewWithSender:(id)arg1;
- (void)onSilenceViewClickWithSender:(id)arg1;
- (void)onCardShow;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (BOOL)isSoundBtnHidden;
- (void)setIsSoundBtnHidden:(BOOL)arg1;
- (BOOL)shouldPlaySound;
- (void)setShouldPlaySound:(BOOL)arg1;
- (BOOL)isVisable;
- (void)setIsVisable:(BOOL)arg1;
- (id /* block */)didClickSoundButtonCallback;
- (void)setDidClickSoundButtonCallback:(id /* block */)arg1;
- (id /* block */)didClickOpenPageButtonCallback;
- (void)setDidClickOpenPageButtonCallback:(id /* block */)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)textStatePublishIconButton;
- (void)setTextStatePublishIconButton:(id)arg1;
- (id)textStatePublishSourceView;
- (void)setTextStatePublishSourceView:(id)arg1;
- (id)descriptionRichTextView;
- (void)setDescriptionRichTextView:(id)arg1;
- (id)positionLabel;
- (void)setPositionLabel:(id)arg1;
- (id)textStateModel;
- (void)setTextStateModel:(id)arg1;
- (id)soundView;
- (void)setSoundView:(id)arg1;
- (id)soundIconImageView;
- (void)setSoundIconImageView:(id)arg1;
- (id)openPageHotView;
- (void)setOpenPageHotView:(id)arg1;
- (id)topFadeView;
- (void)setTopFadeView:(id)arg1;
- (id)bottomFadeView;
- (void)setBottomFadeView:(id)arg1;
- (BOOL)hasShownBefore;
- (void)setHasShownBefore:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end


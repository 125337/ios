@interface WCFinderPanelRingtoneBubbleView : UIView <VideRingModifyExt, WCFinderFeedContentVMExt>
{
    id <WCFinderPanelRingtoneBubbleViewDelegate> _delegate; // +0x8
    double _textAreaMaxWidth; // +0x10
    double _maxWidth; // +0x18
    UIView * _containerView; // +0x20
    UIImageView * _musicImageView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _descLabel; // +0x38
    MMLiveIconButton * _actionButton; // +0x40
    WCFinderFeedContentVM * _contentVM; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithContentVM:(id)arg1;
- (void)onClickActionButton;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)onFeedOriginalSoundInfoChanged:(id)arg1;
- (id)containerView;
- (id)musicImageView;
- (id)titleLabel;
- (id)descLabel;
- (id)actionButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)textAreaMaxWidth;
- (void)setTextAreaMaxWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setContainerView:(id)arg1;
- (void)setMusicImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end

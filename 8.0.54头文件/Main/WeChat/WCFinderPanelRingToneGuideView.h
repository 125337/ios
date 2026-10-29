@interface WCFinderPanelRingToneGuideView : UIView
{
    id <WCFinderPanelRingToneGuideViewDelegate> _delegate; // +0x8
    UIImageView * _imageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
    MMLiveIconButton * _actionButton; // +0x28
    WCFinderFeedContentVM * _contentVM; // +0x30
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithContentVM:(id)arg1;
- (void)layoutSubviews;
- (void)onClickActionButton;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)onFeedOriginalSoundInfoChanged:(id)arg1;
- (id)imageView;
- (id)titleLabel;
- (id)descLabel;
- (id)actionButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end


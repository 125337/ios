@interface VoipRecentStatusTextStatePublishIconButton : UIControl
{
    TextStateIcon * _iconWrap; // +0x8
    NSString * _customIconDescription; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    MMUILabel * _iconDescriptionLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setIconWrap:(id)arg1;
- (void)setCustomIconDescription:(id)arg1;
- (void)refreshIconDescriptionLabel;
- (id)iconWrap;
- (id)customIconDescription;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)iconDescriptionLabel;
- (void)setIconDescriptionLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end


@interface MMIconItemView : UIView <MMWebImageViewDelegate, MMIconItemConfigDelegate>
{
    BOOL _changeIconColorOnAppearanceChange; // +0x8
    MMIconItemViewConfig * _config; // +0x10
    NSURL * _iconImageURL; // +0x18
    double _textMaxWidth; // +0x20
    id <MMIconItemDelegate> _delegate; // +0x28
    MMWebImageView * _iconView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    UIColor * _iconColorLM; // +0x40
    UIColor * _iconColorDM; // +0x48
    UIView * _bgView; // +0x50
    UIImage * _iconImage; // +0x58
}
- (id)initWithConfig:(id /* block */)arg1;
- (void)parseConfig;
- (void)initViews;
- (void)layoutViews;
- (CGSize)intrinsicContentSize;
- (void)updateColorOnAppearanceChange;
- (void)onLoadImageOK:(id)arg1;
- (id)bgView;
- (id)iconView;
- (id)webImageViewWithURL:(id)arg1;
- (id)titleLabel;
- (void)setIconImageURL:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)onConfigChanged;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)iconImageURL;
- (double)textMaxWidth;
- (void)setTextMaxWidth:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (BOOL)changeIconColorOnAppearanceChange;
- (void)setChangeIconColorOnAppearanceChange:(BOOL)arg1;
- (id)iconColorLM;
- (void)setIconColorLM:(id)arg1;
- (id)iconColorDM;
- (void)setIconColorDM:(id)arg1;
- (void)setBgView:(id)arg1;
- (id)iconImage;
- (void).cxx_destruct;
@end


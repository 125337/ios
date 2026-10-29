@interface WeappToolItemView : MMUIView
{
    MaterialRecommWxaCard * _wxaCard; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    unsigned long long _debugMode; // +0x20
    NSURL * _imageUrl; // +0x28
    MMWebImageView * _iconView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUILabel * _descLabel; // +0x40
    MMUIButton * _debugModeButton; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutViews;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)setImageUrl:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setDesc:(id)arg1;
- (void)setDebugMode:(unsigned long long)arg1;
- (id)iconView;
- (id)titleLabel;
- (id)descLabel;
- (id)debugModeButton;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)wxaCard;
- (void)setWxaCard:(id)arg1;
- (id)title;
- (id)desc;
- (unsigned long long)debugMode;
- (id)imageUrl;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setDebugModeButton:(id)arg1;
- (void).cxx_destruct;
@end

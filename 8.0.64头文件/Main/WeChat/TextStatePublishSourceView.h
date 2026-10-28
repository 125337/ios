@interface TextStatePublishSourceView : MMUIButton
{
    BOOL _preferCustomView; // +0x8
    UIColor * _textColor; // +0x10
    NSString * _sourceId; // +0x18
    NSString * _iconName; // +0x20
    NSString * _iconImageURL; // +0x28
    UIView * _customView; // +0x30
    id /* block */ _refreshHandler; // +0x38
    id /* block */ _tapHandler; // +0x40
    MMWebImageView * _iconImageView; // +0x48
    MMUILabel * _nameLabel; // +0x50
    UITapGestureRecognizer * _tapGesture; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithTextState:(id)arg1 preferredSourceType:(unsigned int)arg2;
- (void)updateWithTextState:(id)arg1;
- (void)initSubviews;
- (void)initGesture;
- (void)layoutSubviews;
- (void)setSourceId:(id)arg1;
- (void)setIconName:(id)arg1;
- (void)setIconImageURL:(id)arg1;
- (void)setCustomView:(id)arg1;
- (void)setPreferCustomView:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)addShadowEffect;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateIcon;
- (void)onTapView:(id)arg1;
- (id)sourceId;
- (id)iconName;
- (id)iconImageURL;
- (id)customView;
- (id /* block */)refreshHandler;
- (void)setRefreshHandler:(id /* block */)arg1;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (BOOL)preferCustomView;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

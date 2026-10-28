@interface VoipRecentStatusTextStatePublishSourceView : MMUIButton
{
    BOOL _preferCustomView; // +0x8
    NSString * _sourceId; // +0x10
    NSString * _iconName; // +0x18
    NSString * _iconImageURL; // +0x20
    UIView * _customView; // +0x28
    id /* block */ _refreshHandler; // +0x30
    id /* block */ _tapHandler; // +0x38
    MMWebImageView * _iconImageView; // +0x40
    MMUILabel * _nameLabel; // +0x48
    UITapGestureRecognizer * _tapGesture; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithTextState:(id)arg1;
- (void)initSubviews;
- (void)initGesture;
- (void)layoutSubviews;
- (void)setSourceId:(id)arg1;
- (void)setIconName:(id)arg1;
- (void)setIconImageURL:(id)arg1;
- (void)setCustomView:(id)arg1;
- (void)setPreferCustomView:(BOOL)arg1;
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

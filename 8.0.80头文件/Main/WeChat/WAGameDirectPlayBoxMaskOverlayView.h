@interface WAGameDirectPlayBoxMaskOverlayView : UIView
{
    BOOL _iconLoaded; // +0x8
    NSString * _appId; // +0x10
    WAGameDirectPlayBoxMaskPlaceholderConfig * _config; // +0x18
    UIView * _dimView; // +0x20
    MMWebImageView * _iconImageView; // +0x28
    UIView * _iconPlaceholderView; // +0x30
    UILabel * _nameLabel; // +0x38
    NSString * _iconUrlString; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)layoutSubviews;
- (void)configWithAppId:(id)arg1 appName:(id)arg2 iconUrl:(id)arg3;
- (void)loadIconIfNeeded;
- (void)releaseIconImage;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)dimView;
- (void)setDimView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)iconPlaceholderView;
- (void)setIconPlaceholderView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)iconUrlString;
- (void)setIconUrlString:(id)arg1;
- (BOOL)iconLoaded;
- (void)setIconLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end

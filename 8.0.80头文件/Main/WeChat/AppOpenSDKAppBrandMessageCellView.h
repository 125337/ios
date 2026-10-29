@interface AppOpenSDKAppBrandMessageCellView : CommonMessageCellView <MMWebImageViewDelegate>
{
    UIImageView * m_thumbImageView; // +0xb8
    UIImageView * m_defaultLogo; // +0xc0
    UILabel * m_titleLabel; // +0xc8
    UILabel * m_descLabel; // +0xd0
    UIView * m_appBrandSourceView; // +0xd8
    MMWebImageView * _appLogoView; // +0xe0
    MMUILabel * _appNameLabel; // +0xe8
    WCTagsView * _tagsView; // +0xf0
    NSDate * _visibleDate; // +0xf8
}
- (void)layoutContentView;
- (void)preloadWeApp;
- (void)willMoveToWindow:(id)arg1;
- (void)initHeaderView;
- (void)initTagsView;
- (void)addTitleLabel;
- (void)addDescLabel;
- (void)addThumbImageView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)updateThumbImage;
- (void)onLoadImageOK:(id)arg1;
- (id)scaleFixOriginThumbImage:(id)arg1;
- (id)appLogoView;
- (void)setAppLogoView:(id)arg1;
- (id)appNameLabel;
- (void)setAppNameLabel:(id)arg1;
- (id)tagsView;
- (void)setTagsView:(id)arg1;
- (id)visibleDate;
- (void)setVisibleDate:(id)arg1;
- (void).cxx_destruct;
@end

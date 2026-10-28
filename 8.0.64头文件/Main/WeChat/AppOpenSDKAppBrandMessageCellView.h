@interface AppOpenSDKAppBrandMessageCellView : CommonMessageCellView <MMWebImageViewDelegate>
{
    UIImageView * m_thumbImageView; // +0xb0
    UIImageView * m_defaultLogo; // +0xb8
    UILabel * m_titleLabel; // +0xc0
    UILabel * m_descLabel; // +0xc8
    UIView * m_appBrandSourceView; // +0xd0
    MMWebImageView * _appLogoView; // +0xd8
    MMUILabel * _appNameLabel; // +0xe0
    WCTagsView * _tagsView; // +0xe8
    NSDate * _visibleDate; // +0xf0
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

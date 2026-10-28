@interface WAAppPageCellView : WAAppMessageBaseCellView <IMsgExt, IWAUpdatableMsgMgrExt, WAAppPageSystemMsgViewDelegate>
{
    BOOL _isUpdatingContentLabel; // +0xb0
    BOOL _isVisible; // +0xb1
    MMWebImageView * _appLogoView; // +0xb8
    MMUILabel * _appNameLabel; // +0xc0
    UIImageView * _defaultLogo; // +0xc8
    YYAsyncImageView * _imageView; // +0xd0
    MMUILabel * _titleLabel; // +0xd8
    MMUILabel * _updatableContentLabel; // +0xe0
    WAAppPageSystemMsgView * _systemMsgView; // +0xe8
    WCTagsView * _tagsView; // +0xf0
    MMWebImageView * _xmaskView; // +0xf8
    UIImageView * _playIconImgView; // +0x100
    NSDate * _visibleDate; // +0x108
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
- (void)initHeaderView;
- (void)initTagsView;
- (void)initTitleView;
- (void)initUpdatableContentView;
- (void)initPageImageView;
- (void)initPlayImageView;
- (void)initSystemMsgView;
- (void)layoutInternal;
- (void)layoutContentView;
- (void)preloadWeApp;
- (id)displayViewForImageBrowser;
- (void)onTouchUpInside;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)onUpdatableMsgInfoUpdated:(id)arg1 info:(id)arg2;
- (void)tryUpdateUpdatableMsgInfo;
- (void)scheduleUpdateWithLatestMsgInfo:(id)arg1;
- (void)fillUpdatableMsgContent;
- (void)retryWithShareKey:(id)arg1;
- (void)onLinkClicked;
- (id)fontOfSystemMsg;
- (BOOL)WAAppPageSystemMsgView_isUseLightStyle;
- (BOOL)canShowFavoriteMenuItem;
- (void)onAppear;
- (id)appLogoView;
- (void)setAppLogoView:(id)arg1;
- (id)appNameLabel;
- (void)setAppNameLabel:(id)arg1;
- (id)defaultLogo;
- (void)setDefaultLogo:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)updatableContentLabel;
- (void)setUpdatableContentLabel:(id)arg1;
- (id)systemMsgView;
- (void)setSystemMsgView:(id)arg1;
- (BOOL)isUpdatingContentLabel;
- (void)setIsUpdatingContentLabel:(BOOL)arg1;
- (id)tagsView;
- (void)setTagsView:(id)arg1;
- (id)xmaskView;
- (void)setXmaskView:(id)arg1;
- (id)playIconImgView;
- (void)setPlayIconImgView:(id)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (id)visibleDate;
- (void)setVisibleDate:(id)arg1;
- (void).cxx_destruct;
@end

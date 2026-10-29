@interface WAAppPageCellView : WAAppMessageBaseCellView <IMsgExt, IWAUpdatableMsgMgrExt, WAAppPageSystemMsgViewDelegate>
{
    BOOL _isUpdatingContentLabel; // +0xa8
    BOOL _isVisible; // +0xa9
    MMWebImageView * _appLogoView; // +0xb0
    MMUILabel * _appNameLabel; // +0xb8
    UIImageView * _defaultLogo; // +0xc0
    YYAsyncImageView * _imageView; // +0xc8
    MMUILabel * _titleLabel; // +0xd0
    MMUILabel * _updatableContentLabel; // +0xd8
    WAAppPageSystemMsgView * _systemMsgView; // +0xe0
    WCTagsView * _tagsView; // +0xe8
    MMWebImageView * _maskView; // +0xf0
    UIImageView * _playIconImgView; // +0xf8
    NSDate * _visibleDate; // +0x100
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
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)playIconImgView;
- (void)setPlayIconImgView:(id)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (id)visibleDate;
- (void)setVisibleDate:(id)arg1;
- (void).cxx_destruct;
@end


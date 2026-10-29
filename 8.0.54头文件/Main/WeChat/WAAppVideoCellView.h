@interface WAAppVideoCellView : WAAppMessageBaseCellView <IMsgExt, ICdnComMgrExt, MMImageLoaderObserver>
{
    YYAsyncImageView * m_thumbImageView; // +0xa8
    SightIconView * m_sightIconView; // +0xb0
    MMUILabel * _titleLabel; // +0xb8
    WAPlayerHttpMediaWrap * _videoMediaWrap; // +0xc0
    double _videoDownloadProgress; // +0xc8
    UIImage * _appThumb; // +0xd0
    NSString * _appThumbUrl; // +0xd8
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)dealloc;
- (void)stopDownloadVideo;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)stopDownloadImage:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)displayViewForImageBrowser;
- (CGRect)showRectForMenuController;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)initThumbImageView;
- (void)initTitleView;
- (void)initSightIconView;
- (void)updateSightIconView;
- (id)operationMenuItems;
- (void)startPlay:(BOOL)arg1;
- (id)reportWithOperate:(unsigned long long)arg1;
- (void)onSliencePlay:(id)arg1;
- (void)onWAForward:(id)arg1;
- (void)onTouchUpInside;
- (void)onAppear;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void).cxx_destruct;
@end


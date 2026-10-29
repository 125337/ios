@interface LocationMessageCellView : CommonMessageCellView <ILocationMgrExt, ILocationThumbMgrExt>
{
    unsigned long long m_geotag; // +0xa8
    MMUILabel * m_titleLabel; // +0xb0
    MMUILabel * m_descLabel; // +0xb8
    UIImageView * m_contentBgImageView; // +0xc0
    MMImageView * m_imageView; // +0xc8
    MMUIActivityIndicatorView * m_imageLoadingView; // +0xd0
    MMUIActivityIndicatorView * m_poiLoadingView; // +0xd8
    BOOL m_enterBackground; // +0xe0
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)initTitleLabel;
- (void)initContentBgImageView;
- (void)initLocationThumbImageView;
- (void)setLocationThumbImage;
- (id)maskLayerWithBounds:(CGRect)arg1;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)createNewRequest;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)OnUpdateLocationThumb:(id)arg1 Task:(id)arg2;
- (void)OnLocationThumbMgrError:(int)arg1 Task:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void).cxx_destruct;
@end


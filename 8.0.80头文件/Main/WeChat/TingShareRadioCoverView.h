@interface TingShareRadioCoverView : UIView <MMWebImageViewDelegate>
{
    MMWebImageView * _foregroundCoverView; // +0x8
    MMWebImageView * _backgroundCoverView; // +0x10
    UIView * _authorIconContainerView; // +0x18
    MMWebImageView * _authorIconView; // +0x20
    NSMutableArray * _shapeLayers; // +0x28
    TingCoverInfo * _coverInfo; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutAuthorIcon;
- (id)foregroundCoverView;
- (id)backgroundCoverView;
- (id)authorIconContainerView;
- (id)authorIconView;
- (id)shapeLayers;
- (void)updateWithCoverInfo:(id)arg1;
- (void)setAuthorIconHidden:(BOOL)arg1;
- (void)prepareForReuse;
- (void)onLoadImageOK:(id)arg1;
- (void)setForegroundCoverView:(id)arg1;
- (void)setBackgroundCoverView:(id)arg1;
- (void)setAuthorIconContainerView:(id)arg1;
- (void)setAuthorIconView:(id)arg1;
- (void)setShapeLayers:(id)arg1;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (void).cxx_destruct;
@end

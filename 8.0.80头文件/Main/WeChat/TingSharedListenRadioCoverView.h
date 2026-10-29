@interface TingSharedListenRadioCoverView : UIView <MMWebImageViewDelegate>
{
    UIView * _decorCircle1; // +0x8
    UIView * _decorCircle2; // +0x10
    MMWebImageView * _coverView; // +0x18
    TingCoverInfo * _coverInfo; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)buildDecorCircleWithEdgeAlpha:(double)arg1;
- (id)decorCircle1;
- (id)decorCircle2;
- (id)coverView;
- (void)updateWithCoverInfo:(id)arg1;
- (void)loadImageUrl:(id)arg1 intoView:(id)arg2;
- (void)prepareForReuse;
- (void)onLoadImageOK:(id)arg1;
- (void)setDecorCircle1:(id)arg1;
- (void)setDecorCircle2:(id)arg1;
- (void)setCoverView:(id)arg1;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (void).cxx_destruct;
@end

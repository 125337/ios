@interface SightTemplateCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>
{
    MMWebImageView * _customImageView; // +0x8
    MMUIActivityIndicatorView * _customLoadingView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initialize;
- (void)layoutSubviews;
- (void)reLayoutViews;
- (void)updateWithTemplateInfo:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)customImageView;
- (void)setCustomImageView:(id)arg1;
- (id)customLoadingView;
- (void)setCustomLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveImageCarouselViewItem : UICollectionViewCell <MMWebImageViewDelegate>
{
    MMWebImageView * _bgView; // +0x8
}
- (void)updateViewModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutBgView;
- (id)bgView;
- (void)onLoadImageOK:(id)arg1;
- (void)setBgView:(id)arg1;
- (void).cxx_destruct;
@end

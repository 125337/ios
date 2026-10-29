@interface MMFinderLiveCouponCardCell : UICollectionViewCell
{
    BOOL _crossFading; // +0x8
    UIImageView * _imageView; // +0x10
    MMFinderLiveCouponCardSlotView * _slotView; // +0x18
}
+ (CGSize)backgroundSize;
+ (double)contentAreaWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)arg1;
- (void)crossFadeToViewModel:(id)arg1 completion:(id /* block */)arg2;
- (void)bindSlotWithViewModel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)slotView;
- (void)setSlotView:(id)arg1;
- (BOOL)crossFading;
- (void)setCrossFading:(BOOL)arg1;
- (void).cxx_destruct;
@end

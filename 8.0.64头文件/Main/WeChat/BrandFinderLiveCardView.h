@interface BrandFinderLiveCardView : BrandFinderLiveBaseCardView <MMWebImageViewDelegate>
{
    MMUILabel * _categoryLabel; // +0x8
    MMWebImageView * _coverImageView; // +0x10
    UIImageView * _backgroundImageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateViewModel:(id)arg1;
- (void)updateLiveStatus:(BOOL)arg1 statusWording:(id)arg2;
- (void)updateRecommendReason:(id)arg1;
- (void)configureLayout;
- (void)loadData;
- (void)onLoadCoverImage:(id)arg1;
- (void)layoutSubviews;
- (void)updateLiveStatusView;
- (void)updateBackgroundImageWithLiveStatus:(id)arg1;
- (void)markDirtyElements:(id)arg1;
- (double)titleMaxWidth;
- (id)categoryLabel;
- (id)coverImageView;
- (id)backgroundImageView;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)setCategoryLabel:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void).cxx_destruct;
@end

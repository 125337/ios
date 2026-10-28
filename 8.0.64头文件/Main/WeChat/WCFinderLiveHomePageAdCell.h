@interface WCFinderLiveHomePageAdCell : WCFinderLiveFeedBaseStyleableCell <MMWebImageViewDelegate, WCFinderLiveFeedGenericCardCellProtocol>
{
    MMWebImageView * _coverLeftImageView; // +0x8
    MMWebImageView * _coverRightImageView; // +0x10
    WCFinderLiveGenericFeedVM * _feedVM; // +0x18
}
+ (double)cellHeight;
+ (double)cellWidthWithContainerModel:(id)arg1 inWidth:(double)arg2;
+ (id)cellIdentifier;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithFeedVM:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)coverLeftImageView;
- (void)setCoverLeftImageView:(id)arg1;
- (id)coverRightImageView;
- (void)setCoverRightImageView:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (void).cxx_destruct;
@end

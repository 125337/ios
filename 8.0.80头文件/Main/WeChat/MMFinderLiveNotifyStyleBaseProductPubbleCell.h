@interface MMFinderLiveNotifyStyleBaseProductPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell
{
    MMWebImageView * _imageView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _priceLabel; // +0x18
    UIImageView * _iconView; // +0x20
    AnyPromise * _getProductInfo; // +0x28
}
+ (double)horizontalMargin;
+ (id)font;
+ (CGSize)preferSizeForCellFrame:(id)arg1;
+ (double)preferDisplayDurationWithComment:(id)arg1;
- (id)initWithCellFrame:(id)arg1;
- (void)layoutUI;
- (id)hotSaleInfo;
- (double)rightIconLeftMargin;
- (double)priceRightMargin;
- (void)reportLiveStatsWithActionType:(int)arg1;
- (void)didMoveToWindow;
- (id)getProductInfo;
- (void)onTap;
- (void)onWillOpenProduct:(id)arg1;
- (void)runCustomEnterAnimation;
- (void)reportExposeWithExtra:(id)arg1;
- (void)reportClickWithExtra:(id)arg1 product:(id)arg2;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void)setGetProductInfo:(id)arg1;
- (void).cxx_destruct;
@end

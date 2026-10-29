@interface BrandProfileItemReaderViewModel : BrandProfileItemBaseViewModel
- (BOOL)showAsLargeCover;
- (double)calCellHeight;
- (double)itemViewHeightForNormalItem;
- (double)normalCoverTopMargin;
- (double)firstItemTopPadding;
- (double)normalCoverBottomMargin;
- (id)tableViewCellClassName;
- (id)coverImgURL;
- (id)titleFont;
- (double)titleMaxWidth;
- (double)pinnedSummaryCellHeight;
@end

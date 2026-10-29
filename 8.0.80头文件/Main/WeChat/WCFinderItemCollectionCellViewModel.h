@interface WCFinderItemCollectionCellViewModel : CommonMessageViewModel
{
    CGSize _viewSize; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (double)titleHeight;
- (double)descriptionHeight;
- (id)shareItem;
- (double)thumbLength;
- (id)titleText;
- (id)titleFont;
- (id)descriptionText;
- (id)descriptionFont;
- (id)thumbURL;
- (id)groupTitle;
- (BOOL)enabledFavorite;
- (id)reportParamsWithIsFavorite:(BOOL)arg1;
- (void)exposeReport;
- (CGSize)viewSize;
- (void)setViewSize:(CGSize)arg1;
@end

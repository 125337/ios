@interface BrandProfileItemMultiImageViewModel : BrandProfileItemBaseViewModel
+ (BOOL)showMultiImageForItemMsg:(id)arg1 groupMsg:(id)arg2;
- (id)tableViewCellClassName;
- (BOOL)showTitleWithinCover;
- (double)calCellHeight;
- (CGSize)coverImageSize;
- (double)titleMaxWidth;
- (id)titleFont;
- (id)coverImageURLs;
- (unsigned int)imageCount;
@end

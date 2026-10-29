@interface BrandProfileItemImageViewModel : BrandProfileItemBaseViewModel
{
    CGSize _coverImgSize; // +0x10
}
- (id)tableViewCellClassName;
- (BOOL)showBigCover;
- (double)calCellHeight;
- (double)calSingleStyleItemHeight;
- (double)normalCoverBottomMargin;
- (double)titleMaxWidth;
- (id)titleFont;
- (id)coverImgURL;
- (CGSize)coverImgSize;
- (id)imageCountStr;
- (void)setCoverImgSize:(CGSize)arg1;
@end


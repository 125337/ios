@interface BrandProfileItemVideoViewModel : BrandProfileItemBaseViewModel
{
    double _titleMaxWidth; // +0x10
    NSString * _timeStr; // +0x18
    NSString * _coverImgURL; // +0x20
    CGSize _coverImgSize; // +0x28
}
- (id)tableViewCellClassName;
- (unsigned long long)style;
- (double)calCellHeight;
- (double)normalCoverBottomMargin;
- (double)calSingleStyleItemHeight;
- (id)coverImgURL;
- (CGSize)coverImgSize;
- (double)titleMaxWidth;
- (id)titleFont;
- (id)timeStr;
- (void)setTitleMaxWidth:(double)arg1;
- (void)setTimeStr:(id)arg1;
- (void)setCoverImgURL:(id)arg1;
- (void)setCoverImgSize:(CGSize)arg1;
- (void).cxx_destruct;
@end


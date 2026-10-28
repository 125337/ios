@interface EmoticonCustomManageMultiImageTabItem : UIView
{
    UIImageView * _imgView; // +0x8
    UIView * _darkMaskView; // +0x10
    UIView * _selectBGView; // +0x18
    double _cellWidth; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)imgView;
- (void)setImgView:(id)arg1;
- (id)darkMaskView;
- (void)setDarkMaskView:(id)arg1;
- (id)selectBGView;
- (void)setSelectBGView:(id)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (void).cxx_destruct;
@end

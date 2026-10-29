@interface GCVerticalImgLabelView : UIView
{
    UIView * _topView; // +0x8
    MMWebImageView * _imgView; // +0x10
    UILabel * _label; // +0x18
}
- (id)initWithTopViewWidth:(double)arg1 imgWidth:(double)arg2 imgLabelSpace:(double)arg3 labelLayout:(id)arg4 additionLabelSpace:(double)arg5;
- (id)topView;
- (void)setTopView:(id)arg1;
- (id)imgView;
- (void)setImgView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end


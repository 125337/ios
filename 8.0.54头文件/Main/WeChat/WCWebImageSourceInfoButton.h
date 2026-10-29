@interface WCWebImageSourceInfoButton : MMUIButton
{
    UIView * _roundBackView; // +0x8
    UIView * _coverBackView; // +0x10
    MMWebImageView * _iconImgView; // +0x18
    UIImageView * _arrowImgView; // +0x20
}
- (id)init;
- (void)initIconImgView;
- (void)initArrowView;
- (void)updateButtonContentWithImageURL:(id)arg1 title:(id)arg2 maxWidth:(double)arg3;
- (void)layoutSubviews;
- (id)roundBackView;
- (void)setRoundBackView:(id)arg1;
- (id)coverBackView;
- (void)setCoverBackView:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (void).cxx_destruct;
@end


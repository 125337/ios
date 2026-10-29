@interface IPadAuthSuccessContainView : UIView
{
    double _limitWidth; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _subtitleLabel; // +0x18
    MMWebImageView * _appIconImgView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)updateWithAppIconUrl:(id)arg1 nickName:(id)arg2;
- (void)layoutSubviews;
- (double)limitWidth;
- (void)setLimitWidth:(double)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)appIconImgView;
- (void)setAppIconImgView:(id)arg1;
- (void).cxx_destruct;
@end

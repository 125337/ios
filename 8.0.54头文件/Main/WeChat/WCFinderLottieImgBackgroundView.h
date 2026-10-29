@interface WCFinderLottieImgBackgroundView : UIView
{
    id <WCFinderLottieImgBackgroundViewDelegate> _delegate; // +0x8
    UIImageView * _imgBackgroundView; // +0x10
    UIImageView * _arrowImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _subTitleLabel; // +0x28
    UIImageView * _leftImageView; // +0x30
    UIImageView * _leftTopImageView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithLeftImgName:(id)arg1 leftTopImgName:(id)arg2 bgImgName:(id)arg3 title:(id)arg4 subTitle:(id)arg5;
- (void)layoutAllSubviews;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)imgBackgroundView;
- (id)leftImageView;
- (id)leftTopImageView;
- (id)arrowImageView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setImgBackgroundView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setLeftImageView:(id)arg1;
- (void)setLeftTopImageView:(id)arg1;
- (void).cxx_destruct;
@end


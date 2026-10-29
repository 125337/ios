@interface MMWebTouristOAuthView : UIView
{
    id /* block */ _authBlock; // +0x8
    UILabel * _titleTextLabel; // +0x10
    UIImageView * _errorView; // +0x18
    UILabel * _subTitleTextLabel; // +0x20
    UIImageView * _imageArrowView; // +0x28
    NSString * _titleWording; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)transferToWarningStatus;
- (void)setTitleWording:(id)arg1;
- (void)resetTitleColor;
- (void)onClickAuth;
- (id /* block */)authBlock;
- (void)setAuthBlock:(id /* block */)arg1;
- (id)titleTextLabel;
- (void)setTitleTextLabel:(id)arg1;
- (id)errorView;
- (void)setErrorView:(id)arg1;
- (id)subTitleTextLabel;
- (void)setSubTitleTextLabel:(id)arg1;
- (id)imageArrowView;
- (void)setImageArrowView:(id)arg1;
- (id)titleWording;
- (void).cxx_destruct;
@end

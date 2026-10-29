@interface WCLiveBlurButtonBackView : UIView
{
    UIImageView * _blurImgView; // +0x8
    MMUIButton * _topButton; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutBlurImgView;
- (void)layoutTopButton;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)recoverRealTimeBlur;
- (void)setBlurImage:(id)arg1;
- (id)blurImgView;
- (void)setBlurImgView:(id)arg1;
- (id)topButton;
- (void)setTopButton:(id)arg1;
- (void).cxx_destruct;
@end


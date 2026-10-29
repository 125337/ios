@interface CameraScanBlurEffectView : UIView
{
    UIImageView * _topImageView; // +0x8
    UIImageView * _bottomImageView; // +0x10
}
- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)topImageView;
- (void)setTopImageView:(id)arg1;
- (id)bottomImageView;
- (void)setBottomImageView:(id)arg1;
- (void).cxx_destruct;
@end


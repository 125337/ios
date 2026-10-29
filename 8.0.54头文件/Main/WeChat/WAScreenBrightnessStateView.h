@interface WAScreenBrightnessStateView : UIView
{
    UILabel * _nameLabel; // +0x8
    UIImageView * _brightIcon; // +0x10
    UIView * _progressContainerView; // +0x18
    float _curBrightValue; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateScreenBrightness;
- (void).cxx_destruct;
@end


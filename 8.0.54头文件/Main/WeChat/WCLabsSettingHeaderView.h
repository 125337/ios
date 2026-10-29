@interface WCLabsSettingHeaderView : UIView
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
    UIImageView * _leftBGIcon; // +0x18
    UIImageView * _rightBGIcon; // +0x20
    UIImageView * _labsIcon; // +0x28
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)getTitleFontSize;
- (void)initBackground;
- (void)initLabsIcon;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void).cxx_destruct;
@end


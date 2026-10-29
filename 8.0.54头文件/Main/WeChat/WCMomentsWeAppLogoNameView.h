@interface WCMomentsWeAppLogoNameView : UIView
{
    MMUILabel * _nameLabel; // +0x8
    UIImageView * _logoImageView; // +0x10
    UIFont * _font; // +0x18
}
+ (double)widthWithWeAppName:(id)arg1 font:(id)arg2;
+ (double)minWidthWithWeAppName:(id)arg1 font:(id)arg2;
- (id)initWithName:(id)arg1 font:(id)arg2;
- (void)updateWithWeAppName:(id)arg1;
- (void)initLogoImageView;
- (void)initNameLabelWithName:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)minWidth;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)logoImageView;
- (void)setLogoImageView:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void).cxx_destruct;
@end


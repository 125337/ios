@interface MMFinderLiveIconTextSignView : UIView
{
    UILabel * _signLabel; // +0x8
    UIImageView * _iconView; // +0x10
}
+ (CGSize)signSizeWithText:(id)arg1 font:(id)arg2 boundingSize:(CGSize)arg3;
+ (CGSize)signSizeWithText:(id)arg1 font:(id)arg2 boundingSize:(CGSize)arg3 iconWidth:(double)arg4;
- (id)init;
- (void)updateWithIconName:(id)arg1 iconSize:(CGSize)arg2 iconColor:(id)arg3;
- (void)updateWithSignText:(id)arg1 textColor:(id)arg2 bgColor:(id)arg3 font:(id)arg4;
- (void)updateSelfLayout;
- (id)signLabel;
- (id)iconView;
- (id)accessibilityLabel;
- (void)setSignLabel:(id)arg1;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end


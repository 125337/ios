@interface MMFinderLiveLiveRoleSignView : UIView
{
    UILabel * _signLabel; // +0x8
    long long _style; // +0x10
}
+ (double)insetTopForStyle:(long long)arg1;
+ (CGSize)signSizeWithText:(id)arg1 font:(id)arg2 boundingSize:(CGSize)arg3 style:(long long)arg4;
- (id)init;
- (void)updateWithSignText:(id)arg1 textColor:(id)arg2 bgColor:(id)arg3 font:(id)arg4 style:(long long)arg5;
- (void)updateSelfLayout;
- (id)signLabel;
- (id)accessibilityLabel;
- (void)setSignLabel:(id)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void).cxx_destruct;
@end


@interface TextStatePublishBottomButton : UIButton
{
    UIImageView * _selectedImageView; // +0x8
}
+ (id)buttonWithTitle:(id)arg1 imageName:(id)arg2;
+ (id)buttonWithTitleAndColor:(id)arg1 imageName:(id)arg2 color:(id)arg3 highLightedColor:(id)arg4 disabledColor:(id)arg5;
- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)selectedImageView;
- (void)showRedDot;
- (void)hideRedDot;
- (void)setSelectedImageView:(id)arg1;
- (void).cxx_destruct;
@end


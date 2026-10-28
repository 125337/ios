@interface BrandMyTabEntranceCardButtons : UIView
{
    MMUIButton * _postPictureButton; // +0x8
    UIView * _verticalSeparator; // +0x10
    MMUIButton * _postTextButton; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpViews;
- (void)setUpLayout;
- (void)layoutSubviews;
- (void)updateWithCardInfo:(id)arg1;
- (id)postPictureButton;
- (id)verticalSeparator;
- (id)postTextButton;
- (void)setPostPictureButton:(id)arg1;
- (void)setVerticalSeparator:(id)arg1;
- (void)setPostTextButton:(id)arg1;
- (void).cxx_destruct;
@end

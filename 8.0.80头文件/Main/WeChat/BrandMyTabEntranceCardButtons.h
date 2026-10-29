@interface BrandMyTabEntranceCardButtons : UIView
{
    MMUIButton * _postPictureButton; // +0x8
    UIView * _verticalSeparator; // +0x10
    MMUIButton * _postTextButton; // +0x18
    UIView * _redDot; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpViews;
- (void)setUpLayout;
- (void)layoutSubviews;
- (void)updateRedDotPosition;
- (void)updateContentWithCardInfo:(id)arg1 reportInfo:(id)arg2;
- (id)postPictureButton;
- (id)verticalSeparator;
- (id)postTextButton;
- (id)redDot;
- (void)setPostPictureButton:(id)arg1;
- (void)setVerticalSeparator:(id)arg1;
- (void)setPostTextButton:(id)arg1;
- (void)setRedDot:(id)arg1;
- (void).cxx_destruct;
@end

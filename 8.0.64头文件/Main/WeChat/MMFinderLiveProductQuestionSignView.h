@interface MMFinderLiveProductQuestionSignView : UIView
{
    UIImageView * _iconImgView; // +0x8
    MMUILabel * _signLabel; // +0x10
}
+ (CGSize)getProductQuestionSize;
+ (id)productQuestionSignText;
+ (id)signLabelFont;
+ (double)signIconWidth;
+ (double)signIconHeight;
+ (double)insetLeft;
+ (double)insetRight;
+ (double)iconSignInset;
+ (double)insetTop;
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutRankImgView;
- (void)layoutSignLabel;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (void).cxx_destruct;
@end

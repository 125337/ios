@interface MMFinderLiveProductQuestionSignView : UIView
{
    MMUILabel * _signLabel; // +0x8
}
+ (CGSize)getProductQuestionSize;
+ (id)productQuestionSignText;
+ (id)signLabelFont;
+ (double)insetLeft;
+ (double)insetRight;
+ (double)iconSignInset;
+ (double)insetTop;
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSignLabel;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (void).cxx_destruct;
@end

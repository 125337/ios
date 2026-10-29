@interface WCCommentListTipsView : UIView
{
    id /* block */ _clickBlock; // +0x8
    NSString * _tips; // +0x10
    UILabel * _tipsLabel; // +0x18
    UIButton * _clickButton; // +0x20
}
+ (double)heightForTips:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 title:(id)arg2;
- (void)initView;
- (void)initBackgroundView;
- (void)initTipsLabel;
- (void)initClickButton;
- (id)createMaskShapeLayer;
- (void)layoutSubviews;
- (void)onClickButton;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)clickButton;
- (void)setClickButton:(id)arg1;
- (void).cxx_destruct;
@end


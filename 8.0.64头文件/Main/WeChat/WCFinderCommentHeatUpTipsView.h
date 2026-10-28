@interface WCFinderCommentHeatUpTipsView : UIView
{
    id /* block */ _liteAppShowKeyboardAction; // +0x8
    id /* block */ _heatUpComplection; // +0x10
    UIView * _heatUpViewContainer; // +0x18
    NSArray * _heatUpHeaderViews; // +0x20
    UIView * _topLineView; // +0x28
    UIButton * _heatUpButton; // +0x30
    UILabel * _titleLabel; // +0x38
    UILabel * _appendLabel; // +0x40
    NSString * _tid; // +0x48
    FinderObjectHelpPromotionInfo * _promotions; // +0x50
    WCFinderFeedContentVM * _contentVM; // +0x58
    UITapGestureRecognizer * _nicknameGesture; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(CGSize)arg3 addBlur:(BOOL)arg4;
- (void)layoutInfo;
- (void)layoutSubviews;
- (void)clickHeatUpAction;
- (void)promotionSuccessful;
- (void)clickShowDetialAction;
- (void)updateWithPromotionInfo:(id)arg1 feedContentVM:(id)arg2;
- (void)updateView:(id)arg1 count:(unsigned long long)arg2;
- (void)setReporParam;
- (BOOL)showUserPromotionsInfo;
- (id /* block */)liteAppShowKeyboardAction;
- (void)setLiteAppShowKeyboardAction:(id /* block */)arg1;
- (id /* block */)heatUpComplection;
- (void)setHeatUpComplection:(id /* block */)arg1;
- (id)heatUpViewContainer;
- (void)setHeatUpViewContainer:(id)arg1;
- (id)heatUpHeaderViews;
- (void)setHeatUpHeaderViews:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (id)heatUpButton;
- (void)setHeatUpButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)appendLabel;
- (void)setAppendLabel:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)promotions;
- (void)setPromotions:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)nicknameGesture;
- (void)setNicknameGesture:(id)arg1;
- (void).cxx_destruct;
@end

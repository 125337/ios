@interface WCFinderDescShowRecommendTipsView : UIView <WCFinderPersonalizedSettingExt>
{
    id /* block */ _clickActionBlock; // +0x8
    UIButton * _actionButton; // +0x10
    UIButton * _continueView; // +0x18
    UILabel * _titleLabel; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)setUpUI;
- (void)clickButtonAction;
- (void)hideContinueView;
- (void)updateWithContentVM:(id)arg1;
- (id)titleLabelTextWithContentVM:(id)arg1;
- (void)resetActionButton;
- (void)wechatPersonalizedChangeType:(long long)arg1 value:(BOOL)arg2;
- (id /* block */)clickActionBlock;
- (void)setClickActionBlock:(id /* block */)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)continueView;
- (void)setContinueView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

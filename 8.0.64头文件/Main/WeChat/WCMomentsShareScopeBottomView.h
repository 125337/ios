@interface WCMomentsShareScopeBottomView : UIView
{
    id /* block */ _modifyShareScopeBlock; // +0x8
    MMUIButton * _modifyButton; // +0x10
}
+ (double)heightForShareScopeBottomViewWithWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)initModifyButton;
- (void)layoutSubviews;
- (void)onClickModifyShareScopeButton;
- (id /* block */)modifyShareScopeBlock;
- (void)setModifyShareScopeBlock:(id /* block */)arg1;
- (id)modifyButton;
- (void)setModifyButton:(id)arg1;
- (void).cxx_destruct;
@end

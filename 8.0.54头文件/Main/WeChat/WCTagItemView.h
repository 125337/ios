@interface WCTagItemView : UIButton
{
    WCTagItemViewModel * _viewModel; // +0x8
    id /* block */ _clickAction; // +0x10
    long long _lastType; // +0x18
    UIImageView * _tagImageView; // +0x20
    UIView * _customView; // +0x28
}
- (id)initWithClickAction:(id /* block */)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewModel:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)viewModel;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (long long)lastType;
- (void)setLastType:(long long)arg1;
- (id)tagImageView;
- (void)setTagImageView:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (void).cxx_destruct;
@end


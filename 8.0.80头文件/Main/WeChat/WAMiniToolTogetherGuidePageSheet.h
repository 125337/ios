@interface WAMiniToolTogetherGuidePageSheet : WAPageSheet
{
    id /* block */ _acceptBlock; // +0x8
    UIView * _indicatorView; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _descLabel; // +0x28
    UIButton * _acceptButton; // +0x30
}
- (id)init;
- (double)contentHeight;
- (double)textHeight:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 lineSpacing:(double)arg4;
- (void)setupUI;
- (void)onAcceptButtonClick;
- (id /* block */)acceptBlock;
- (void)setAcceptBlock:(id /* block */)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderPanelRecommendThankShareView : UIView <WCFinderThanksButtonDelegate>
{
    WCFinderPanelRecommendThankShareViewModel * _model; // +0x8
    id /* block */ _onTap; // +0x10
    UILabel * _nameLabel; // +0x18
    UILabel * _shareTipsLabel; // +0x20
    UIView * _divider; // +0x28
    WCFinderThanksButton * _thanksButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)updateWithModel:(id)arg1 onTap:(id /* block */)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_updateModel:(id)arg1;
- (void)onThanksButtonClickedWithThanksState:(BOOL)arg1;
- (id)nameLabel;
- (id)shareTipsLabel;
- (id)divider;
- (id)thanksButton;
- (id)_getTextLabel;
- (id)model;
- (void)setModel:(id)arg1;
- (id /* block */)onTap;
- (void)setOnTap:(id /* block */)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setShareTipsLabel:(id)arg1;
- (void)setDivider:(id)arg1;
- (void)setThanksButton:(id)arg1;
- (void).cxx_destruct;
@end

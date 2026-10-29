@interface WAAgentSessionAuthCardCell : WAAgentSessionBaseCell
{
    id /* block */ _onOpenUrl; // +0x8
    id /* block */ _onOpenWeAppLink; // +0x10
    UIView * _cardContainerView; // +0x18
    UILabel * _titleLabel; // +0x20
    WAAgentAuthCardView * _attachedCardView; // +0x28
}
+ (id)cardViewForItem:(id)arg1;
+ (id)titleForItem:(id)arg1;
+ (double)titleRowHeightForTitle:(id)arg1;
+ (double)contentTopForTitle:(id)arg1;
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id /* block */)onOpenUrl;
- (void)setOnOpenUrl:(id /* block */)arg1;
- (id /* block */)onOpenWeAppLink;
- (void)setOnOpenWeAppLink:(id /* block */)arg1;
- (id)cardContainerView;
- (void)setCardContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)attachedCardView;
- (void)setAttachedCardView:(id)arg1;
- (void).cxx_destruct;
@end

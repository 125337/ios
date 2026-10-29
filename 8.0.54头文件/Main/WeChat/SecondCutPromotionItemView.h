@interface SecondCutPromotionItemView : UIStackView
{
    UIImageView * leadingIcon; // +0x8
    MMUILabel * descriptionLabel; // +0x10
    UIStackView * trailingStack; // +0x18
    UDRSecondCutPromotionItem * _promotionItem; // +0x20
}
- (id)initWithPromotionItem:(id)arg1;
- (id)initFromResource:(id)arg1 andLocalTextKey:(id)arg2;
- (void)_initLayout;
- (void)_initLeadingIcon;
- (void)_initTrailingStack;
- (id)leadingIcon;
- (void)setLeadingIcon:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)trailingStack;
- (void)setTrailingStack:(id)arg1;
- (id)promotionItem;
- (void)setPromotionItem:(id)arg1;
- (void).cxx_destruct;
@end


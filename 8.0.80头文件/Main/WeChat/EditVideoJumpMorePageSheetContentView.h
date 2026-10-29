@interface EditVideoJumpMorePageSheetContentView : UIView
{
    RichTextView * titleView; // +0x8
    MMUILabel * subTitleLabel; // +0x10
    SecondCutPromotionItemStackView * promotionItemStackView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_initTitle;
- (void)_initSubtitle;
- (void)_initPromotionItemStackView;
- (void)setPromotionItems:(id)arg1;
- (void)_heightToFit;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)promotionItemStackView;
- (void)setPromotionItemStackView:(id)arg1;
- (void).cxx_destruct;
@end

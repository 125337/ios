@interface MMFinderLiveProductGuideBubbleView : MMFinderLiveBottomRightBubbleView
{
    MMFinderLiveBubbleInfo * _productBubbleInfo; // +0x8
    id /* block */ _closeAction; // +0x10
    id /* block */ _jumpAction; // +0x18
    MMUILabel * _subTitleLabel; // +0x20
    UIImageView * _productImageView; // +0x28
}
+ (CGSize)defaultSize;
- (CGSize)preferredSize;
- (BOOL)isTitleLabelSingleLine;
- (id)initWithTaskId:(id)arg1 productBubbleInfo:(id)arg2 closeAction:(id /* block */)arg3 jumpAction:(id /* block */)arg4;
- (BOOL)hasImageStyle;
- (void)applyBrandStyle;
- (void)setupContentSubviews;
- (void)applyProductGuideInfo:(id)arg1;
- (id)centeredAttributedText:(id)arg1 font:(id)arg2;
- (void)loadProductImageWithURL:(id)arg1;
- (void)onCloseTapped;
- (void)onActionTapped;
- (void)layoutSubviews;
- (id)productBubbleInfo;
- (void)setProductBubbleInfo:(id)arg1;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (id /* block */)jumpAction;
- (void)setJumpAction:(id /* block */)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)productImageView;
- (void)setProductImageView:(id)arg1;
- (void).cxx_destruct;
@end

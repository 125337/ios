@interface MMFavTextComponent : MMComponent
{
    RichTextView * m_titleLabel; // +0x10
    FavAttributeCPLabel * m_titleSearchLabel; // +0x18
    FavAttributeCPLabel * m_desLabel; // +0x20
    BOOL _usesSelectableSizeBoxStarLayout; // +0x28
    BOOL _selectableSizeBoxStarAnchorsToRightEdge; // +0x29
    UIView * _titleRowContainer; // +0x30
    double _selectableSizeBoxStarGapBefore; // +0x38
    double _selectableSizeBoxStarGapAfter; // +0x40
}
+ (double)calHeightWithComData:(id)arg1;
+ (id)getCurTitleFont:(id)arg1;
+ (id)getCurDescFont:(id)arg1;
+ (double)getCurTitleLineNum:(id)arg1;
+ (double)getCurDesLineNum:(id)arg1;
+ (long long)titleLineCountForText:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 maxLines:(long long)arg4;
- (BOOL)isEmpty;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (long long)titleLineCountForView:(id)arg1 maxWidth:(double)arg2;
- (double)titleHeightForView:(id)arg1 maxWidth:(double)arg2;
- (void)ensureTitleRowContainer;
- (id)visibleTitleViewForStarLayout;
- (double)titleLineHeightForView:(id)arg1;
- (double)starTopOffsetOnTitleRow;
- (double)firstLineTrailingXForTitleView:(id)arg1 maxWidth:(double)arg2;
- (double)titleMaxWidthWhenStarReserved:(BOOL)arg1 starSlotWidth:(double)arg2;
- (void)applyTitleMaxWidth:(double)arg1;
- (void)restoreTitleFullWidthIfNoStar;
- (BOOL)titleRowStarUsesSlotLayout:(id)arg1;
- (void)layoutTitleRowContainer;
- (void)layoutTitleRowContainerWithPendingStarSlotWidth:(double)arg1;
- (void)relayoutTitleRowContainer;
- (BOOL)layoutStarIconOnTitleRow:(id)arg1 size:(double)arg2 gapAfterTitle:(double)arg3 reserveTextWidthForStar:(BOOL)arg4;
- (BOOL)layoutStarIconOnSelectableSizeBoxTitleRow:(id)arg1 size:(double)arg2 gapBeforeStar:(double)arg3 gapAfterStar:(double)arg4 anchorTitleRowToRightEdge:(BOOL)arg5;
- (void)configLabel;
- (void)changeWidth:(double)arg1;
- (CGRect)starTitleAnchorRectInView:(id)arg1;
- (CGRect)starTitleTrailingRectInSelf;
- (id)starAnchorSourceText;
- (CGRect)firstLineTrailingRectForRichText:(id)arg1;
- (double)firstLineWidthForLabelText:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (void)configContentLayout;
- (id)titleRowContainer;
- (void)setTitleRowContainer:(id)arg1;
- (BOOL)usesSelectableSizeBoxStarLayout;
- (void)setUsesSelectableSizeBoxStarLayout:(BOOL)arg1;
- (double)selectableSizeBoxStarGapBefore;
- (void)setSelectableSizeBoxStarGapBefore:(double)arg1;
- (double)selectableSizeBoxStarGapAfter;
- (void)setSelectableSizeBoxStarGapAfter:(double)arg1;
- (BOOL)selectableSizeBoxStarAnchorsToRightEdge;
- (void)setSelectableSizeBoxStarAnchorsToRightEdge:(BOOL)arg1;
- (void).cxx_destruct;
@end

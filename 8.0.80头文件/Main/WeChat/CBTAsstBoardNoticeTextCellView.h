@interface CBTAsstBoardNoticeTextCellView : CBTAsstBoardBaseCellView
{
    UILabel * _noticeLabel; // +0x8
}
+ (id)noticeFont;
+ (double)lineHeightMultiplier;
+ (double)effectiveLineHeightForFont:(id)arg1;
+ (double)containerTopInset;
+ (double)containerBottomInset;
+ (double)containerHorizontalInset;
+ (id)paragraphStyleForFont:(id)arg1;
+ (id)attributedAttributesForFont:(id)arg1 textColor:(id)arg2;
- (BOOL)disablesLongPressMenu;
- (BOOL)needsLeftShiftForSelectMode;
- (UIEdgeInsets)mainContainerInset;
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (id)noticeViewModel;
- (void)setupUI;
- (id)attributedTextForNotice:(id)arg1;
- (void)layoutSubviews;
- (id)noticeLabel;
- (void)setNoticeLabel:(id)arg1;
- (void).cxx_destruct;
@end

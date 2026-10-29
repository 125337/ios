@interface CBTCoopNoticeTextCellView : CBTAsstBoardBaseCellView
{
    UILabel * _noticeLabel; // +0x8
}
+ (double)noticeTextFont;
+ (double)noticeTextTopPadding;
+ (double)noticeTextBottomPadding;
- (BOOL)disablesLongPressMenu;
- (void)prepareForReuse;
- (id)noticeViewModel;
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupUI;
- (void)buildNoticeTextContent;
- (id)menuAnchorView;
- (id)copyableText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshTheme;
- (id)noticeLabel;
- (void)setNoticeLabel:(id)arg1;
- (void).cxx_destruct;
@end

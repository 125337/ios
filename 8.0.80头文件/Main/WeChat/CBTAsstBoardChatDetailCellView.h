@interface CBTAsstBoardChatDetailCellView : CBTAsstBoardBaseCellView
{
    NSMutableArray * _rowViews; // +0x8
    NSArray * _usernames; // +0x10
}
- (void)prepareForReuse;
- (void)setupUI;
- (double)dynamicRowHeight;
- (void)layoutSubviews;
- (void)parseData;
- (void)buildContent;
- (void)updateFrames;
- (void)handleRowTap:(id)arg1;
- (BOOL)needsBubbleBackground;
- (BOOL)isBubbleRightAligned;
- (id)getCellReuseId;
- (CGRect)getBubbleFrame;
- (void)refreshTheme;
- (id)rowViews;
- (void)setRowViews:(id)arg1;
- (id)usernames;
- (void)setUsernames:(id)arg1;
- (void).cxx_destruct;
@end

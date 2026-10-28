@interface ReaderMessageFolderCellView : BaseMessageCellView <ReaderMessageFolderCellViewDelegate>
{
    MMUIButton * _hotSpotButton; // +0x28
    NSMutableArray * _cellViewList; // +0x30
    NSMutableArray * _expandedPositionYList; // +0x38
    NSMutableArray * _collapsedPositionYList; // +0x40
}
- (void)setViewModel:(id)arg1;
- (void)onAppear;
- (void)setupContentView;
- (void)setDelegate:(id)arg1;
- (void)layoutContentView;
- (void)modifyStatusExpanding2ExpandedAndReplaceMessageNode;
- (BOOL)canBeReused;
- (void)expandFolder;
- (void)setNoClip;
- (void)updateContentViewFrameBeforeExpand;
- (void)updateCellViewBackgroundColorBeforeExpand;
- (void)updateCellViewBackgroundColorAfterCollapse;
- (double)calcuateExpandedPositionYWithIndex:(unsigned long long)arg1;
- (double)calcuateCollapsedPositionYWithIndex:(unsigned long long)arg1;
- (void)handleExpandButtonClicked;
- (void)handleHotSpotButtonClicked;
- (BOOL)canCellShowOperationMenu;
- (void)onFolderCellView:(id)arg1 actionType:(unsigned long long)arg2 jumpType:(unsigned long long)arg3;
- (void)kvReportWithReportType:(unsigned long long)arg1;
- (void)kvReportWithReportType:(unsigned long long)arg1 jumpType:(unsigned long long)arg2;
- (BOOL)isItemInCellViewList:(id)arg1;
- (id)hotSpotButton;
- (void)setHotSpotButton:(id)arg1;
- (id)cellViewList;
- (void)setCellViewList:(id)arg1;
- (id)expandedPositionYList;
- (void)setExpandedPositionYList:(id)arg1;
- (id)collapsedPositionYList;
- (void)setCollapsedPositionYList:(id)arg1;
- (void).cxx_destruct;
@end

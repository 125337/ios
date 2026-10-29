@interface CBTCoopNoticeTextViewModel : CBTAsstBoardBaseViewModel
{
    CBTCoopNoticeTextCellView * _cellView; // +0x8
    NSString * _noticeContent; // +0x10
}
- (id)initWithNoticeContent:(id)arg1;
- (id)getCellReuseId;
- (double)cardContentWidth;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (void)onClickAction;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)noticeContent;
- (void)setNoticeContent:(id)arg1;
- (void).cxx_destruct;
@end

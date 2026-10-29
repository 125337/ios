@interface CBTCoopSubAgentInfoViewModel : CBTAsstBoardBaseViewModel
{
    CBTCoopSubAgentInfoCellView * _cellView; // +0x8
    NSString * _nickname; // +0x10
    NSString * _summary; // +0x18
    NSString * _headImageUrl; // +0x20
    NSString * _subagentId; // +0x28
}
- (id)initWithSubagentId:(id)arg1 nickname:(id)arg2 summary:(id)arg3 headImageUrl:(id)arg4;
- (id)getCellReuseId;
- (double)cardContentWidth;
- (double)cardContentHeight;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)shouldShowRemoveButton;
- (void)onClickAction;
- (void)onRemoveAction;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)subagentId;
- (void)setSubagentId:(id)arg1;
- (void).cxx_destruct;
@end

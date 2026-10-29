@interface CBTCoopJoinSubAgentViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isVerified; // +0x8
    BOOL _hasClicked; // +0x9
    unsigned int _subAgentSource; // +0xc
    CBTCoopJoinSubAgentCellView * _cellView; // +0x10
    NSString * _cardTitle; // +0x18
    NSString * _nickname; // +0x20
    NSString * _identity; // +0x28
    NSString * _summary; // +0x30
    NSString * _headImageUrl; // +0x38
    NSString * _subagentId; // +0x40
    NSString * _buttonText; // +0x48
}
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)parseXml;
- (id)getCellReuseId;
- (double)cardContentWidth;
- (double)cardContentHeight;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (void)onClickAction;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)cardTitle;
- (void)setCardTitle:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)identity;
- (void)setIdentity:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)subagentId;
- (void)setSubagentId:(id)arg1;
- (unsigned int)subAgentSource;
- (void)setSubAgentSource:(unsigned int)arg1;
- (id)buttonText;
- (void)setButtonText:(id)arg1;
- (BOOL)isVerified;
- (void)setIsVerified:(BOOL)arg1;
- (BOOL)hasClicked;
- (void)setHasClicked:(BOOL)arg1;
- (void).cxx_destruct;
@end

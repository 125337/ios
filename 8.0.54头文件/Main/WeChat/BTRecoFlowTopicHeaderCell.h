@interface BTRecoFlowTopicHeaderCell : BTRecoFlowBaseTableViewCell
{
    UIButton * _aggregationLabel; // +0x8
    MMUIButton * _xButton; // +0x10
    UIButton * _tagLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    MMWebImageView * _friend1Icon; // +0x28
    MMWebImageView * _friend2Icon; // +0x30
    NSMutableArray * _webImageViewList; // +0x38
}
- (id)aggregationLabel;
- (id)tagLabel;
- (id)subtitleLabel;
- (id)webImageViewList;
- (id)xButton;
- (void)updateWithAggregationTitle:(id)arg1 recommendTag:(id)arg2 recommendWording:(id)arg3 friendSeenHeadImgUrl:(id)arg4 iconType:(unsigned int)arg5;
- (void)onClickFeedbackBtn;
- (id)accessibilityLabel;
- (void)setAggregationLabel:(id)arg1;
- (void)setXButton:(id)arg1;
- (void)setTagLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (id)friend1Icon;
- (void)setFriend1Icon:(id)arg1;
- (id)friend2Icon;
- (void)setFriend2Icon:(id)arg1;
- (void)setWebImageViewList:(id)arg1;
- (void).cxx_destruct;
@end


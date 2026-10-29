@interface BTRecoFlowBaseTableViewCell : MMTableViewCell
{
    BOOL _shouldShowBottomSeperateLine; // +0x8
    id <BTRecoFlowBaseTableViewCellDelegate> _delegate; // +0x10
    GetRecommendFeedsResp_RecommendCardMsg * _card; // +0x18
    GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg * _msg; // +0x20
    long long _cardPos; // +0x28
    BTRecoFlowSectionData * _sectionData; // +0x30
    UIView * _highlightMaskView; // +0x38
}
+ (id)cellReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (unsigned int)itemIndex;
- (void)onAppear;
- (void)onDisappear;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)highlightMaskView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)card;
- (void)setCard:(id)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (long long)cardPos;
- (void)setCardPos:(long long)arg1;
- (BOOL)shouldShowBottomSeperateLine;
- (void)setShouldShowBottomSeperateLine:(BOOL)arg1;
- (id)sectionData;
- (void)setSectionData:(id)arg1;
- (void)setHighlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end


@interface BTReaderStyleRecommendMsgHeaderCellView : BTBaseRecommendMsgCellView
{
    UILabel * m_headerLabel; // +0x8
    MMUILabel * m_aggregationLabel; // +0x10
    MMUILabel * m_timeLabel; // +0x18
    BOOL _forceSetHighlight; // +0x20
}
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)initHeaderTitleLabel;
- (void)initAggregationLabel;
- (void)initTimeLabel;
- (BOOL)needHighlightLayer;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forceSetHighlight:(BOOL)arg1;
- (id)getAggregationLabelAccessibilityLabel;
- (BOOL)forceSetHighlight;
- (void)setForceSetHighlight:(BOOL)arg1;
- (void).cxx_destruct;
@end


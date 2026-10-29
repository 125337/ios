@interface BTRecoFlowTopicMsgCell : BTRecoFlowBaseTableViewCell
{
    BOOL _isFirstRow; // +0x8
    BOOL _isLastRow; // +0x9
    MMUILabel * _titleLabel; // +0x10
    MMWebImageView * _coverView; // +0x18
    BTRecoFlowSeparatorLineView * _topSeparatorView; // +0x20
    BTRecoFlowSeparatorLineView * _bottomSeparatorView; // +0x28
    double _bottomSeparatorLeftPadding; // +0x30
    double _bottomSeparatorRightPadding; // +0x38
}
- (id)titleLabel;
- (id)coverView;
- (id)topSeparatorView;
- (id)bottomSeparatorView;
- (id)generateSeparatorView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithItemMsg:(id)arg1 cellWidth:(double)arg2;
- (BOOL)isFirstRow;
- (void)setIsFirstRow:(BOOL)arg1;
- (BOOL)isLastRow;
- (void)setIsLastRow:(BOOL)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (void)setBottomSeparatorView:(id)arg1;
- (double)bottomSeparatorLeftPadding;
- (void)setBottomSeparatorLeftPadding:(double)arg1;
- (double)bottomSeparatorRightPadding;
- (void)setBottomSeparatorRightPadding:(double)arg1;
- (void).cxx_destruct;
@end


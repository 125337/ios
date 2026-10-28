@interface BTReaderStyleRecommendMsgShowAllCellView : BTBaseRecommendMsgCellView
{
    MMUILabel * m_titleLabel; // +0x8
    UIImageView * m_arrowView; // +0x10
}
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)initTitleLabel;
- (void)initArrowView;
- (void).cxx_destruct;
@end

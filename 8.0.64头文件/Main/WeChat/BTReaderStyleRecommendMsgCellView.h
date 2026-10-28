@interface BTReaderStyleRecommendMsgCellView : BTBaseRecommendAppMsgCellView
{
    MMWebImageView * m_coverImageView; // +0x8
    RichTextView * m_titleLabel; // +0x10
    RichTextView * m_digestLabel; // +0x18
    MMUILabel * m_recReasonLabel; // +0x20
    CAGradientLayer * m_maskLayer; // +0x28
}
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)layoutLargeCoverItem;
- (void)layoutNormalCoverItem;
- (void)initCoverView;
- (id)coverImageView;
- (void)initTitleView;
- (void)initDigestView;
- (void)initRecReasonView;
- (void)initCoverMask;
- (void)updateImage:(id)arg1 widthUrl:(id)arg2;
- (void).cxx_destruct;
@end

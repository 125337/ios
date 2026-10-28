@interface BTRecoFlowMsgCell : BTRecoFlowBaseTableViewCell
{
    MMUIButton * _xButton; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _digestLabel; // +0x18
    UIButton * _tagLabel; // +0x20
    MMUIButton * _aggregationLabel; // +0x28
    MMUILabel * _subtitleLabel; // +0x30
    UIButton * _playButton; // +0x38
    UIButton * _smallPictureButton; // +0x40
    BTRecoFlowSeparatorLineView * _bottomSeparatorView; // +0x48
    double _bottomSeparatorLeftPadding; // +0x50
    double _bottomSeparatorRightPadding; // +0x58
    NSMutableArray * _webImageViewList; // +0x60
}
- (id)webImageViewList;
- (id)tagLabel;
- (id)xButton;
- (id)titleLabel;
- (id)aggregationLabel;
- (id)subtitleLabel;
- (id)digestLabel;
- (id)bottomSeparatorView;
- (id)generateSeparatorView;
- (id)coverView;
- (CGSize)smallPictureButtonSize;
- (CGSize)playButtonSize;
- (id)smallPictureButton;
- (id)playButton;
- (void)layoutSubviews;
- (void)updateWithItemMsg:(id)arg1 cellWidth:(double)arg2;
- (void)updateWithTitle:(id)arg1 recommendTag:(id)arg2 aggregationTitle:(id)arg3 iconType:(unsigned int)arg4 recommendWording:(id)arg5;
- (void *)buildSubtitleHorizontalStack:(void *)arg1;
- (void *)buildBottomSeparatorView:(void *)arg1;
- (id)webImageViewAtIndex:(long long)arg1;
- (void)onClickFeedbackBtn;
- (void)onClickAggregationLabel;
- (id)accessibilityLabel;
- (void)setXButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDigestLabel:(id)arg1;
- (void)setTagLabel:(id)arg1;
- (void)setAggregationLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setSmallPictureButton:(id)arg1;
- (void)setBottomSeparatorView:(id)arg1;
- (double)bottomSeparatorLeftPadding;
- (void)setBottomSeparatorLeftPadding:(double)arg1;
- (double)bottomSeparatorRightPadding;
- (void)setBottomSeparatorRightPadding:(double)arg1;
- (void)setWebImageViewList:(id)arg1;
- (void).cxx_destruct;
@end

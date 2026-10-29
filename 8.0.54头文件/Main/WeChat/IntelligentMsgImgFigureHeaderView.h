@interface IntelligentMsgImgFigureHeaderView : MMUIView
{
    MMUILabel * m_titleLabel; // +0x8
    MMUIImageView * m_figureImageView; // +0x10
    MMUILabel * m_figureCountLabel; // +0x18
}
- (id)init;
- (void)layoutView;
- (void)layoutTitleLabel;
- (void)layoutFigureImageView;
- (void)layoutFigureCountLabel;
- (void)layoutSubviews;
- (void)updateFigureImageView:(id)arg1 figureCount:(unsigned int)arg2;
- (double)calculationHeight;
- (void).cxx_destruct;
@end


@interface IntelligentMsgImgFigurePageHeaderView : MMUIView <IntelligentMsgImgFigurePageViewDelegate>
{
    MMUILabel * m_titleLabel; // +0x8
    IntelligentMsgImgFigurePageView * m_figurePageView; // +0x10
    NSArray * m_arrFaceClusterMessageItem; // +0x18
    id <IntelligentMsgImgFigurePageHeaderViewDelegate> _delegate; // +0x20
}
- (id)init;
- (void)layoutView;
- (void)layoutTitleLabel;
- (void)layoutFigurePageView;
- (void)initFigurePageView;
- (void)layoutSubviews;
- (double)calculationHeight;
- (void)updateMsgImgFigurePageHeaderView:(id)arg1;
- (void)onTransitionToNewSize;
- (void)onMsgFigureImgClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

@interface FavTagTableView : MMUIView
{
    NSMutableArray * m_arrTagListView; // +0x8
    NSMutableArray * m_arrHeaders; // +0x10
    id <FavTagEditViewDelegate> m_delegate; // +0x18
    BOOL _embeddedInScrollView; // +0x20
    double _contentHeight; // +0x28
    UIScrollView * _scrollView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)layoutSubviews;
- (void)addTags:(id)arg1 titled:(id)arg2;
- (void)setButtonHighLight:(BOOL)arg1 named:(id)arg2;
- (void)highLightButtons:(id)arg1;
- (void)unHighLightAllButtons;
- (BOOL)canBecomeFirstResponder;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)embeddedInScrollView;
- (void)setEmbeddedInScrollView:(BOOL)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end

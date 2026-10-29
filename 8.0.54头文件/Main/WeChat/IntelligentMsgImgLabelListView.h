@interface IntelligentMsgImgLabelListView : MMUIView
{
    MMUIScrollView * m_scrollView; // +0x8
    OrderedDictionary * m_dicLabelButtonInfo; // +0x10
    NSArray * m_LabelList; // +0x18
    id <IntelligentMsgImgLabelListViewDelegate> _delegate; // +0x20
}
- (id)init;
- (void)initData;
- (void)initView;
- (void)reloadButtonCacheWithLabels:(id)arg1;
- (id)addButton:(id)arg1;
- (id)createButton:(id)arg1;
- (CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)setButtonBackground:(id)arg1;
- (id)genImageWithisHighLight:(BOOL)arg1 buttonSize:(CGSize)arg2;
- (void)updateMsgImgLabelButtonWithLabelName:(id)arg1;
- (void)onClickMsgImgLabelButton:(id)arg1;
- (id)m_LabelList;
- (void)setM_LabelList:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


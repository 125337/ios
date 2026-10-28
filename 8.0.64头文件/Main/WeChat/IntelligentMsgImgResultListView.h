@interface IntelligentMsgImgResultListView : MMUIView
{
    OrderedDictionary * m_dicLabelButtonInfo; // +0x8
    unsigned int _m_style; // +0x10
    NSArray * m_LabelList; // +0x18
    id <IntelligentMsgImgResultListViewDelegate> _delegate; // +0x20
}
- (id)init;
- (void)initData;
- (void)initView;
- (void)reloadButtonCacheWithResults:(id)arg1 selectedResultType:(unsigned int)arg2;
- (id)addButton:(id)arg1;
- (id)createButton:(id)arg1;
- (CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)setButtonBackground:(id)arg1;
- (id)genImageWithButtonSize:(CGSize)arg1;
- (void)updateMsgImgLabelButtonWithSearchType:(unsigned int)arg1;
- (void)onClickMsgImgLabelButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)m_LabelList;
- (void)setM_LabelList:(id)arg1;
- (unsigned int)m_style;
- (void)setM_style:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

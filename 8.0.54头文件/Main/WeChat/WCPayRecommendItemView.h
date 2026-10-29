@interface WCPayRecommendItemView : UIView
{
    id <WCPayRecommendItemViewDelegate> _m_delegate; // +0x8
    NSArray * _numbers; // +0x10
    NSMutableArray * _itemViews; // +0x18
    NSMutableArray * _seperatorViews; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateNumbers:(id)arg1;
- (void)updateButtons;
- (void)addButton:(id)arg1;
- (void)addLine;
- (void)onClickButton:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)numbers;
- (void)setNumbers:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)seperatorViews;
- (void)setSeperatorViews:(id)arg1;
- (void).cxx_destruct;
@end


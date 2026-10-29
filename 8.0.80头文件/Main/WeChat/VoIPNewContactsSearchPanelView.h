@interface VoIPNewContactsSearchPanelView : NewContactsSearchPanelView
{
    UIView * _scrollViewContainer; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 andContentView:(id)arg2 atContentViewYPos:(double)arg3 andCellSize:(double)arg4 andMaxShowCount:(long long)arg5 colorProxy:(id)arg6 centerAlignment:(BOOL)arg7;
- (void)layoutSubviews;
- (id)genScrollViewContainerMaskLayer;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)scrollViewContainer;
- (void)setScrollViewContainer:(id)arg1;
- (void).cxx_destruct;
@end

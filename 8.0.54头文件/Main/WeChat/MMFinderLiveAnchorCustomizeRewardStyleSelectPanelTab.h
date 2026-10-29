@interface MMFinderLiveAnchorCustomizeRewardStyleSelectPanelTab : UIScrollView
{
    id /* block */ _onLabelClickedAtIndex; // +0x8
    NSArray * _labelArray; // +0x10
    MMUILabel * _selectedTabLabel; // +0x18
}
- (id)initWithTabLabelTextArray:(id)arg1;
- (void)initLabelArrayWithLabelTextArray:(id)arg1;
- (id)createLabelWithText:(id)arg1;
- (void)layoutSubviews;
- (void)setSelectedTabWithLabelText:(id)arg1;
- (void)updateLabel:(id)arg1 withSelected:(BOOL)arg2;
- (void)updateLabelOrigin:(id)arg1;
- (void)configLabelSize:(id)arg1;
- (double)tabContainerHeight;
- (double)tabHeightInterval;
- (double)tabWidthInterval;
- (double)firstTabLeftInterval;
- (void)onTapStyleTabLabel:(id)arg1;
- (void)onSelectTab:(id)arg1;
- (id /* block */)onLabelClickedAtIndex;
- (void)setOnLabelClickedAtIndex:(id /* block */)arg1;
- (id)labelArray;
- (void)setLabelArray:(id)arg1;
- (id)selectedTabLabel;
- (void)setSelectedTabLabel:(id)arg1;
- (void).cxx_destruct;
@end


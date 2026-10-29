@interface MMLiveMoreLivesIndicatorBar : MMLiveBaseComponentView
{
    id /* block */ _moreLiveClickedCallBlock; // +0x8
    MMUILabel * _moreLiveLabel; // +0x10
    UIImageView * _arrowIconView; // +0x18
    MMWebImageView * _moreLiveIconView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateMoreLiveBarTitle:(id)arg1 iconUrl:(id)arg2;
- (void)sizeToFits;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onMoreLiveClicked:(id)arg1;
- (id /* block */)moreLiveClickedCallBlock;
- (void)setMoreLiveClickedCallBlock:(id /* block */)arg1;
- (id)moreLiveLabel;
- (void)setMoreLiveLabel:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)moreLiveIconView;
- (void)setMoreLiveIconView:(id)arg1;
- (void).cxx_destruct;
@end

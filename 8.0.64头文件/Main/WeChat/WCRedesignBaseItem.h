@interface WCRedesignBaseItem : WCBaseInfoItem
{
    unsigned int _separators; // +0x40
    WCRedesignBaseItemView * _itemView; // +0x48
    double _horizonPadding; // +0x50
    double _maxTitleWidth; // +0x58
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)setM_title:(id)arg1;
- (void)setHorizonPadding:(double)arg1;
- (void)setSeparators:(unsigned int)arg1;
- (void)setMaxTitleWidth:(double)arg1;
- (double)currentTitleWidth;
- (id)titleView;
- (id)contentView;
- (id)backgroundButton;
- (void)onTapBackground;
- (void)onLayoutContentViewSubviews;
- (BOOL)shouldBreakLineForMaxContentWidth:(double)arg1 itemWidth:(double)arg2;
- (BOOL)isBreakLine;
- (id)itemView;
- (void)setItemView:(id)arg1;
- (unsigned int)separators;
- (double)horizonPadding;
- (double)maxTitleWidth;
- (void).cxx_destruct;
@end

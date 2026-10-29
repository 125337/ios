@interface MMFinderLiveLandscapeBarrageParamCardItemView : UIView
{
    id /* block */ _onBarrageParamCardSelect; // +0x8
    MMUILabel * _titleLabel; // +0x10
    NSMutableArray * _paramCardBtnList; // +0x18
}
+ (double)staticWidth;
+ (double)staticHeight;
- (id)initWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)createTitleLabel:(id)arg1;
- (void)layoutUI;
- (void)addParamCard:(id)arg1;
- (id)paramCardBtnList;
- (void)onParamCardBtnClicked:(id)arg1;
- (id /* block */)onBarrageParamCardSelect;
- (void)setOnBarrageParamCardSelect:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void)setParamCardBtnList:(id)arg1;
- (void).cxx_destruct;
@end

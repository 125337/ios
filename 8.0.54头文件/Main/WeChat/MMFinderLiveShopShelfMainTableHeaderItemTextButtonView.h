@interface MMFinderLiveShopShelfMainTableHeaderItemTextButtonView : MMFinderLiveShopShelfMainTableHeaderItemView
{
    id /* block */ _onButtonClicked; // +0x8
    UIButton * _button; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)doOnButtonClick;
- (id /* block */)onButtonClicked;
- (void)setOnButtonClicked:(id /* block */)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end


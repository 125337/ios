@interface MMFinderLiveShopShelfMainTableHeaderItemTextButtonView : MMFinderLiveShopShelfMainTableHeaderItemView
{
    id /* block */ _onButtonClicked; // +0x8
    UIButton * _button; // +0x10
    EcsRichTextLabel * _richTextLabel; // +0x18
    UILabel * _rightLabel; // +0x20
    long long _buttonType; // +0x28
    UITapGestureRecognizer * _arrowTapGesture; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configWithTitle:(id)arg1 richLabel:(id)arg2 buttonType:(long long)arg3 wording:(id)arg4;
- (void)layoutSubviews;
- (double)contentHeight;
- (void)doOnButtonClick;
- (id /* block */)onButtonClicked;
- (void)setOnButtonClicked:(id /* block */)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)richTextLabel;
- (void)setRichTextLabel:(id)arg1;
- (id)rightLabel;
- (void)setRightLabel:(id)arg1;
- (long long)buttonType;
- (void)setButtonType:(long long)arg1;
- (id)arrowTapGesture;
- (void)setArrowTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

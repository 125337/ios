@interface MMFinderLiveBoxPageSheetView : MMPageSheetBaseView
{
    UIView * _contentView; // +0x8
    WCLiveBlurButton * _closeButton; // +0x10
    UIButton * _button; // +0x18
    UILabel * _title; // +0x20
    UILabel * _detail; // +0x28
    double _titleCenter; // +0x30
    double _detailTop; // +0x38
    double _buttonTop; // +0x40
    double _contentHeight; // +0x48
    id /* block */ _callback; // +0x50
    id /* block */ _didDismiss; // +0x58
}
- (id)initWithTitleCenter:(double)arg1 detailTop:(double)arg2 buttonTop:(double)arg3 contentHeight:(double)arg4;
- (void)setupPageSheetConfig;
- (void)initSubView;
- (void)onCloseButtonClicked;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)onButtonClicked;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (double)titleCenter;
- (void)setTitleCenter:(double)arg1;
- (double)detailTop;
- (void)setDetailTop:(double)arg1;
- (double)buttonTop;
- (void)setButtonTop:(double)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id /* block */)didDismiss;
- (void)setDidDismiss:(id /* block */)arg1;
- (void).cxx_destruct;
@end

@interface ContactTagSearchBottomBar : WCBottomBar
{
    MMUIButton * _multiSelectButton; // +0x8
    MMUIButton * _cancelMultiSelectButton; // +0x10
    MMUIButton * _doneButton; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (id)multiSelectButton;
- (void)setMultiSelectButton:(id)arg1;
- (id)cancelMultiSelectButton;
- (void)setCancelMultiSelectButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end


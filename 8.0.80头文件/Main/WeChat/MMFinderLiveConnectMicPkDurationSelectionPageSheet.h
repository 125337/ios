@interface MMFinderLiveConnectMicPkDurationSelectionPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMCommonPickerDelegate>
{
    id <MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate> _delegate; // +0x8
    NSArray * _options; // +0x10
    MMFinderLiveBattleDurationItem * _selectedOption; // +0x18
    UIView * _separatorBar; // +0x20
    MMCommonPickerView * _picker; // +0x28
}
- (id)initWithDurationOptions:(id)arg1 selectedOption:(id)arg2;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)initializeComponents;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)selectedOption;
- (void)setSelectedOption:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (id)picker;
- (void)setPicker:(id)arg1;
- (void).cxx_destruct;
@end

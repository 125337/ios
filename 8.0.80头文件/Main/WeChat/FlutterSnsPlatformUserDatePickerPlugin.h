@interface FlutterSnsPlatformUserDatePickerPlugin : NSObject <MMCommonActionSheetPickerDelegate, MMFlutterPlugin, PlatformUserDatePickerApi>
{
    NSArray * _yearsData; // +0x8
    NSArray * _monthsDatas; // +0x10
    MMCommonActionSheetPicker * _yearMonthPickerView; // +0x18
    FlutterEngine * _engine; // +0x20
    id /* block */ _completion; // +0x28
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)choosePickerDateDateInfo:(id)arg1 year:(long long)arg2 month:(long long)arg3 completion:(id /* block */)arg4;
- (void)commonPickerDismissed:(id)arg1;
- (void)commonPickerCancel:(id)arg1;
- (void)commonPickerConfirm:(id)arg1;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)updateYearMonthPicker:(id)arg1 month:(id)arg2;
- (id)yearsData;
- (void)setYearsData:(id)arg1;
- (id)monthsDatas;
- (void)setMonthsDatas:(id)arg1;
- (id)yearMonthPickerView;
- (void)setYearMonthPickerView:(id)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

@interface MMActionSheetDatePicker : MMUIView
{
    id <MMActionSheetDatePickerDelegate> _delegate; // +0x8
    UIView<MMActionSheetCustomPickerPotocol> * _customDatePickerView; // +0x10
    unsigned long long _datePickerViewType; // +0x18
    long long _datePickerMode; // +0x20
    NSString * _title; // +0x28
    NSDate * _minimumDate; // +0x30
    NSDate * _maximumDate; // +0x38
    UIView * _transparentView; // +0x40
    NSDate * _selectedDate; // +0x48
    NSString * _comfirmText; // +0x50
    NSString * _cancelText; // +0x58
    UIView * _contentView; // +0x60
    UIView * _titleView; // +0x68
    UIView * _datePicker; // +0x70
    UIView * _pickerToolBar; // +0x78
    UIBarButtonItem * _doneBarButtonItem; // +0x80
    UIBarButtonItem * _titleBarButtonItem; // +0x88
    UIBarButtonItem * _cancelBarButtonItem; // +0x90
}
- (id)init;
- (void)showInView:(id)arg1;
- (void)dismissActionSheetDatePicker;
- (void)dismiss;
- (BOOL)accessibilityPerformEscape;
- (void)onCancel;
- (void)onConfirm;
- (void)eventForDatePicker:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)transparentView;
- (id)contentView;
- (id)datePicker;
- (id)pickerToolBar;
- (id)titleView;
- (id)cancelBarButtonItem;
- (id)doneBarButtonItem;
- (id)titleBarButtonItem;
- (id)selectedDate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)customDatePickerView;
- (void)setCustomDatePickerView:(id)arg1;
- (unsigned long long)datePickerViewType;
- (void)setDatePickerViewType:(unsigned long long)arg1;
- (long long)datePickerMode;
- (void)setDatePickerMode:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)minimumDate;
- (void)setMinimumDate:(id)arg1;
- (id)maximumDate;
- (void)setMaximumDate:(id)arg1;
- (void)setTransparentView:(id)arg1;
- (void)setSelectedDate:(id)arg1;
- (id)comfirmText;
- (void)setComfirmText:(id)arg1;
- (id)cancelText;
- (void)setCancelText:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setPickerToolBar:(id)arg1;
- (void)setDoneBarButtonItem:(id)arg1;
- (void)setTitleBarButtonItem:(id)arg1;
- (void)setCancelBarButtonItem:(id)arg1;
- (void).cxx_destruct;
@end


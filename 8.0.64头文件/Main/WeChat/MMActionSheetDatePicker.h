@interface MMActionSheetDatePicker : MMUIView <MMScheduleDatePickerViewDelegate>
{
    BOOL _needSelectDefaultButton; // +0x8
    id <MMActionSheetDatePickerDelegate> _delegate; // +0x10
    UIView<MMActionSheetCustomPickerPotocol> * _customDatePickerView; // +0x18
    unsigned long long _datePickerViewType; // +0x20
    long long _datePickerMode; // +0x28
    NSString * _title; // +0x30
    NSDate * _minimumDate; // +0x38
    NSDate * _maximumDate; // +0x40
    UIView * _transparentView; // +0x48
    NSDate * _selectedDate; // +0x50
    NSString * _comfirmText; // +0x58
    NSString * _cancelText; // +0x60
    long long _selectedRecommendInterval; // +0x68
    UIView * _contentView; // +0x70
    UIView * _titleView; // +0x78
    UIView * _datePicker; // +0x80
    UIView * _pickerToolBar; // +0x88
    UIView * _quickTimeButtonsView; // +0x90
    UIButton * _datePreviewButton; // +0x98
    NSMutableArray * _quickTimeButtons; // +0xa0
    UIBarButtonItem * _doneBarButtonItem; // +0xa8
    UIBarButtonItem * _titleBarButtonItem; // +0xb0
    UIBarButtonItem * _cancelBarButtonItem; // +0xb8
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
- (void)layoutContentView;
- (id)datePreviewButton;
- (id)datePicker;
- (id)pickerToolBar;
- (id)titleView;
- (id)cancelBarButtonItem;
- (id)doneBarButtonItem;
- (id)titleBarButtonItem;
- (id)selectedDate;
- (id)quickTimeButtonsView;
- (void)buttonTapped:(id)arg1;
- (void)cancelButtonSelected;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)onDatePreviewButtonTapped;
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
- (BOOL)needSelectDefaultButton;
- (void)setNeedSelectDefaultButton:(BOOL)arg1;
- (long long)selectedRecommendInterval;
- (void)setSelectedRecommendInterval:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setPickerToolBar:(id)arg1;
- (void)setQuickTimeButtonsView:(id)arg1;
- (void)setDatePreviewButton:(id)arg1;
- (id)quickTimeButtons;
- (void)setQuickTimeButtons:(id)arg1;
- (void)setDoneBarButtonItem:(id)arg1;
- (void)setTitleBarButtonItem:(id)arg1;
- (void)setCancelBarButtonItem:(id)arg1;
- (void).cxx_destruct;
@end

@interface BraceletWorkoutCreateSheetView : MMPageSheetBaseView <UITextFieldDelegate>
{
    BOOL _forUpdate; // +0x8
    int _selectedUnit; // +0xc
    int _reminderTime; // +0x10
    id /* block */ _onTargetAdded; // +0x18
    id <MMPageSheetProvider> _returnPageAfterTargetAdded; // +0x20
    NSString * _reportSessionId; // +0x28
    WeRunTarget * _originTarget; // +0x30
    UIView * _containerView; // +0x38
    UIScrollView * _scrollView; // +0x40
    UIView * _formContentView; // +0x48
    UIView * _infoSectionView; // +0x50
    UIView * _targetNameRow; // +0x58
    UITextField * _targetNameInput; // +0x60
    UIView * _targetAmountRow; // +0x68
    UITextField * _targetAmountInput; // +0x70
    UIButton * _targetUnitButton; // +0x78
    UIView * _infoSeparator; // +0x80
    UILabel * _updateTipsLabel; // +0x88
    NSArray * _unitOptions; // +0x90
    UIView * _remindSectionView; // +0x98
    UIView * _reminderRow; // +0xa0
    UISwitch * _reminderSwitch; // +0xa8
    UIView * _reminderTimeRow; // +0xb0
    UILabel * _reminderTimeValueLabel; // +0xb8
    UIView * _reminderTimeSeparator; // +0xc0
    UIButton * _doneBtn; // +0xc8
    double _keyboardHeight; // +0xd0
}
- (id)initWithTargetForUpdate:(id)arg1;
- (id)init;
- (void)initConfig;
- (void)initView;
- (id)makeInputRowWithTitle:(id)arg1 placeholder:(id)arg2 initialText:(id)arg3 width:(double)arg4;
- (id)makeAmountInputRowWithWidth:(double)arg1;
- (id)makeValueRowWithTitle:(id)arg1 valueText:(id)arg2 width:(double)arg3 onClick:(SEL)arg4;
- (id)makeSwitchRowWithTitle:(id)arg1 width:(double)arg2;
- (id)p_unitForTargetValueUnit:(unsigned int)arg1;
- (id)reminderTimeDisplay;
- (void)refreshReminderTimeVisible;
- (void)refreshDoneButtonEnable;
- (void)onCancelClick;
- (void)onDoneClick;
- (void)onInputChanged:(id)arg1;
- (void)p_trimInputFieldIfNeeded:(id)arg1;
- (id)p_textByLimitingComposedLength:(id)arg1;
- (unsigned long long)p_composedLengthOfText:(id)arg1;
- (BOOL)p_isValidTargetAmountInput:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onUnitButtonClick;
- (void)onReminderTimeRowClick;
- (void)onReminderSwitchChanged:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)reportWorkoutTargetClkAction:(unsigned long long)arg1;
- (void)pageSheetDidAppear;
- (id /* block */)onTargetAdded;
- (void)setOnTargetAdded:(id /* block */)arg1;
- (id)returnPageAfterTargetAdded;
- (void)setReturnPageAfterTargetAdded:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)originTarget;
- (void)setOriginTarget:(id)arg1;
- (BOOL)forUpdate;
- (void)setForUpdate:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)formContentView;
- (void)setFormContentView:(id)arg1;
- (id)infoSectionView;
- (void)setInfoSectionView:(id)arg1;
- (id)targetNameRow;
- (void)setTargetNameRow:(id)arg1;
- (id)targetNameInput;
- (void)setTargetNameInput:(id)arg1;
- (id)targetAmountRow;
- (void)setTargetAmountRow:(id)arg1;
- (id)targetAmountInput;
- (void)setTargetAmountInput:(id)arg1;
- (id)targetUnitButton;
- (void)setTargetUnitButton:(id)arg1;
- (id)infoSeparator;
- (void)setInfoSeparator:(id)arg1;
- (id)updateTipsLabel;
- (void)setUpdateTipsLabel:(id)arg1;
- (int)selectedUnit;
- (void)setSelectedUnit:(int)arg1;
- (id)unitOptions;
- (void)setUnitOptions:(id)arg1;
- (id)remindSectionView;
- (void)setRemindSectionView:(id)arg1;
- (id)reminderRow;
- (void)setReminderRow:(id)arg1;
- (id)reminderSwitch;
- (void)setReminderSwitch:(id)arg1;
- (id)reminderTimeRow;
- (void)setReminderTimeRow:(id)arg1;
- (id)reminderTimeValueLabel;
- (void)setReminderTimeValueLabel:(id)arg1;
- (id)reminderTimeSeparator;
- (void)setReminderTimeSeparator:(id)arg1;
- (int)reminderTime;
- (void)setReminderTime:(int)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end

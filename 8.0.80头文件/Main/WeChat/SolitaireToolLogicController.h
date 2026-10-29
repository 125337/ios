@interface SolitaireToolLogicController : NSObject <MMPickLocationViewControllerDelegate, MMActionSheetDatePickerDelegate, SolitaireGetPhoneNumberSheetDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    id <SolitaireToolLogicControllerDelegate> _delegate; // +0x8
    MMPickLocationViewController * _locationViewController; // +0x10
    MMActionSheetDatePicker * _datePicker; // +0x18
    WCAccountBindPhoneControlLogic * _bindPhoneLogic; // +0x20
}
- (void)jumpToLocationView;
- (void)showDatePicker;
- (void)showGetPhoneNumberSheet;
- (void)cancelBindPhone;
- (id)onGetRightBarButton;
- (void)onFinishSelectedLocation;
- (void)onCancelSeletctedLocation;
- (void)datePickerConfirm:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)getPhoneNumberDidCancel;
- (void)getPhoneNumberDidComfirm:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)locationViewController;
- (void)setLocationViewController:(id)arg1;
- (id)datePicker;
- (void)setDatePicker:(id)arg1;
- (id)bindPhoneLogic;
- (void)setBindPhoneLogic:(id)arg1;
- (void).cxx_destruct;
@end

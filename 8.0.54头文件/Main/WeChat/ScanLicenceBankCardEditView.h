@interface ScanLicenceBankCardEditView : UIView <UITextFieldDelegate>
{
    NSMutableArray * _arrTextField; // +0x8
    UITextField * bankSequenceField; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 andCodeNum:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)getFullBankNumStr;
- (void).cxx_destruct;
@end


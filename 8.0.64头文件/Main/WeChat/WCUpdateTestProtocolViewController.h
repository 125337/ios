@interface WCUpdateTestProtocolViewController : MMUIViewController <UITextViewDelegate>
{
    UITextView * _interpretTextView; // +0x70
    UIButton * _convertButton; // +0x78
    UIButton * _resetButton; // +0x80
}
+ (id)getMethodListOriginString:(id)arg1;
+ (id)getMethodListString:(id)arg1;
+ (id)findProtocol:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupBaseView;
- (void)convertCrashReport;
- (void)resetInterpreter;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)interpretTextView;
- (void)setInterpretTextView:(id)arg1;
- (id)convertButton;
- (void)setConvertButton:(id)arg1;
- (id)resetButton;
- (void)setResetButton:(id)arg1;
- (void).cxx_destruct;
@end

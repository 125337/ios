@interface WAJSEventHandler_editTextWithPopForm : WAJSEventHandler_BaseEvent
{
    WCUIAlertView * _editTextView; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onEditTextViewCancelled;
- (void)onEditTextViewConfirmed;
- (id)editTextView;
- (void)setEditTextView:(id)arg1;
- (void).cxx_destruct;
@end


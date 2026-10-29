@interface WCUIKitInputControllerProxy : NSObject <InputControllerDelegate>
{
    id <IWCUIKitInputControllerDelegate> _delegate; // +0x8
}
+ (long long)getInputControlerModeWith:(unsigned long long)arg1;
- (id)getInputControllerWithDelegate:(id)arg1;
- (id)getGrowTextView;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillShow;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (double)getVisibleHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


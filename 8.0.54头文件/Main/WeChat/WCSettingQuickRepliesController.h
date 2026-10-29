@interface WCSettingQuickRepliesController : WCWatchSettingCommonViewController <WCActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate, WCActionSheetDelegate, UIGestureRecognizerDelegate>
{
    MMTableView * _mainTableView; // +0x68
    MMUILabel * _footerLabel; // +0x70
    UIView * _replyAddedView; // +0x78
    UITextField * _textField; // +0x80
    CGRect _keyboardRect; // +0x88
    BOOL _edited; // +0xa8
    UITapGestureRecognizer * _hideKeyboardGesture; // +0xb0
    NSArray * _defaultQuickReplies; // +0xb8
    NSIndexPath * _selectedIndexPath; // +0xc0
    float _lastContenOffsetY; // +0xc8
    BOOL _editing; // +0xcc
    NSMutableArray * _quickReplies; // +0xd0
    UIEdgeInsets _contentInsetWhenKeyBoardHide; // +0xd8
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)hideKeyboardAction:(id)arg1;
- (void)editingBeginAction:(id)arg1;
- (void)editingFinishedAction:(id)arg1;
- (void)resetQuickRepliesAction:(id)arg1;
- (void)addQuickReplyAction:(id)arg1;
- (void)updateQuickReplies:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)setNavItemWithTitle:(id)arg1 action:(SEL)arg2;
- (void)initUI;
- (void)setDefaultReply;
- (void)updateFooterLabel;
- (void)updateTextField;
- (void)saveQuickRepliesInFileAndTransferToWatch;
- (id)quickReplies;
- (void)setQuickReplies:(id)arg1;
- (UIEdgeInsets)contentInsetWhenKeyBoardHide;
- (void)setContentInsetWhenKeyBoardHide:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end


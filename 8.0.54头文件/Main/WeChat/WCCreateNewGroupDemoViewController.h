@interface WCCreateNewGroupDemoViewController : MMUIViewController <MMTableViewInfoDelegate, UITextFieldDelegate>
{
    BOOL bWaitParentViewControllerDismissWhenDone; // +0x68
    BOOL _bIsTagNameOverLimit; // +0x69
    BOOL _bIsShowWarningText; // +0x6a
    id <WCCreateNewGroupDemoViewControllerDelegate> _delegate; // +0x70
    NSString * _existTagName; // +0x78
    NSString * _tagSvrName; // +0x80
    MMTableViewInfo * _tableViewInfo; // +0x88
    UITextField * _tagNameEditTextField; // +0x90
    MMUILabel * _warningTextLabel; // +0x98
    NSString * _tagNamePlaceHolder; // +0xa0
    NSString * _hintText; // +0xa8
}
- (id)initWithPlaceHolder:(id)arg1 hintText:(id)arg2 withDelegate:(id)arg3;
- (void)viewDidLoad;
- (void)setWaitParentViewControllerDismissWhenDone:(BOOL)arg1;
- (void)dismissViewController;
- (void)onReturn;
- (void)onDone;
- (void)initTableViewInfoData;
- (void)makeTopicEditView;
- (void)makeEditCell:(id)arg1 CellInfo:(id)arg2;
- (void)showWarningText:(id)arg1;
- (void)hideWarningText;
- (void)makeWarningTextCell:(id)arg1 CellInfo:(id)arg2;
- (BOOL)isChangeTagName;
- (void)setSaveButtonEnable:(BOOL)arg1;
- (void)checkSaveAlert;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTagNameChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)existTagName;
- (void)setExistTagName:(id)arg1;
- (id)tagSvrName;
- (void)setTagSvrName:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)tagNameEditTextField;
- (void)setTagNameEditTextField:(id)arg1;
- (BOOL)bIsTagNameOverLimit;
- (void)setBIsTagNameOverLimit:(BOOL)arg1;
- (BOOL)bIsShowWarningText;
- (void)setBIsShowWarningText:(BOOL)arg1;
- (id)warningTextLabel;
- (void)setWarningTextLabel:(id)arg1;
- (id)tagNamePlaceHolder;
- (void)setTagNamePlaceHolder:(id)arg1;
- (id)hintText;
- (void)setHintText:(id)arg1;
- (void).cxx_destruct;
@end


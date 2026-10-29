@interface ContactTagNameEditViewController : MMUIViewController <MMTableViewInfoDelegate, UITextFieldDelegate>
{
    BOOL _bIsTagNameOverLimit; // +0x70
    BOOL _bIsShowWarningText; // +0x71
    BOOL _bIsFavTag; // +0x72
    unsigned int _tagLengthLimit; // +0x74
    id <ContactTagNameEditViewControllerDelegate> _delegate; // +0x78
    NSString * _existTagName; // +0x80
    NSString * _tagSvrName; // +0x88
    MMTableViewInfo * _tableViewInfo; // +0x90
    UITextField * _tagNameEditTextField; // +0x98
    NSArray * _existFavTags; // +0xa0
    MMUILabel * _warningTextLabel; // +0xa8
}
- (id)initViewControllerWithCurrentTagName:(id)arg1 withTagSvrName:(id)arg2 withDelegate:(id)arg3;
- (id)initViewControllerWithCurrentTagName:(id)arg1 withExistTags:(id)arg2 withDelegate:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidBePresented:(BOOL)arg1;
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
- (void)onContactsTagSaveComfirm;
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
- (unsigned int)tagLengthLimit;
- (void)setTagLengthLimit:(unsigned int)arg1;
- (id)existFavTags;
- (void)setExistFavTags:(id)arg1;
- (BOOL)bIsShowWarningText;
- (void)setBIsShowWarningText:(BOOL)arg1;
- (id)warningTextLabel;
- (void)setWarningTextLabel:(id)arg1;
- (BOOL)bIsFavTag;
- (void)setBIsFavTag:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface ContactTagCreateTagHalfScreenViewController : MMUIHalfScreenViewController <UITextFieldDelegate, IContactLabelMgrExt>
{
    UIButton * m_modifyAliasButton; // +0x70
    MMUIView * m_contentView; // +0x78
    MMUILabel * m_titleView; // +0x80
    MMUIView * m_inputTextFieldBackground; // +0x88
    MMUITextField * m_inputTextField; // +0x90
    MMUILabel * m_warningView; // +0x98
    unsigned int m_curEventID; // +0xa0
    double m_fKeyboardHeight; // +0xa8
    BOOL _isInPageSheetMode; // +0xb0
    MMUIButton * _closeButton; // +0xb8
    NSString * _createDefaultTagName; // +0xc0
    NSString * _oldTagName; // +0xc8
    NSString * _targetTagName; // +0xd0
    MMPageSheetAdapter * _pageSheetAdapter; // +0xd8
    id <ContactTagCreateTagHalfScreenViewControllerDelegate> _m_delegate; // +0xe0
}
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewYInPageSheetMode;
- (double)getContentViewWidth;
- (double)getVisibleHeight;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)initData;
- (long long)halfViewControllerHeight;
- (void)initNotificationObservers;
- (id)closeButton;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutInputTextView;
- (void)layoutWarningView;
- (void)layoutModifyAliasButton;
- (void)ShowWarningText:(id)arg1;
- (void)HideWarningText;
- (void)DismissTagViewcontrollerAnimated;
- (void)OnSettingAccountModifyAlias;
- (void)onClickClose:(id)arg1;
- (void)hideKeyboard;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldTextDidChange:(id)arg1;
- (void)saveEditTag;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)updateContactLabelName:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)navigationBarBackgroundColor;
- (void)setCloseButton:(id)arg1;
- (id)createDefaultTagName;
- (void)setCreateDefaultTagName:(id)arg1;
- (id)oldTagName;
- (void)setOldTagName:(id)arg1;
- (id)targetTagName;
- (void)setTargetTagName:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

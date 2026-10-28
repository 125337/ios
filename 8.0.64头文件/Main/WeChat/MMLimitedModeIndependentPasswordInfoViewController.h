@interface MMLimitedModeIndependentPasswordInfoViewController : MMUIViewController <MMTableViewInfoDelegate, UITextViewDelegate, UITextFieldDelegate, MMLimitedModeSetPasswordLogicDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    UITextView * m_tfInputName; // +0x78
    UITextView * m_tfInputIdCard; // +0x80
    FixTitleColorButton * m_acceptBtn; // +0x88
    double m_fKeyboardHeight; // +0x90
    MMUILabel * m_inputNameTitleLabel; // +0x98
    MMUILabel * m_inputIdCardTitleLabel; // +0xa0
    UITableViewCell * m_inputNameCell; // +0xa8
    UITableViewCell * m_inputIdCardCell; // +0xb0
    WCTableViewNormalCellManager * m_inputNameCellInfo; // +0xb8
    WCTableViewNormalCellManager * m_inputIdCardCellInfo; // +0xc0
    MMLimitedModeSetPasswordLogic * m_setPasswordLogic; // +0xc8
    BOOL m_isShowErrorTip; // +0xd0
    unsigned int _m_setLimitedModePwdType; // +0xd4
    NSString * _m_inputPassword; // +0xd8
    long long _scene; // +0xe0
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)resetRightBarButton;
- (void)initTableView;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reloadTableViewInfo;
- (id)getIndependentPasswordInfoHeadView;
- (void)makeInputNameEdit:(id)arg1;
- (void)makeInputIdCardEdit:(id)arg1;
- (void)updateInputTitleLabelSize;
- (void)fixNameCellHeight;
- (void)fixIdCardCellHeight;
- (void)initInputNameEdit;
- (void)initInputIdCardEdit;
- (void)initInputTitleLabel;
- (void)initAcceptBtn;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (void)buttonStartLoading;
- (void)buttonStopLoading;
- (BOOL)isValidIdCardNumber:(id)arg1;
- (BOOL)idCardNumberAgeUnder18:(id)arg1;
- (BOOL)checkEdit;
- (void)didAccept;
- (void)OnReturn;
- (void)checkAcceptBtnBottomLocal;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)arg1;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(id)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (id)navigationBarBackgroundColor;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (id)m_inputPassword;
- (void)setM_inputPassword:(id)arg1;
- (unsigned int)m_setLimitedModePwdType;
- (void)setM_setLimitedModePwdType:(unsigned int)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void).cxx_destruct;
@end

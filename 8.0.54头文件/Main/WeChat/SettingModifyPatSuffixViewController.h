@interface SettingModifyPatSuffixViewController : MMAcceptAgreementBaseViewController <ModifyPatSuffixLogicDelegate, InputControllerDelegate>
{
    double m_fKeyboardHeight; // +0x68
    MMUITextField * m_patSuffixTextField; // +0x70
    ModifyPatSuffixLogic * m_modifyPatSuffixLogic; // +0x78
    MMUILabel * m_descLabel; // +0x80
    MMUILabel * m_errorMsgLabel; // +0x88
    MMTimer * m_timerResetErrorMsgLabelTask; // +0x90
    MMUILabel * m_topTitleLabel; // +0x98
    UIButton * m_acceptBtn; // +0xa0
    MMTableViewInfo * m_tableViewInfo; // +0xa8
    MMTableView * m_tableView; // +0xb0
    NSString * m_sessionId; // +0xb8
    id <SettingModifyPatSuffixViewControllerDelegate> _delegate; // +0xc0
    unsigned long long _scene; // +0xc8
    MMGrowTextView * _textView; // +0xd0
    UIView * _inputBackgroundView; // +0xd8
    WCCommonInputPanelLogic * _inputPanelLogic; // +0xe0
}
- (BOOL)shouldInteractiveDismiss;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)initData;
- (id)getInitPatSuffixTextFieldText;
- (unsigned int)getMaxPatSuffixLen;
- (void)layoutNavigationBar;
- (void)layoutTableView;
- (void)layoutTopTitleLable;
- (void)layoutAcceptBtn;
- (void)layoutTextView;
- (void)initInputPanelLogic;
- (void)reloadTableViewInfo;
- (id)getChatRoomInfoHeadView;
- (void)makePatSuffixEditCell:(id)arg1 CellInfo:(id)arg2;
- (id)genCellLeftLabel;
- (void)initFooterView;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)didAccept;
- (id)formatPatSuffix:(id)arg1;
- (BOOL)checkPatSuffixName:(id)arg1;
- (void)onCancel;
- (void)changeDescLabelAndErrorMsgLabel:(BOOL)arg1;
- (void)stopTimerResetErrorMsgLabelTask;
- (void)startTimerResetErrorMsgLabelTask;
- (void)onTimerResetErrorMsgLabelTask:(id)arg1;
- (void)OnModifyPatSuffixWithResult:(unsigned int)arg1 errorMsgTitle:(id)arg2 errorMsgContent:(id)arg3 errorCode:(int)arg4;
- (void)reportAction:(unsigned long long)arg1 withErrorCode:(int)arg2;
- (id)navigationBarBackgroundColor;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(BOOL)arg2;
- (void)keyboardWillShow;
- (void)keyboardDidHide;
- (void)relayoutAcceptButton;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)textViewTextDidExceedMaxLength;
- (id)m_topTitleLabel;
- (void)setM_topTitleLabel:(id)arg1;
- (id)m_acceptBtn;
- (void)setM_acceptBtn:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_sessionId;
- (void)setM_sessionId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)inputBackgroundView;
- (void)setInputBackgroundView:(id)arg1;
- (id)inputPanelLogic;
- (void)setInputPanelLogic:(id)arg1;
- (void).cxx_destruct;
@end


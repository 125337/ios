@interface MMLiveGameJoinTeamSettingCoinValueView : MMPageSheetBaseView <UITextFieldDelegate, MMLiveGameJoinTeamHelpViewDelegate>
{
    BOOL _finished; // +0x8
    BOOL _dismissForHelp; // +0x9
    unsigned int _max; // +0xc
    id <MMLiveGameJoinTeamSettingViewDelegate> _operationDelegate; // +0x10
    id <MMLiveGameJoinTeamSettingCoinValueViewDelegate> _delegate; // +0x18
    UIView * _contentView; // +0x20
    UIView * _topAreaView; // +0x28
    MMUIButton * _leftButton; // +0x30
    MMUIButton * _rightButton; // +0x38
    MMUILabel * _titleLabel; // +0x40
    UIView * _textFieldContainer; // +0x48
    UIImageView * _textFieldCoinIcon; // +0x50
    WCUITextField * _textField; // +0x58
    UILabel * _maxNoteLabel; // +0x60
    UIButton * _finishButton; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 max:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)layoutUI;
- (void)onViewPushed;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)finishButtonAction;
- (void)onTextFieldChanged:(id)arg1;
- (void)onKeyboradWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onMMLiveGameJoinTeamHelpViewBePoped;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)topAreaView;
- (void)setTopAreaView:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)textFieldContainer;
- (void)setTextFieldContainer:(id)arg1;
- (id)textFieldCoinIcon;
- (void)setTextFieldCoinIcon:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)maxNoteLabel;
- (void)setMaxNoteLabel:(id)arg1;
- (unsigned int)max;
- (void)setMax:(unsigned int)arg1;
- (id)finishButton;
- (void)setFinishButton:(id)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (BOOL)dismissForHelp;
- (void)setDismissForHelp:(BOOL)arg1;
- (void).cxx_destruct;
@end
